#include<bits/stdc++.h>
using namespace std;
void soln(){
int n,t;
cin>>n>>t;
int i=5*n;
int j=5;int c=0,s=j;
while(j<=i&&s+t<=240){
    c++;
    j=j+5;
    s=s+j;

}
cout<<c<<endl;

}
int main(){
    soln();
    return 0;
}
