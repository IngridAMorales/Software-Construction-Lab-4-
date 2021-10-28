#include "../header/rectangle.hpp"  

#include "gtest/gtest.h"

TEST(PosNumbers, Constructor){
   Rectangle rect(1,2); 
   EXPECT_EQ(rect, rect(1,2));
}

TEST(TestPosArea, Rectangle) {
   Rectangle rect1(3,4);
   int result = rect1.area();
   EXPECT_EQ(12, result);
}
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
