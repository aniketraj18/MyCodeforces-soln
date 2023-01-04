#include<bits/stdc++.h>
using namespace std;
#define l long long
void soln(){
   l n;
    cin>>n;int c=0;
    while(n>0){
        if(n%2==1)
        c++;
        n/=2;
    }
cout<<c<<endl;}
int main(){
    soln();
    return 0;
}