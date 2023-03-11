#include <stdio.h>


int main() {
	int m, n, rem,a,b,c,d;
            printf("Enter a fraction (x/y):\n");
            scanf("%d/%d",&m, &n);
            a=m;
            b=n;
            while(n != 0){
                rem = m % n;
                m = n;
                n = rem;
            }
            c=a/m;
            d=b/m;
            printf("GCD = %d\n",m);
			printf("In lowest terms: %d/%d", c,d);
	return 0;
}
