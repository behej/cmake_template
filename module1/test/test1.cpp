#include "gtest/gtest.h"
#include "module1.h"

TEST(sample, ref)
{
    auto testedObject{Module1(3)};
    EXPECT_EQ(testedObject.getValue(), 3);
}
