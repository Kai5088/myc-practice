#include<stdio.h>
int main(){
    int startDay, daysOfMonth, counter;
    
    scanf("%d", &daysOfMonth);
    
    scanf("%d", &startDay);
    for(counter = 0; counter < startDay - 1 ; counter++){
        printf("  ");
    }
    for(counter = 1; counter < 9 - startDay; counter++){
        printf("%2d ", counter);
    }
    printf("\n");
    for(counter = 9 - startDay; counter <= daysOfMonth; counter++){
        printf("%2d ", counter);
        if(counter == 15 - startDay || counter == 22 - startDay || counter == 29 - startDay || counter == 36 - startDay){
            printf("\n");
        }
    }
    return 0;
}
