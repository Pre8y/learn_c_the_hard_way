#include<stdio.h>

int main(int argc, char *argv[])
{
	int areas[]  = {10, 12, 13, 14, 20};
	char name="Zed";
	char full_name[] = {
	'Z', 'e', 'd',
	' ', 'A', '.', ' ', 'S', 'h', 'a', 'w', '\0'
	};
	//WARNING :  on some systems you may have to change the %ld in this cod eto
	// a %u since it will use unsigned ints
	
	printf("The sizze of an int : %ld\n", sizeof(int));
	printf("The size of areas (int[]): %ld\n", sizeof(areas));
	printf("The number of ints in areas : %ld\n", sizeof(areas)/ sizeof(int));
	printf("The first area is %d, the second area is %d.\n", areas[0], areas[1]);
	printf("The size of char : %ld\n", sizeof(char));

}
