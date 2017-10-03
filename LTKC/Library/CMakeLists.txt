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

add_library(libltkc ${LTKC_SRC})
target_link_libraries(libltkc PUBLIC /usr/lib64/libxml2.a /usr/lib64/libz.a /usr/lib64/liblzma.a)
