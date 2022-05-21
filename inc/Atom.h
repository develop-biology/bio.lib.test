#pragma once


#include <gtest/gtest.h>
#include <bio.h>

TEST(Atom, BondPrimitive)
{
	::bio::chemical::Atom a;
	EXPECT_EQ(a.GetAllBonds()->Size(), 0);
	EXPECT_TRUE(a.FormBond< int >(1234));
	EXPECT_EQ(a.GetAllBonds()->Size(), 1);
	EXPECT_EQ(a.As< int >(), 1234);
}
