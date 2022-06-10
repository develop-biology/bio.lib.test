#pragma once

#include <gtest/gtest.h>
#include <bio.h>

TEST(Organism, Constructor)
{
	::bio::organic::Organism o;
	ASSERT_TRUE(o.IsEnabled());
}
