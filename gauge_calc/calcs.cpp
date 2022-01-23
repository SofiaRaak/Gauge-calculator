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

//

