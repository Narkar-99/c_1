#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
int main()
{ int hour,sec,min;
hour=min=sec=0;
    
    while(1)
    {
    
     printf("\t⌛%02d:%02d:%02d",hour,min,sec);
    system("clear");
    fflush(stdout);
    
    sec++;
    
    if(sec==60)
    {min+=1; sec=0;}
    
    if(min==60)
   { hour+=1;
    min=0;}
    
    if(hour==24)
  {  hour=0;min=0;sec=0;}
    
    
    sleep(1);
    }
   
    return 0;
}