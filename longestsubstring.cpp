#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int maxi=0;
    for(int i=0;i<s.size();i++){
        vector<int> ans(256,0);
        int len=0;
        for(int j=i;j<s.size();j++){
if(ans[s[j]]){
 break;
}
ans[s[j]]=1;
maxi=max(maxi,j-i+1);


        }
    }
    cout<<maxi;
}