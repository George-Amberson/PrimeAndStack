#include "Method.h"
#include <gtest.h>

TEST(Stack, true1)
{
	string s = "[()()]";
	EXPECT_EQ(1, Method(s));
}

TEST(Stack, false1)
{
	string s = "]";
	EXPECT_NE(1, Method(s));
}

TEST(Stack, false2)
{
	string s = "{()())(}";
	EXPECT_NE(1, Method(s));
}



TEST(Stack, false3)
{
	string s = "{()()[]||}";
	EXPECT_NE(1, Method(s));
}






