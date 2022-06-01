#include <gtest/gtest.h>
#include "PoC.h"
#include "Atom.h"
#include "Arrangement.h"
#include "ByteStream.h"
#include "Molecule.h"
#include "Perspective.h"

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
