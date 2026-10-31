cmake_minimum_required(VERSION 3.12)
project(VelocityKinematics VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(cpp_math
    cpp_math/kinematics.cpp
    cpp_math/kinematics.hpp
)

add_executable(kinematics_demo main.cpp)
target_link_libraries(kinematics_demo PRIVATE cpp_math)