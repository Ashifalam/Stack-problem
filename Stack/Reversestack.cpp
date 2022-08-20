#include<bits/stdc++.h>
using namespace std;
void reverse(stack<int>&s);
void insert(stack<int>&s,int ele);
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    reverse(s);
     while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
     }
     return 0;
    
}
void reverse(stack<int>&s){
    if(s.size()==1){
        return;
    }
    //hypothesis
    int temp=s.top();
    s.pop();
    reverse(s);
    //induction
    insert(s,temp);
    return;
}

void insert(stack<int>&s,int ele){
    //BC
    if(s.size()==0){
        s.push(ele);
        return;
    }
    //hypothesis
    int value=s.top();
    s.pop();
    insert(s,ele);
    //induction
    s.push(value);
    return;
}