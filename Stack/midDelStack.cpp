#include<bits/stdc++.h>
using namespace std;
void mid_element(stack<int>&s,int k);
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int k=s.size()/2+1;
     mid_element(s,k);
     while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
void mid_element(stack<int>&s,int k){
    if(s.size()==k){
        s.pop();
        return;
    }
    int temp=s.top();
    s.pop();
    mid_element(s,k);
    s.push(temp);

}
