#include<stdio.h>

int main(int argc, char *argv[])
{

	int bugs = 100;
	double bug_rate = 1.2;

	printf("You ahve %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

	long universe_of_defects = 1L * 1024L *1024L * 1024;
	printf("The entire universe has %ld bugs.\n", universe_of_defects);

	double expected_bug=  bugs* bug_rate;
	printf("You are expected to have %f bugs.\n", expected_bug);

	double part_of_univers = expected_bug/ universe_of_defects;
	printf("That is only %e portion of the universe.\n", part_of_univers);

	//this make no sense, just a demo of something weired
	char null_byte = '\0';
	int care_percentage = bugs * null_byte;
	printf("Which means you should care %d%%.\n", care_percentage);


	return 0;
}
