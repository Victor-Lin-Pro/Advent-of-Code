#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Day1
{
public:
	Day1();
	~Day1();

	void CountStages();

private:

	int character;
	int stage;

	FILE* file = fopen("day1_input.txt", "r");
};