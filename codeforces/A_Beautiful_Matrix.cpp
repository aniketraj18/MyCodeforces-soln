#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>n;
            if(n==1)
            {
                cout<<abs(i-3)+abs(j-3)<<endl;
                
            
            }
            
        }
    }
}
int main(){
    soln();
    return 0;
}