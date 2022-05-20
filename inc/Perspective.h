#pragma once

#include <gtest/gtest.h>
#include <bio.h>

TEST(Perspective, ReturnCode)
{
	EXPECT_EQ(bio::CodePerspective::InvalidId(), 0);
	EXPECT_NE(bio::code::Success(), 0);
	EXPECT_NE(bio::code::Success(), bio::code::GeneralFailure());
	EXPECT_STREQ("Success", bio::CodePerspective::Instance().GetNameFromId(bio::code::Success()));
}
