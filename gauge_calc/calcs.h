#pragma once

class GaugeCalculator {
private:
	int sts;
	int rows;
public:
	GaugeCalculator(int stitches, int rs);
	int how_many_rows(float);
	int how_many_stitches(float);
};