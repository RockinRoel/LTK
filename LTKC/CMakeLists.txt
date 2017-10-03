cmake_minimum_required(VERSION 2.4)
project(LTKC)

cmake_policy(SET CMP0003 NEW)

SET(LTKC_SRC
	Library/ltkc_array.c
	Library/ltkc_connection.c
	Library/ltkc_element.c
	Library/ltkc_encdec.c
	Library/ltkc_error.c
	Library/ltkc_error.c
	Library/ltkc_framedecode.c
	Library/ltkc_frameencode.c
	Library/ltkc_frameextract.c
	Library/ltkc_hdrfd.c
	Library/ltkc_xmltextencode.c
	Library/ltkc_xmltextdecode.c
	Library/ltkc_typeregistry.c
	Library/ltkc_genout.c)

include_directories(/usr/include/libxml2)

add_library(libltkc ${LTKC_SRC})
target_link_libraries(libltkc PUBLIC /usr/lib64/libxml2.a /usr/lib64/libz.a /usr/lib64/liblzma.a)

add_executable(dx201 Tests/dx201.c)
target_link_libraries(dx201 libltkc)
target_include_directories(dx201 PUBLIC Library)

add_executable(xml2llrp Tests/xml2llrp.c)
target_link_libraries(xml2llrp libltkc m)
target_include_directories(xml2llrp PUBLIC Library)

add_executable(llrp2xml Tests/llrp2xml.c)
target_link_libraries(llrp2xml libltkc)
target_include_directories(llrp2xml PUBLIC Library)

add_executable(example1 Examples/example1.c)
target_link_libraries(example1 libltkc)
target_include_directories(example1 PUBLIC Library)
