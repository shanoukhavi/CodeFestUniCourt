#include<bits/stdc++.h>
using namespace std;
int main()
{
  
    int x;
    int y;
    cin>>x>>y;  
   int res=x^y;
   int another=res>>x;
    if(y>x){
        another=res>>x;
    }
    else{
        another=res>>y;
    }
    cout<<another;


}