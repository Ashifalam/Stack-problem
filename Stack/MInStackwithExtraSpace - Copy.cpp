#include<bits/stdc++.h>
using namespace std;
stack<int>s,ss;
void push();
void pop();
void getMin();
int main(){
    int choice;
    while(1){
       cout<<"enter the choice\n";
       cin>>choice;
       switch(choice){
           case 1:push();
           break;
           case 2:pop();
           break;
           case 3:getMin();
           break;
           default:
           cout<<"invalid choices\n";
    }      
}
}
void push(){
    int x;
    cout<<"enter the element\n";
    cin>>x;
    s.push(x);
    if(ss.size()==0 ||ss.top()>=x){
        ss.push(x);
    }
    
}
void pop(){
    if(s.size()==0){
        cout<<-1;
    }
    else{
        int ans=s.top();
        s.pop();
        if(ss.top()==ans){
            ss.pop();
        }
        cout<<ans;
    }
}
void getMin(){
    if(ss.size()==0){
        cout<<-1;
    }
    else{
        cout<<ss.top();
    }
}