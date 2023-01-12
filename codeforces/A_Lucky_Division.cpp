#include<bits/stdc++.h>
using namespace std;
bool isLucky(int n){
    int d=0;
    int num=n;bool flag=true;
    while(num!=0){
        d=num%10;
        num/=10;
        if(d==4||d==7){
            continue;
        
        }
        else{
        flag=false;
        break;}
        
        
    }
    if(flag)
    return flag;
    else
    return flag;
}
void soln(){
    int n;
    cin>>n;
    if(isLucky(n)){
        cout<<"YES"<<endl;
    }
    else{
        bool luck=0;
       for(int i=1;i<=n/2;i++){
        if(n%i==0){
        if(isLucky(i)){
        luck=1;
        break;
       }}
    }
    if(luck)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}}
int main(){
    soln();
return 0;}