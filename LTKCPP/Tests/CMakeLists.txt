include_directories(../Library)

add_executable(dx201 dx201.cpp)
target_link_libraries(dx201 ltkcpp)

add_executable(xml2llrp xml2llrp.cpp)
target_link_libraries(xml2llrp ltkcpp)

add_executable(llrp2xml llrp2xml.cpp)
target_link_libraries(llrp2xml ltkcpp)
