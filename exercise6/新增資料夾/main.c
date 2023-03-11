#include <stdio.h>


int main() {
	float a, max=0;
	scanf("%f", &a);
	printf("Enter a number (enter 0 to end): \n");
	while(a!=0){
		printf("Enter a number (enter 0 to end): \n");
		if (max<a){
			max=a;
		}
		scanf("%f", &a);
	}
	printf("The largest number entered was %.2f", max);
	return 0;
}
