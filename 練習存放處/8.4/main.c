#include <stdio.h>
#include <stdbool.h>


int main() {
	bool digit_seen[10] = {false};
	int digit, n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	while (n>0) {
		digit=n%10;
		if (digit_seen[digit])
		break;
	 digit_seen[digit]=true;
	 n/=10;	
	}
	
	if (n>0)
		printf("Repeated digit\n");
	else
		printf("No repeated digit\n");
			
	return 0;
}
