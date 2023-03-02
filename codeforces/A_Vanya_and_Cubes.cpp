#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;
    int i=2,s=1,c=0,sum=s;
    while(sum<=n){
        s=s+i;
        i++;
        c++;
        sum+=s;
    }
    cout<<c<<endl;
}
int main(){
    soln();
    return 0;
}