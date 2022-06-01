#pragma once

#include <gtest/gtest.h>
#include <bio.h>

TEST(Molecule, Constructor)
{
	::bio::molecular::Molecule m;
	ASSERT_TRUE(m.IsEnabled());
}
