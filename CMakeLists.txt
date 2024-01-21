cmake_minimum_required(VERSION 3.22)
project(testModules
        VERSION 1.0.0.0
        LANGUAGES CXX)

enable_testing()
include(FetchContent)


# Config propre à C++
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
# set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_subdirectory(core)
add_subdirectory(module1)

add_executable(MyProg main.cpp)
target_link_libraries(MyProg PUBLIC core module1)