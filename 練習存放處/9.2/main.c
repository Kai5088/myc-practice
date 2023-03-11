c#include <stdio.h>
#include <stdlib.h>


int enter(int a, int b);
int main() {
	int c,d,g=0;
	g=enter(c,d);
	printf("%d", g);
	return 0;
}

int enter(int a, int b){
	int e,f;
	scanf("%d", &e);
	scanf("%d", &f);
	if (e>f){
		return e;
	}
	else {
		return f;
	}
}

