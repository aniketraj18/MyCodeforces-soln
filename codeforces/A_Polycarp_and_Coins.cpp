#include<bits/stdc++.h>
using namespace std;
#define l long long
void soln(){
     l n;
     cin>>n;
     l x,y;
     x=n/3;
     y=x;
     if((x+(y*2))==n){
        cout<<x<<" "<<y<<endl;
     }
     else{
        l diff=n-(x+(y*2));
        if(diff==2)
        y++;
        if(diff==1)
        x++;
        cout<<x<<" "<<y<<endl;     }

}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
}