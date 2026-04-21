cmake_minimum_required(VERSION 3.31)
project(VVP_Lab7)

set(CMAKE_CXX_STANDARD 20)

add_executable(VVP_Lab7
    WeahterService.h
    Service.h
    JsonService.h
    JsonService.cpp
    main.cpp
    XmlService.h
    XmlService.cpp
        )
