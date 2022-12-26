#include<bits/stdc++.h>
using namespace std;
void soln(){
    int year;
    cin>>year;
    for(int i=year+1;i<=INT16_MAX;i++){
        int num=i;int d1=num%10;
        num/=10;
        int d2=num%10;
        num/=10;
        int d3=num%10;
         num/=10;
         int d4=num%10;
          num/=10;
          if((d1!=d2)&&(d2!=d3)&&(d3!=d4)&&(d2!=d4)&&(d1!=d3)&&(d1!=d4)){
          cout<<i<<endl;
          break;}
        
    }
}
int main(){
    soln();
    return 0;
}