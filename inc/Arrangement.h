#pragma once

#include <gtest/gtest.h>
#include <bio.h>

TEST(Arrangement, Basic)
{
	::bio::Arrangement< bool > a;
	EXPECT_EQ(a.Size(), 0);
	a.Add(true);
	EXPECT_TRUE(bio::Cast< bool >(a[1]));
	EXPECT_EQ(a.Size(), 1);
}
