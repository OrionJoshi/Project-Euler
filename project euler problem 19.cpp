/*

project euler problem 19

problem-:
You are given the following information, but you may prefer to do some research for yourself.

    1 Jan 1900 was a Monday.
    Thirty days has September,
    April, June and November.
    All the rest have thirty-one,
    Saving February alone,
    Which has twenty-eight, rain or shine.
    And on leap years, twenty-nine.
    A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.

How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?


*/
#include<stdio.h>
#include<conio.h>

int main(void){
	
	int monthdays[12]={
		
					31,//jan
					29,//feb
					31,//mar
					30,//apr
					31,//may
					30,//jun
					31,//jul
					31,//aug
					30,//sep
					31,//oct
					30,//nov
					31//dec
					
	
	};
	int suncount =0;
	int month;
	int year;
	int dayofweek=1;
	
	//get starting day of the week for 1/1/1901
	
	for(month=1;month<=12;month++){
		dayofweek+=(monthdays[month-1]%7);
		if(dayofweek>7){
			dayofweek=(0+dayofweek%7);
		}
		
	}
	//loop through  20th century,count up all sunday on 1st of month
	
	for(year=1901;year<=2000;year++){
		//check for leap year
		if(((year%100==0)&&(year%400==0))||(year%4==0)){
			monthdays[1]=29;//because of leap year
		}else{
				monthdays[1]=28;
		}
		for(month=1;month<=12;month++){
			dayofweek+=(monthdays[month-1]%7);
			if(dayofweek>7){
				dayofweek=(0+dayofweek%7);
			}else if(dayofweek==7){
				suncount++;
		}
		
	}
	}

	printf("Suncount=%d",suncount);
	
	
	getch();
	return 0;
}
