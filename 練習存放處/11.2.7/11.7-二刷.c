# include<stdio.h>
# include <stdbool.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(void)
{
	int total_day  ,year ,month,day;
	scanf("%d", &total_day);
	scanf("%d", &year);
	split_date(total_day,year,&month,&day);
	 printf("Day of year: %d, year: %d, month: %d, day: %d\n",
            total_day, year, month, day);
    return 0;
}
void split_date(int day_of_year, int year, int *month, int *day)
{
	int i =0;
	bool end = false;
	for (i =1;i <=12 && end != true;i++ )
	{
		switch(i){
			case 1:
			case 3:	
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: 
				if(day_of_year <= 31)	
					end =true;
				else
					day_of_year -= 31;
				break;	
			case 4:
			case 6:	
			case 9:
			case 11:
			 	if(day_of_year <= 30)	
					end =true;
				else
					day_of_year -= 30;
				break;
			case 2:
				if((year % 4 ==0 &&year % 100 !=0 )||  year % 400 ==0)
				{
					if(day_of_year <= 29)	
						end =true;
					else
						day_of_year -= 29;
				}
				else
				{
					if(day_of_year <= 28)	
						end =true;
					else
						day_of_year -= 28;
				}
		
		}		
	}
	
	*month = i-1;
	*day = day_of_year;
}

