#include "../header/rectangle.hpp"  

#include "gtest/gtest.h"

TEST(TestPosArea, Rectangle) {
   Rectangle rect1(3,4);
   EXPECT_EQ(12, rect1.area());
}
TEST(TestNegArea, Rectangle) {
   Rectangle rect1(-3,-4);
   EXPECT_EQ(12, rect1.area());
}
TEST(TestZeroArea, Rectangle) {
   Rectangle rect1(0,0);
   EXPECT_EQ(0, rect1.area());
}
TEST(TestPosPerimeter, Rectangle) {
   Rectangle rect1(3,4);
   EXPECT_EQ(14, rect1.perimeter());
}
TEST(TestNegPerimeter, Rectangle) {
   Rectangle rect1(-3,-4);
   EXPECT_EQ(-14, rect1.perimeter());
}
TEST(TestZeroPerimeter, Rectangle) {
   Rectangle rect1(0,0);
   EXPECT_EQ(0, rect1.perimeter());
}
TEST(TestWidthConstructor, Rectangle) {
   Rectangle rect1(3,4);
   EXPECT_EQ(3, rect1.get_width());
}
TEST(TestHeightConstructor, Rectangle) {
   Rectangle rect1(3,4);
   EXPECT_EQ(4, rect1.get_height());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
