#include<bits/stdc++.h>
using namespace std;
void solve(int one,int zero,int n,string op,vector<string>&v); 
int main(){
    int n;
    cin>>n;
    string op="";
    vector<string>v;
    int one=0,zero=0;
    solve(one,zero,n,op,v);
    vector<string>::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++){
        cout<<*itr<<" ";
    }
}
void solve(int one,int zero,int n,string op,vector<string>&v){
    if(n==0){
       v.push_back(op);
        return;
    }
    string op1=op;
    op1.push_back('1');
    solve(one+1,zero,n-1,op1,v);
    if(one>zero){
        string op2=op;
        op2.push_back('0');
        solve(one,zero+1,n-1,op2,v);
    }
    return;
}