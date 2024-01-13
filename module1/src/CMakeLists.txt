
set(module1_src
    module1.cpp)


add_library(module1 ${module1_src})


target_include_directories(module1
                           INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
                           )

target_link_libraries(module1 core)