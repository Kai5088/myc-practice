#include <stdio.h>

#define STRLEN  20

int main(void)
{
    char str[STRLEN];
    printf("Enter a first and last name: ");
    fgets(str, sizeof(str), stdin); 
    

    //��� Last name ==> �q�Ů�H��~��ܥX��
    _Bool bprint = 0;
    int i=0;
    while ((i<STRLEN)&&(str[i] != '\n')) {
        if (bprint) {
            printf("%c", str[i]);
        } else {
            if (str[i]==' ') {
                bprint = 1;
                
            }
        }
        i++;
    }
    str[i]='\0';
    
    //��� First name �Y�g ==> ��ܲĤ@�Ӧr��
    printf(", %1c.", str[0]);
    
    return 0;
}
