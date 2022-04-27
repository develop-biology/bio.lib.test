#include "gtest/gtest.h"
#include "poc.h"
#include "bio.h"

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
