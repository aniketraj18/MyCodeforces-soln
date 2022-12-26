#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    int c=0,m=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            if(a[i][0]>a[i][1])
            m++;
            else if(a[i][0]<a[i][1])
            c++;
        }
    }
    if(c>m)
    cout<<"Chris"<<endl;
    else if(c<m)
    cout<<"Mishka"<<endl;
    else
    cout<<"Friendship is magic!^^"<<endl;
}
int main(){
    soln();
    return 0;
}