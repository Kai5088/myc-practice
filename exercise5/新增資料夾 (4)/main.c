#include <stdio.h>

int main() {
	float a;
	scanf("%f", &a);
	printf("Enter amount of taxable income: ");
	printf("Tax due is: $");
	if(a<750){
		a=a*0.01;
		printf("%.2f", a);
	}
	else if(a<2250){
		a=750*0.01+(a-750)*0.02;
		printf("%.2f", a);
	}
	else if(a<3750){
		a=750*0.01+1500*0.02+(a-2250)*0.03;
		printf("%.2f", a);
	}
	else if(a<5250){
		a=750*0.01+1500*0.02+1500*0.03+(a-3750)*0.04;
		printf("%.2f", a);
	}
	else if(a<7000){
		a=750*0.01+1500*0.02+1500*0.03+1500*0.04+(a-5250)*0.05;
		printf("%.2f", a);
	}
	else if(a>7000){
		a=750*0.01+1500*0.02+1500*0.03+1500*0.04+1750*0.05+(a-7000)*0.06;
		printf("%.2f", a);
	}
	return 0;
}
