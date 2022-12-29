#include<bits/stdc++.h>
using namespace std;
#define l long long
void soln(){
    l n;
    cin>>n;
    if(n>=0)
    cout<<n<<endl;
    else{l num=n*(-1);
        int dig1=num%10;
        num=num/10;
        int dig2=num%10;
        if(dig2>dig1){
            cout<<(n/10)+(dig2-dig1)<<endl;

        }
        if(dig2<dig1){
            cout<<n/10<<endl;

        }
        if(dig1==dig2)
        cout<<n/10<<endl;
    }
}
int main(){
    soln();
    return 0;
}