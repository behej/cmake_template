#include "gtest/gtest.h"
#include "module1.h"

TEST(TestModule1, test1)
{
    auto testedObject{Module1(3)};
    EXPECT_EQ(testedObject.getValue(), 3);
}

TEST(TestModule1, test2)
{
    auto testedObject{Module1(5)};
    EXPECT_EQ(testedObject.getValue(), 5);
}
