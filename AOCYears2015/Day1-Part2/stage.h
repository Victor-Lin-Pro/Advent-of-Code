#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Day1
{
public:
	Day1();
	~Day1();

	void CountStages();
	void FirstBasement();

private:

	int character = 0;
	int stage = 0;
	int position = 0;

	FILE* file = fopen("day1_part2_input.txt", "r");
};