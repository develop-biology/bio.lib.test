#pragma once

#include <gtest/gtest.h>
#include <bio.h>

TEST(ByteStream, Basic)
{
	::bio::ByteStream t = true;
	ASSERT_TRUE(bio::Cast< bool >(t));
}
