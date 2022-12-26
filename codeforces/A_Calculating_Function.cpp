#include<bits/stdc++.h>
using namespace std;
#define ll long long
void soln(){
    ll n;
    cin>>n;int fun=0;int even,odd=0;
    if(n&1==0){
         even=(n/4)*(4+((n/2)-1)*2);
         odd=(n/4)*(2+((n/2)-1)*2);
         fun=even-odd;
         }
    else{
        even=(n/4)*(4+((n/2)-1)*2);
        odd=((n/4)+1)*(2+((n/2)-1)*2);
        fun=even-odd;
    }
    cout<<fun<<endl;
}
int main(){
    soln();
    return 0;
}