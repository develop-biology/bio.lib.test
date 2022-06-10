#pragma once

#include <gtest/gtest.h>
#include <bio.h>

TEST(Molecule, Constructor)
{
	bio::molecular::Molecule m("Constructor Test");
	ASSERT_TRUE(m.IsEnabled());
	ASSERT_STREQ(m.GetName().AsCharString(), "Constructor Test");
}

TEST(Molecule, Define)
{
	bio::molecular::Molecule m("Tester");
	m.Define< bool >("Test", false);
	EXPECT_FALSE(m.RotateTo("Test")->Probe< bool >());
	m.RotateTo("Test")->Bind(true);
	EXPECT_TRUE(m.RotateTo("Test")->Probe< bool >());
}
