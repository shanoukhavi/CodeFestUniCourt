#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  string answer;
    for(int i=0;i<s.size();i++){
        if(isalnum(s[i])){
            answer+=tolower(s[i]);
        }
    }
    string normal=answer;
    reverse(answer.begin(),answer.end());
    string another=answer;
    if(normal==answer){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}