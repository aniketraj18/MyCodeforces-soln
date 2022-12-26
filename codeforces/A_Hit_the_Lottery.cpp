#include<bits/stdc++.h>
using namespace std;
#define ll long long
void soln(){
    ll n;
    cin>>n;
    ll diff=0,c=0;
    while(n>0){
        if(n>=100){
            n=n-100;
            c++;
        }
        if(n>=20&&n<100){c++;
        n=n-20;}
        if(n>=10&&n<20){c++;
        n-=10;}
        if(n>=5&&n<10){c++;
        n-=5;}
        if(n>=1&&n<5){
            c++;
        n-=1;}
}
cout<<c<<endl;

}
int main(){
    soln();
    return 0;
}