#include<bits/stdc++.h>
using namespace std;
void soln(){
    string num;
    cin>>num;int sum1=0,sum2=0;int n;
    for(int i=0;i<3;i++){
        n=num[i]-'0';
        sum1+=n;
}
for(int i=3;i<6;i++){
    n=num[i]-'0';
    sum2+=n;

}
if(sum1==sum2)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
    return 0;}