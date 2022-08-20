#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int>v;
    stack<int>s;
    int n=5;
    int arr[n];
    cout<<"enter the array element\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=size-1;i>=0;i--){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()<arr[i]){
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()>=arr[i]){
           while(s.size()>0&& s.top()>=arr[i]){
               s.pop();
           }
           if(s.size()==0){
               v.push_back(-1);
           }
           else{
               v.push_back(s.top());
           }
        }
        s.push(arr[i]);
    }
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    
}