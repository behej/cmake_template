add_executable(test_core test_core.cpp mockInterface.h)

target_link_libraries(test_core core GTest::gtest_main gmock_main)

include(GoogleTest)
gtest_discover_tests(test_core)