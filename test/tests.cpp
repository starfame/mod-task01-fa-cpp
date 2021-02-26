// Copyright 2020 GHA Test Team

#include <gtest/gtest.h>
#include "fun.h"

TEST(testset, test1) {
  const char * str = "qwe4  gftt e 555gr rrgr  grhh ";
  unsigned int result = faStr1(str);
  EXPECT_EQ(4,result);
}

