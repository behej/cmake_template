#include "gtest/gtest.h"
#include "core.h"
#include "mockInterface.h"

using ::testing::Return;

class TestCore : public testing::Test
{
protected:
    TestCore() : m_mockInterface(), m_Core(m_mockInterface)
    {
    }

protected:
    Core m_Core;
    MockInterface m_mockInterface;
};

TEST_F(TestCore, MethodBarDoesAbc)
{
    EXPECT_CALL(m_mockInterface, getValue()).WillOnce(Return(3)).WillOnce(Return(10));

    EXPECT_EQ(m_Core.method1(5), 15);
    EXPECT_EQ(m_Core.method1(5), 50);
}
