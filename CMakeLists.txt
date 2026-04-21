cmake_minimum_required(VERSION 3.31)
project(VVP_Lab7)

set(CMAKE_CXX_STANDARD 20)

add_executable(VVP_Lab7 
    main.cpp 
    JsonService.cpp 
    XmlService.cpp 
    pugixml-1.15/src/pugixml.cpp 
)


target_include_directories(VVP_Lab7 PRIVATE pugixml-1.15/src)