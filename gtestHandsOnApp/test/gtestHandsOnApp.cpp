#include "../gtestHandsOnApp.hpp"
#include "gtest/gtest.h"

TEST(multiply, base)
{
    EXPECT_EQ(1, gtestHandsOnApp::multiply(1,1));
}