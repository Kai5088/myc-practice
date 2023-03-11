#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int height, length, width, volume, weight;
	printf("Enter height of box: ");
	scanf("%d", &height);
	printf("Enter length of box: ");
	scanf("%d", &length);
	printf("Enter width of box: ");
	scanf("%d", &width);
	volume=height*length*width;
	weight=(volume+165)/166;
	printf("weight %d", weight);
	return 0;
}
