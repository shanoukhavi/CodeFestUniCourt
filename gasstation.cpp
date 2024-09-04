#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int gas[n];
    int n1;
    cin>>n1;
    int cost[n1];
    for(int i=0;i<n;i++){
        cin>>gas[i];
    }

    for(int i=0 ; i<n1 ; i++){
        cin>>cost[i];
    }
    int index=-1;
    int first=cost[0];
    for(int i=0;i<n;i++){
if(gas[i]>first){
    index=i;
    break;
}
    }
   int finalans=gas[index];
   for(int i=index;i<n;i++){
    int firstans;
    firstans+=finalans;
    finalans+=gas[i]-cost[i]+gas[i+1];
   }


   if(finalans>gas[index]){
    cout<<index;
   }
   else{
    cout<<-1;
   }

    
    return 0;
}