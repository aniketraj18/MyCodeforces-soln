#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;
    int num=n;bool flag=0;
     while(num>0){
        int digit=num%10;
        if(digit!=4||digit!=7){
            flag=1;
            break;
            
         }
         num/=10;
     }
     if(flag==1&&!(n%4==0||n%7==0))
     cout<<"NO"<<endl;
     if(flag==0&&(n%4==0||n%7==0))
     cout<<"YES"<<endl;

}
int main(){
    soln();
    return 0;
}