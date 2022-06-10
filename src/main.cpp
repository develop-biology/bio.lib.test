#include <gtest/gtest.h>
#include "PoC.h"
#include "Atom.h"
#include "Arrangement.h"
#include "ByteStream.h"
#include "Cell.h"
#include "Molecule.h"
#include "Organism.h"
#include "Perspective.h"
#include "TypeName.h"

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
