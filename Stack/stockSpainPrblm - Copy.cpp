#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<pair<int,int>>s;
    vector<int>v;
    int n=5;
    int arr[n];
    cout<<"enter the element for stock span problem\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if(s.size()>0&&s.top().first>arr[i]){
            v.push_back(s.top().second);
        }
        else if(s.size()>0&&s.top().first<=arr[i]){
            while(s.size()>0&&s.top().first<=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
    }
    for(int i=0;i<v.size();i++){
        v[i]=i-v[i];
        cout<<v[i]<<" ";
    }
}