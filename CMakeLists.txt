cmake_minimum_required(VERSION 3.16)

project(class1lesson LANGUAGES CXX)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)
add_executable(class1lesson src/main.cpp src/algoritm.cpp src/algoritm.h src/check.cpp src/filecheck.cpp)

include(GNUInstallDirs)
install(TARGETS class1lesson
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
