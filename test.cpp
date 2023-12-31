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
  std::string test = "--- I like markdown!";
  ctil.horizontalBreakUpdate(test);
  EXPECT_EQ(test, "<hr /> I like markdown!");
}

TEST(CtilTest, CodeBlockUpdateTest) {
  cdot::ctil ctil;
  std::string test = "`This is a sentence.`";
  ctil.codeblockUpdate(test);
  EXPECT_EQ(test, "<code>This is a sentence.</code>");
}

TEST(CtilTest, FencedCodeBlockUpdateTestHTML) {
  cdot::ctil ctil;
  std::string test = "```This is a sentence.```";
  ctil.fencedCodeBlockUpdate(test);
  EXPECT_EQ(test, "<pre><code class='language-html'>This is a sentence.</code></pre>");
}

TEST(CtilTest, EndsWithTrue) {
  cdot::ctil ctil;
  std::string test = "sample_file.txt";
  EXPECT_TRUE(ctil.ends_with(test, ".txt"));
}

TEST(CtilTest, EndsWithFalse) {
  cdot::ctil ctil;
  std::string test = "sample_file.txt";
  EXPECT_FALSE(ctil.ends_with(test, ".html"));
}