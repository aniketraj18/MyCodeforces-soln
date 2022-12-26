/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
            for(j=1;j<=n-i;j++)
        {
            
              printf(" ");
              
        }
        for(j=1;j<=i;j++)
           printf("*");
           
           printf("\n");
    }

}
    
    
    
    
    
    
    // n=n-1;
    // for(i=n;i>=1;i--)
    // {
    //     for(j=1;j<=i;j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
