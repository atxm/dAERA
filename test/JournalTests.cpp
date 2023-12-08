#include "../googletest/googletest/include/gtest/gtest.h"
#include "../header/Journal.h"
#include "../header/Page.h"

TEST(JournalTests, DefaultConstructor) {
   Journal journal0;

   ASSERT_TRUE(journal0.getNumPages() == 1);
}

TEST(JournalTests, AddPage) {
   Journal journal1;
   Page page0(2);

   journal1.addPage(page0);

   ASSERT_EQ(journal1.getNumPages(), 2);
}

TEST(PageTests, DefaultConstructor) {
   Page page0;

   ASSERT_EQ(page0.getPageNum(), 0);
}

TEST(PageTests, ParameterizedConstructor0) {
   Page page1(2);

   ASSERT_TRUE(page1.getPageNum() == 2);

}

TEST(PageTests, ParameterizedConstructor1) {
   Page page2("This is a test", 3);

   ASSERT_EQ(page2.getPageNum(), 3);
}