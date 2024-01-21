set(core_src
    src/core.cpp
    src/core_details.cpp)


add_library(core STATIC ${core_src})


target_include_directories(core
PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/
PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/
)



add_subdirectory(test)