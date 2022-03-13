#include<bits/stdc++.h>
using namespace std;


int printLeaders(int arr[],int n){
    int max_from_right=arr[n-1];
    cout<<max_from_right<<" ";

    for(int i=n-2;i>=0;i--){
        if(max_from_right<=arr[i]){
            max_from_right=arr[i];                  //arr[i] ki value ko max_from_right ko de do
            cout<<max_from_right<<" ";
             
        }

       
    }
}



int main(){
    int arr[]={16,17,4,3,5,2};

    int n=sizeof(arr)/sizeof(arr[0]);
    printLeaders(arr,n);
}