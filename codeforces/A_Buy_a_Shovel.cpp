#include<bits/stdc++.h>
using namespace std;
void soln(){
    int sl,r;
    cin>>sl>>r;int i=1,res=0;
    for(i=1;i<INT_MAX;i++){
        res=(sl*i)-r;
        if(res%10==0||(sl*i)%10==0)
        break;
    
    }
    cout<<i<<endl;
}
int main(){
    soln();
    return 0;
}