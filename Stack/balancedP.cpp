#include<bits/stdc++.h>
using namespace std;
void solve(int open,int close,string op,vector<string>&v);
vector<string> fun(int n);
int main(){
    int n;
    cin>>n;
    vector<string>t=fun(n);
    cout<<"get output\n";
    vector<string>::iterator itr;
    for(itr=t.begin();itr!=t.end();itr++){
        cout<<*itr<<" ";
    }
    
    
}
vector<string> fun(int n){
    int open=n;
    int close=n;
    vector<string>v;
    string op="";
    solve(open,close,op,v);
    return v;
}   
// }
// // fun(int n){
//     int open=n;
//     int close=n;
//     vector<string>v;
//     string op="";
//     solve(open,close,op,v);
//     return v;
    
// }

void solve(int open,int close,string op,vector<string>&v){
    //bc
    if(open==0 && close==0){
        v.push_back(op);
        return;
    }
    //hypothesis
    if(open!=0){
        string op1=op;
        op1.push_back('(');
        solve(open-1,close,op1,v);
        
    }
    if(close>open){
        string op2=op;
        op2.push_back(')');
       solve(open,close-1,op2,v);
    
    
    }
    
    return;
    // if(close>open){
    //     string op2=op;
    //     op2.push_back(')');
    //     solve(open,close-1,op,v);
    //     return;
    // }
}
