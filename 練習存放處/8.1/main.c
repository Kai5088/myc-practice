#include <stdio.h>

int main() {
	int b[6][6]={{9, 1, 1, 1, 1, 1},
	             {1, 9, 1, 1, 1, 1},
				 {1, 1, 9, 1, 1, 1},
				 {1, 1, 1, 9, 1, 1},
				 {1, 1, 1, 1, 9, 1},
				 {1, 1, 1, 1, 1, 9}};
	int i;			 
	for (i=0 ; i<5 ; i++)
		printf("%d ", b[0][i]);
	for (i=5 ; i<6 ; i++)
		printf("%d", b[0][i]);		
		printf("\n");
		for (i=0 ; i<5 ; i++)
		printf("%d ", b[1][i]);
	for (i=5 ; i<6 ; i++)
		printf("%d", b[1][i]);		
		printf("\n");
		for (i=0 ; i<5 ; i++)
		printf("%d ", b[2][i]);
	for (i=5 ; i<6 ; i++)
		printf("%d", b[2][i]);		
		printf("\n");
		for (i=0 ; i<5 ; i++)
		printf("%d ", b[3][i]);
	for (i=5 ; i<6 ; i++)
		printf("%d", b[3][i]);		
		printf("\n");
		for (i=0 ; i<5 ; i++)
		printf("%d ", b[4][i]);
	for (i=5 ; i<6 ; i++)
		printf("%d", b[4][i]);		
		printf("\n");
		for (i=0 ; i<5 ; i++)
		printf("%d ", b[5][i]);
	for (i=5 ; i<6 ; i++)
		printf("%d", b[5][i]);		
		
		
	
	return 0;
}
