#include<stdio.h>
#include<stdlib.h>
void main(){
    int date,month,year;
    int date2,month2,year2;
    printf("Enter start date (dd/mm/yyyy): ");
    scanf("%d/%d/%d",&date,&month,&year);
    printf("Enter end date (dd/mm/yyyy): ");
    scanf("%d/%d/%d",&date2,&month2,&year2);

    int dd,md,yd;
    if(date > date2){
        dd = date - date2;
    }else dd = date2 = date;


    dd = abs(date - date2); // 3 - 13 = |-10| = 10
    md = abs(month - month2);
    yd = abs(year - year2);
    int durationInDays = (yd * 365) + (md * 28) + dd;
    int durationInHours = durationInDays * 24;
    int durationInSeconds = durationInHours * 60 * 60;

    printf("Duration: %d/%d/%d",dd,md,yd);
    printf("\nDuration in Days: %d",durationInDays);
    printf("\nDuration in Hours: %d",durationInHours);
    printf("\nDuration in Seconds: %d",durationInSeconds);

}