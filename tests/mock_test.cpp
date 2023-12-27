#include "..\source\summation\summation.h"
#include <gtest\gtest.h>
 Summation sum;
TEST(MockTest, TestRequestID_rand)
{
    const bool expected = 0;
   
    const bool actual = sum.onMessageARequested(111,4,0,1);
    ASSERT_EQ(expected, actual);
}
TEST(MockTest, TestRequestID_actual)
{
    const bool expected = 1;
 
    const bool actual = sum.onMessageARequested(111,3,1,1);
    ASSERT_EQ(expected, actual);
}
TEST(MockTest, TestMode_Speed)
{
    const bool expected = 1;
    
    const bool actual = sum.onMessageARequested(111,3,1,1);
    ASSERT_EQ(expected,actual);
}
TEST(MockTest, TestMode_Value)
{
    const bool expected = 0;
    
    const bool actual = sum.onMessageARequested(111,3,0,1);
    ASSERT_EQ(expected,actual);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}