#include<bits/stdc++.h>
using namespace std;
void soln(){
    int a[4];
    int c=0;
    for(int i=0;i<4;i++)
    cin>>a[i];
    for(int i=1;i<4;i++){
        if(a[i]>a[0])
        c++;
    }
    cout<<c<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    soln();
    return 0;
}
