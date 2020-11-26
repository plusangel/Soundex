cmake_minimum_required(VERSION 3.10.2)
project(Soundex)

set(CMAKE_CXX_STANDARD 14)

if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
else()
    message(WARNING "The file conanbuildinfo.cmake doesn't exist, you have to run conan install first")
endif()

enable_testing()

include_directories(include)

add_library(Soundex src/Soundex.cpp include/Soundex.h)

add_executable(soundex_test tests/Test.cpp)
target_link_libraries(soundex_test Soundex ${CONAN_LIBS})
add_test(NAME soundex_test  COMMAND $<TARGET_FILE:soundex_test>)