#pragma once

#include <gtest/gtest.h>
#include <bio.h>

TEST(Cell, Constructor)
{
	::bio::cellular::Cell c;
	ASSERT_TRUE(c.IsEnabled());
}
