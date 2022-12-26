#include<bits/stdc++.h>
using namespace std;
#define ll long long
void soln(){
    ll N;
    cin>>N;
    int k;
    cin>>k;
    int digit=0;ll n=N;
    for(int i=1;i<=k;i++)
{
    digit=n%10;
    if(digit==0){
        n/=10;
    }
    else{
        n--;
    }
}cout<<n<<endl;
    
}

int main(){
    soln();
    return 0;
}