#include "pch.h"
#include "ctil.cpp"
#include "ctil.h"

TEST(CtilTest, TxtSuffixTrue) {
  cdot::ctil ctil;
  EXPECT_TRUE(ctil.has_txt_suffix("test.txt"));
}

TEST(CtilTest, TxtSuffixFalse) {
  cdot::ctil ctil;
  EXPECT_FALSE(ctil.has_txt_suffix("test.md"));
}

TEST(CtilTest, HorizontalBreaksReplaced) {
  cdot::ctil ctil;
  std::string test = "--- ";// remove later
  //std::string test = "--- I like markdown!";
  ctil.horizontalBreakUpdate(test);
  EXPECT_EQ(test, "<hr /> I like markdown!");
}