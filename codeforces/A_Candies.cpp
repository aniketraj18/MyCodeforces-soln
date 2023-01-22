#include<bits/stdc++.h>
using namespace std;
#define l long long
void soln(){
    l n;
    cin>>n;
    l k=2;
    l x=1;
    for(int i=k;i<=100;i++){
        int exp=pow(2,i);
        exp=exp-1;
        if(n%exp==0){
            x=n/exp;
            break;
        }
        
    }
    cout<<x<<endl;
    }
    int main(){
        int t;
        cin>>t;
        while(t--)
        soln();
        return 0;
    }