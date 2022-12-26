/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

******************//armstrong nos.upto 1000*********************
#include <stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    printf("Armstrong numbers upto 1000 are:\n");
    int i,x,d=0,s;
    for(i=1;i<=1000;i++)
    {
        x=i;
        s=0;
        while(x>0)
        {
            d=x%10;
            s=s+pow(d,3);
            x=x/10;
        }
        if(s==i)
        printf("%d\n",i);
    }
}
    
    


