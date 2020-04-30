#include "test.hpp"

void ExampleTest::SetUp()
{
}

TEST(TRUE, TRUE)
{
    //return true
    ASSERT_EQ(1, 1);
}

TEST_F(ExampleTest, echo)
{
    int a = 10;
    int b = echo(a);

    ASSERT_EQ(a, b);
}