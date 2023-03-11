#include <stdio.h>

int main() {
	int answer, floor = 0, ceiling = 100, guess;

	printf("Enter the answer number(0-100):\n");
	scanf("%d", &answer);
	printf("Game start!\n\n");
	printf("Enter a number(0-100): \n");
	scanf("%d", &guess);
	while (guess != answer) {
		if (answer > guess) {
            floor = guess;
		}
		else{
			ceiling = guess;
        }
        printf("Enter a number(%d-%d): \n", floor, ceiling);
        scanf("%d", &guess);
    }
    printf("BANG!");
    return 0;
}
