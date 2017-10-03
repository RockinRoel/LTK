set(LLRP_DEF ${CMAKE_SOURCE_DIR}/../Definitions/Core/llrp-1x0-def.xml)

add_custom_command(
    OUTPUT out_ltkcpp.h
    DEPENDS ltkcpp_gen_h.xslt ${LLRP_DEF}
    COMMAND xsltproc --stringparam RegistryName Core -o out_ltkcpp.h ${CMAKE_CURRENT_SOURCE_DIR}/ltkcpp_gen_h.xslt ${LLRP_DEF})
add_custom_command(
    OUTPUT out_ltkcpp.inc
    DEPENDS ltkcpp_gen_cpp.xslt ${LLRP_DEF}
    COMMAND xsltproc --stringparam RegistryName Core -o out_ltkcpp.inc ${CMAKE_CURRENT_SOURCE_DIR}/ltkcpp_gen_cpp.xslt ${LLRP_DEF})
add_custom_target(gen-ltkcpp DEPENDS out_ltkcpp.h out_ltkcpp.inc)

SET(LTKC_SRC
    ltkcpp_array.cpp
    ltkcpp_connection.cpp
    ltkcpp_element.cpp
    ltkcpp_encdec.cpp
    ltkcpp_error.cpp
    ltkcpp_framedecode.cpp
    ltkcpp_frameencode.cpp
    ltkcpp_frameextract.cpp
    ltkcpp_hdrfd.cpp
    ltkcpp_xmltextencode.cpp
    ltkcpp_xmltextdecode.cpp
    ltkcpp_typeregistry.cpp
    ltkcpp_genout.cpp)

add_library(ltkcpp ${LTKC_SRC})
add_dependencies(ltkcpp gen-ltkcpp)
target_link_libraries(ltkcpp PUBLIC /usr/lib64/libxml2.a /usr/lib64/libz.a /usr/lib64/liblzma.a)

install(TARGETS ltkcpp DESTINATION lib)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/out_ltkcpp.h DESTINATION include/ltkcpp)
install(FILES version.inc DESTINATION include/ltkcpp)
