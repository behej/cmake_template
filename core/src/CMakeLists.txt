
set(core_src
    core.cpp)


add_library(core STATIC ${core_src})


target_include_directories(core
                           PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
                           )