#include<bits/stdc++.h>
using namespace std;
int main(){
    int size=12;
    int arr[size]={0,1,0,2,1,0,1,3,2,1,2,1};
    //int size=sizeof(arr)/sizeof(arr[0]);
    int mxl[size];
    int mxr[size];
    mxl[0]=arr[0];
    for(int i=1;i<size;i++){
        mxl[i]=max(mxl[i-1],arr[i]);
    }
    mxr[size-1]=arr[size-1];
    for(int i=size-2;i>=0;i--){
        mxr[i]=max(mxr[i+1],arr[i]);
    }
    int water[size];
    for(int i=0;i<size;i++){
        water[i]=min(mxl[i],mxr[i])-arr[i];
    }
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=water[i];
    }
    cout<<"sum of water:"<<sum;
}