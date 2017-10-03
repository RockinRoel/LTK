set(LLRP_DEF ${CMAKE_SOURCE_DIR}/../Definitions/Core/llrp-1x0-def.xml)

add_custom_command(
    OUTPUT out_ltkc.h
    DEPENDS ltkc_gen_h.xslt ${LLRP_DEF}
    COMMAND xsltproc --stringparam RegistryName Core -o out_ltkc.h ${CMAKE_CURRENT_SOURCE_DIR}/ltkc_gen_h.xslt ${LLRP_DEF})
add_custom_command(
    OUTPUT out_ltkc.inc
    DEPENDS ltkc_gen_c.xslt ${LLRP_DEF}
    COMMAND xsltproc --stringparam RegistryName Core -o out_ltkc.inc ${CMAKE_CURRENT_SOURCE_DIR}/ltkc_gen_c.xslt ${LLRP_DEF})
add_custom_target(gen-ltkc DEPENDS out_ltkc.h out_ltkc.inc)

SET(LTKC_SRC
    ltkc_array.c
    ltkc_connection.c
    ltkc_element.c
    ltkc_encdec.c
    ltkc_error.c
    ltkc_error.c
    ltkc_framedecode.c
    ltkc_frameencode.c
    ltkc_frameextract.c
    ltkc_hdrfd.c
    ltkc_xmltextencode.c
    ltkc_xmltextdecode.c
    ltkc_typeregistry.c
    ltkc_genout.c)

add_library(ltkc ${LTKC_SRC})
add_dependencies(ltkc gen-ltkc)
target_link_libraries(ltkc PUBLIC /usr/lib64/libxml2.a /usr/lib64/libz.a /usr/lib64/liblzma.a)

install(TARGETS ltkc DESTINATION lib)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/out_ltkc.h DESTINATION include/ltkc)
install(FILES version.inc DESTINATION include/ltkc)
