#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"

#include <string>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify G & C Content From DNA Strand in Percentage "){

	REQUIRE(get_gc_content("AGCTATAG") == 0.375);




}
