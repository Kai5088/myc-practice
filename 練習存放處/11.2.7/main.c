# include<stdio.h>
# include <stdbool.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(void)
{
	int total_day ,year ,month,day;
	scanf("%d", &total_day);
	scanf("%d", &year);
	split_date(total_day,year,&month,&day);
	 printf("Day of year: %d, year: %d, month: %d, day: %d\n",
            total_day, year, month, day);
    return 0;
}
void split_date(int day_of_year, int year, int *month, int *day)
{
	if((year % 4 ==0 &&year % 100 !=0 )||  year % 400 ==0){
		if(day_of_year<=31){
			*month=1;*day=day_of_year;
		}
		else if(day_of_year<=60){
			*month=2;*day=day_of_year-31;
		}
		else if(day_of_year<=91){
			*month=3;*day=day_of_year-60;
		}
		else if(day_of_year<=121){
			*month=4;*day=day_of_year-91;
		}
		else if(day_of_year<=152){
			*month=5;*day=day_of_year-121;
		}
		else if(day_of_year<=182){
			*month=6;*day=day_of_year-152;
		}
		else if(day_of_year<=213){
			*month=7;*day=day_of_year-182;
		}
		else if(day_of_year<=244){
			*month=8;*day=day_of_year-213;
		}
		else if(day_of_year<=274){
			*month=9;*day=day_of_year-244;
		}
		else if(day_of_year<=305){
			*month=10;*day=day_of_year-274;
		}
		else if(day_of_year<=335){
			*month=11;*day=day_of_year-305;
		}
		else if(day_of_year<=366){
			*month=12;*day=day_of_year-335;
		}
	}
	else{
		if(day_of_year<=31){
			*month=1;*day=day_of_year;
		}
		else if(day_of_year<=59){
			*month=2;*day=day_of_year-31;
		}
		else if(day_of_year<=90){
			*month=3;*day=day_of_year-59;
		}
		else if(day_of_year<=120){
			*month=4;*day=day_of_year-90;
		}
		else if(day_of_year<=151){
			*month=5;*day=day_of_year-120;
		}
		else if(day_of_year<=181){
			*month=6;*day=day_of_year-151;
		}
		else if(day_of_year<=212){
			*month=7;*day=day_of_year-181;
		}
		else if(day_of_year<=243){
			*month=8;*day=day_of_year-212;
		}
		else if(day_of_year<=273){
			*month=9;*day=day_of_year-243;
		}
		else if(day_of_year<=304){
			*month=10;*day=day_of_year-273;
		}
		else if(day_of_year<=334){
			*month=11;*day=day_of_year-304;
		}
		else if(day_of_year<=365){
			*month=12;*day=day_of_year-334;
		}
	}
}


