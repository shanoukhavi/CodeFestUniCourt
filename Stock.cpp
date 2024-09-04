#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
cout<<endl;
    int buy=arr[0];
    int maxi=0;
    for(int i=1;i<n;i++){
        if(arr[i]>buy){
            maxi=max(maxi,arr[i]-buy);
        }
        else{
buy=arr[i];
        }
    }
    cout<<"the profit is "<<maxi;
}