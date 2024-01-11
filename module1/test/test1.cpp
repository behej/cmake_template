#include "gtest/gtest.h"
#include "module1.h"

TEST(sample, ref)
{
    ASSERT_EQ(function1(), 1);
}

TEST(sample, ref2)
{
    ASSERT_EQ(function1(), 1);
}