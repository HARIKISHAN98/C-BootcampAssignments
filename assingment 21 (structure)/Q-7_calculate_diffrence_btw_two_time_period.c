#include<stdio.h>

struct Time
{
  int hour,min,sec;
};

void cal_diff_btw_time_period(struct Time start,struct Time end)
{
  int temp_sec , temp_min , temp_hour ;
    printf("1st Time is : %d : %d : %d \n",start.hour,start.min,start.sec);
    printf("2nd Time is :  %d : %d : %d \n",end.hour,end.min,end.sec);

    if(start.hour > 12 )
    start.hour-=12;

    if(end.hour > 12)
    end.hour-=12;
    
    if(end.hour < start.hour)
    end.hour+=12;

    if(end.sec < start.sec)
    {
      end.sec+=60;
      end.min--;
    }

    if(end.min < start.min)
    {
      end.min+=60;
      end.hour--;
    }

    temp_sec=end.sec-start.sec;
    temp_min=end.min - start.min;
    temp_hour=end.hour- start.hour ;
    printf("Difference between above two time period is : %d hr %d min %d sec\n",temp_hour,temp_min,temp_sec);
}

struct Time input()
{
  struct Time T;
   printf("Enter hour,minute and second of a time\n");
   scanf("%d%d%d",&T.hour,&T.min,&T.sec);

   return T;
}

int main()
{
 struct Time start,end;

 start= input();
 end = input();

 cal_diff_btw_time_period(start,end);

    return 0;
}