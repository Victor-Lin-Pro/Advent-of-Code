#include "stage.h"

Day1::Day1()
{
	character = 0;
	stage = 0;

	if (!file)
		return;
}

Day1::~Day1()
{
	fclose(file);
}

// Part 1
void Day1::CountStages()
{
	while ((character = fgetc(file)) != EOF)
	{
		if (character == '(')
			stage++;
		else if (character == ')')
			stage--;
		else
			stage;
	}

	printf("Stage %d", stage);
}