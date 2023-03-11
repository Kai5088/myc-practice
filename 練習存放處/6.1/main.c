#include<stdio.h>
int main() {
		float a, b = 0;
		printf("Enter a number (enter 0 to end): \n");
        scanf("%f", &a);
	    while(a != 0){
            if(a > b){
                b = a;
            }
            printf("Enter a number (enter 0 to end): \n");
            scanf("%f", &a);
        }
        printf("The largest number entered was %.2f\n", b);

        return 0;
}
