#pragma once

#include <gtest/gtest.h>
#include <bio.h>

TEST(ByteStream, Constructor)
{
	::bio::ByteStream t = true;
	ASSERT_TRUE(bio::Cast< bool >(t));
}
