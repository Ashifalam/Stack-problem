#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int arr[]={11,13,21,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    stack<int>s;
    vector<int>v;
    for(int i=size-1;i>=0;i--){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()>arr[i]){
            v.push_back(s.top());
        }
        else if(s.size()>0 &&s.top()<arr[i]){
            while(s.size()>0 && s.top()<=arr[i]){
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