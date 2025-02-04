cmake_minimum_required(VERSION 3.10)

project(Test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

find_package(fmt CONFIG REQUIRED)
find_package(AWSSDK CONFIG COMPONENTS core dynamodb kinesis s3 REQUIRED)
add_executable(Test main.cpp)
target_include_directories(Test PRIVATE ${AWSSDK_INCLUDE_DIRS})
target_link_libraries(Test PRIVATE ${AWSSDK_LIBRARIES})
target_link_libraries(Test PRIVATE fmt::fmt)
