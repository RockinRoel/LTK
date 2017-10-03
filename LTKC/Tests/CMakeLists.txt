include_directories(../Library)

add_executable(dx201 dx201.c)
target_link_libraries(dx201 ltkc)

add_executable(xml2llrp xml2llrp.c)
target_link_libraries(xml2llrp ltkc m)

add_executable(llrp2xml llrp2xml.c)
target_link_libraries(llrp2xml ltkc)
