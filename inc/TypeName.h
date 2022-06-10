#pragma once

#include <gtest/gtest.h>
#include <bio.h>

TEST(TypeName, Bool)
{
	ASSERT_STREQ(bio::String(bio::type::TypeName< bool >()).AsCharString(), "bool");
}
