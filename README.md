# c_1
#include<stdio.h>

int main()
{int a,b,c,d;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    c=(a+b)*(a+b);
    printf("\n(a+b)²=a²+2ab+b²");
    d=a+b;
    printf("\n(%d)²",d);
printf("=(%d+%d)²=(%d)²+2(%d)(%d)+(%d)²= (%d)",a,b,a,a,b,b,c);
   
    
    
     return 0;
}
