#include<bits/stdc++.h>
using namespace std;
void soln(){
    int n,m;
    cin>>n>>m;char arr[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    bool flag=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]!='W'&&arr[i][j]!='B'&&arr[i][j]!='G'){
                flag=0;
                break;
            }
            
        }
    }
    if(flag)
    cout<<"#Black&White"<<endl;
    else
    cout<<"#Color"<<endl;

}
int main(){
    soln();
    return 0;
}