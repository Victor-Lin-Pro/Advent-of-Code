#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Day2
{
public:
	Day2();
	~Day2();

	void CalculateWrappingPaper();
	void CalculateRibbonLength();

private:
	FILE* file = fopen("day2_part2_input.txt", "r");
};