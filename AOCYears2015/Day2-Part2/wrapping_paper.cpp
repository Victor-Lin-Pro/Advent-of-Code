#include "wrapping_paper.h"

Day2::Day2()
{
	if (!file)
		return;
}

Day2::~Day2()
{
	fclose(file);
}

// Part 1
void Day2::CalculateWrappingPaper()
{
	int length = 0;
	int width = 0;
	int height = 0;
	int total_paper = 0;
	while (fscanf(file, "%dx%dx%d\n", &length, &width, &height) != EOF)
	{
		int side1 = length * width;
		int side2 = width * height;
		int side3 = height * length;
		int surface_area = 2 * side1 + 2 * side2 + 2 * side3;

		int smallest_side = side1;
		if (side2 < smallest_side)
			smallest_side = side2;
		if (side3 < smallest_side)
			smallest_side = side3;

		total_paper += surface_area + smallest_side;
	}
	printf("Total wrapping paper needed %d", total_paper);
}

void Day2::CalculateRibbonLength()
{
	int length = 0;
	int width = 0;
	int height = 0;
	int total_ribbon = 0;
	while (fscanf(file, "%dx%dx%d\n", &length, &width, &height) != EOF)
	{
		int side1 = 2 * (length + width);
		int side2 = 2 * (width + height);
		int side3 = 2 * (height + length);

		int smallest_perimeter = side1;
		if (side2 < smallest_perimeter)
			smallest_perimeter = side2;
		if (side3 < smallest_perimeter)
			smallest_perimeter = side3;

		int bow = length * width * height;

		total_ribbon += smallest_perimeter + bow;
	}
	printf("Total ribbon length needed %d", total_ribbon);
}
