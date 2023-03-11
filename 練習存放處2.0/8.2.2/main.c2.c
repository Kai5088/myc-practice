#include <stdio.h>

int main() {
	int a[5][5],j,b,i;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d", &a[j][i]);
		}
	}
	printf("Enter row 1:\nEnter row 2:\nEnter row 3:\nEnter row 4:\nEnter row 5:\n");
	printf("Row totals: ");
	for(i=0,b=0;i<5;i++){
		for(j=0,b=0;j<5;j++){
			b+=a[j][i];
		}
		printf(" %d", b);
	}
	printf("\n");
	printf("Column totals: ");
	for(i=0,b=0;i<5;i++){
		for(j=0,b=0;j<5;j++){
			b+=a[i][j];
		}
		printf(" %d", b);
	}
	return 0;
	
}
