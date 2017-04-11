cmake_minimum_required(VERSION 3.6)
project(BeMyDev)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    h/Etape.h
    h/Hackathon.h
    h/Resultat.h
    h/Team.h
    h/User.h
    Etape.cpp
    Hackathon.cpp
    main.cpp
    Resultat.cpp
    Team.cpp
    User.cpp Display.cpp h/Display.h)

add_executable(BeMyDev ${SOURCE_FILES})