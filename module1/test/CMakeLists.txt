

add_executable(test_module1  test1.cpp test2.cpp)

# target_include_directories(test_module1 PRIVATE  ${GTEST_INCLUDE_DIRS})

target_link_libraries(test_module1 module1 GTest::gtest_main)


include(GoogleTest)
gtest_discover_tests(test_module1)
