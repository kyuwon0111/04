#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int time;
	
	printf("input the second : ");
	scanf("%i", &time);
	
	printf("The time for %i second is %i : %i : %i", time, time/3600, (time%3600)/60, (time%3600)%60);
	
	return 0;
}