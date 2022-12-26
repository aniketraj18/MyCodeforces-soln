#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;int a[n][3];int sumx=0,sumy=0,sumz=0;;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
    }}
    for(int i=0;i<3;i++){
        sumx+=a[i][0];
            sumy+=a[i][1];
            sumz+=a[i][2];
    }
    if(sumx==0&&sumy==0&&sumz==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main(){
    soln();
    return 0;
}