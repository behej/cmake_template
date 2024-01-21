add_executable(test_module1  test1.cpp)

target_link_libraries(test_module1 module1 GTest::gtest_main)


include(GoogleTest)
gtest_discover_tests(test_module1)
