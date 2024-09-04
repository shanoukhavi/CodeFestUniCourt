#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int maxi=0;
    string finalans;
    for(int i=0;i<s.size();i++){
        string ans;
       for(int j=i;j<s.size();j++){
ans+=s[j];
string normal=ans;
reverse(normal.begin(),normal.end());
if(normal==ans && normal.size()>maxi){
    finalans=ans;
    maxi=normal.size();
}
       }

    }
    cout<<finalans;
}