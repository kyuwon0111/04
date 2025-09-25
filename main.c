#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int m, s;
	printf("Input the second : ");
	scanf("%i", &x);
	
	m = x/60;
	s = x%60;
	
	printf("the time is %i : %i\n", m, s);
	
	
	return 0;
}