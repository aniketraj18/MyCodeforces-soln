#include<bits/stdc++.h>
using namespace std;
void soln(){
    string s;
    cin>>s;
   set<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]>=97&&s[i]<=122)
        st.insert(s[i]);

    }
    
    cout<<st.size()<<endl;
}
int main(){
    soln();
    return 0;
}