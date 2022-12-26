/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int counttrailingzeros(int n)
{
    int res=0;
    for(int i=5;i<=n;i=i*5)
    res=res+n/i;
    return res;
}

int main()
{
    cout<<"Enter any number"<<endl;
    int n;
    cin>>n;
    int x=counttrailingzeros(n);
    cout<<x;

    return 0;
}