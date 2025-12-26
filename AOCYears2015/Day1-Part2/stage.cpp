#include "stage.h"

Day1::Day1()
{
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

// Part 2
void Day1::FirstBasement()
{
	while ((character = fgetc(file)) != EOF)
	{
		if (stage == -1)
		{
			printf("Position when Santa enter into the basement %d", position);
			return;
		}

		if (character == '(')
		{
			position++;
			stage++;
		}
		else if (character == ')')
		{
			position++;
			stage--;
		}
		else
			stage;
	}

	printf("Santa never enter into the basement");
}
