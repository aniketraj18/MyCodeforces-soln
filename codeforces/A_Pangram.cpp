#include<bits/stdc++.h>
using namespace std;
void soln(){;
int n;
cin>>n;
string s;
cin>>s;bool flag=0;
 transform(s.begin(), s.end(), s.begin(), ::tolower);
for(int i = 97; i <=122; i++)
    {
        int ch = (char) i;
        
        // inbuilt function to calculate count
        int freq = count(s.begin(), s.end(), ch);
        
        // only print if frequency > 0
        if(freq==0){
            flag=1;
            break;
            
        }
        else
        flag=0;
        
    }
    if(flag)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
int main(){
    soln();
    return 0;
}