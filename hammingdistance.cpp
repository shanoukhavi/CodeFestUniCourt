#include<bits/stdc++.h>
using namespace std;
int main()
{
  
    int x;
    int y;
    cin>>x>>y;  
   int ans=x^y;
int ct=0;
while(ans){
    ct+=ans&1;
    ans>>=1;
    //ans=ans>>1;
}
cout<<ct;
}
//    int another=res>>x;
//     if(y>x){
//         another=res>>x;
//     }
//     else{
//         another=res>>y;
//     }
//     cout<<another;


// }