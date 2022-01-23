#include "calcs.h"
#include <iostream>
#include <string>


GaugeCalculator::GaugeCalculator(int stitches, int rs) {
	sts = stitches;
	rows = rs;
}

//equation to calculate how many rows a certain length in cm require
int GaugeCalculator::how_many_rows(float length) {
	int num_rows;
	num_rows = (rows * length) / 10;
	return num_rows;
}

//equation to calculate how many stitches for a certain width
int GaugeCalculator::how_many_stitches(float width) {
	int num_sts;
	num_sts = (sts * width) / 10;
	return num_sts;
}

//Function to estimate yarn class
std::string GaugeCalculator::which_yarn_class() {
	std::string yarn_class;
	
	if (sts >= 23) {
		yarn_class = "A (sport or fingering)";
	}
	else if (sts < 23 && sts > 17) {
		yarn_class = "B (DK or worsted)";
	}
	else if (sts <= 17 && sts > 12) {
		yarn_class = "C (aran or worsted)";
	}
	else if (sts <= 12 && sts > 10) {
		yarn_class = "D (chunky)";
	}
	else if (sts <= 10 && sts > 8) {
		yarn_class = "E (super bulky)";
	}
	else if (sts < 8) {
		yarn_class = "F (super bulky or jumbo)";
	}
	else {
		yarn_class = "Unknown!";
	}

	return yarn_class;
}

//TODO
//add equation to calculate decreases per nth row to go from x cm width to y cm width
//add equation to calculate decreases per nth stitch when decreasing from x sts to y sts

