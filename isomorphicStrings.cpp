#include<bits/stdc++.h>
using namespace std;
bool isSomorphic(string s1,string s2)
{
 
    if(s1.size()!=s2.size()) return false;
    vector<int> first(128,-1);
    vector<int> second(128,-1);
    for(int i=0;i<s1.size();i++){
       
        if(first[s1[i]]!=second[s2[i]]) return false;
        
        first[s1[i]]=second[s2[i]]=i;
    }
    return true;
}
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    if(isSomorphic(s1,s2)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}