cmake_minimum_required(VERSION 3.25.1)
project(Lucy VERSION 2.0.1)

set(CMAKE_CXX_STANDARD 20)

set (Sample_VERSION_MAJOR 2)
set (Sample_VERSION_MINOR 0)
set (Sample_VERSION_PATCH 1)



include_directories("/home/gabriel/Desktop/WorkSpace/Lucy-0X3/bin/")
#add_executable(dataBase.exe db.cpp )
add_executable(main.exec main.cpp)


configure_file(
  "${PROJECT_SOURCE_DIR}/Version.h.in"
  "${PROJECT_BINARY_DIR}/Version.h"
  )

  set( MY_SOURCES main.cpp db.cppp)
  message(STATUS "Meus Codigos Fontes: ${MY_SOURCES}")