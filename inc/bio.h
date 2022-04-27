#pragma once

#include <gtest/gtest.h>
#include <bio/common/ByteStream.h>
#include <bio/common/Cast.h>
#include <bio/organic/Organism.h>
#include <bio/chemical/common/BondTypes.h>

TEST(BIO, Basic)
{
	bio::ByteStream t = true;
	ASSERT_TRUE(bio::Cast< bool >(t));
}
