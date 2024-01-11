#include "gtest/gtest.h"
#include "module1.h"

TEST(bla, ref)
{
    ASSERT_EQ(function1(), 1);
    ASSERT_FALSE(false);
}

TEST(bla, ref2)
{
    ASSERT_EQ(function1(), 1);
}