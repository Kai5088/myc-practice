#include <stdio.h>



int main(void)
{
    char input;
    int characters = 0, words = 1;

    printf("Enter a sentence: \n");

    while ((input = getchar()) != '\n') {
        switch (input) {
            case ' ':  
                words++;
                break;
            default:
                characters++;
                break;
        }
    }

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Average word length: %.1f", (float) characters / words);

    return 0;
}

