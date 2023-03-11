#include <stdio.h>

#define STRLEN  20

int main(void)
{
    char str[STRLEN];
    printf("Enter a first and last name: ");
    fgets(str, sizeof(str), stdin); 
    

    //顯示 Last name ==> 從空格以後才顯示出來
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
    
    //顯示 First name 縮寫 ==> 顯示第一個字元
    printf(", %1c.", str[0]);
    
    return 0;
}
