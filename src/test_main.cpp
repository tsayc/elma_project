#include <stdio.h>
#include "gtest/gtest.h"
//! unit test main
GTEST_API_ int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}