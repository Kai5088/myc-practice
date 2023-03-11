#include <stdio.h>

#define STRLEN  20

int main(void) {
    printf("Enter phone number:\n");
	char conv[25]={
        '2','2','2',
        '3','3','3',
        '4','4','4',
        '5','5','5',
        '6','6','6',
        '7','7','7','7',
        '8','8','8',
        '9','9','9'
    };
    char str[STRLEN];

    fgets(str, sizeof(str), stdin);
	
    int i=0;
    while ((i<STRLEN)&&(str[i] != '\n')) {
        if ((str[i] >= 'A')&&(str[i] <= 'Y')&&(str[i] != 'Q')) {
            printf("%c", conv[str[i]-'A']);
        } else {
            printf("%c", str[i]);
        }
        i++;
    }

    return 0;
}
