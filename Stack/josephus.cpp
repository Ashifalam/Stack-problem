#include<bits/stdc++.h>
using namespace std;
void solve(int k,int index,vector<int>&v); 
int main(){
    int n,k,index=0;
    cin>>n>>k;
    vector<int>v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    k=k-1;
    solve(k,index,v);
   
    
}
void solve(int k,int index,vector<int>&v){
   //bc
   if(v.size()==1){
       cout<<v[0];
       return;
   }
   index=((index+k)%v.size());
   v.erase(v.begin()+index);
   solve(k,index,v);
   
}