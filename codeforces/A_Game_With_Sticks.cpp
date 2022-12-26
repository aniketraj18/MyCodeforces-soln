#include<bits/stdc++.h>
using namespace std;
void soln(){
    int h,v;
    cin>>h>>v;int p=1;int c=0;
    while(h>=1&&v>=1){
        p=h*v;
        c++;
        h--;v--;}
        if(c%2==0)
        cout<<"Malvika"<<endl;
        else
        cout<<"Akshat"<<endl;
    
}
int main(){
    soln();
    return 0;
}