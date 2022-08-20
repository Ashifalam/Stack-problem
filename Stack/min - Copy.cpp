#include<bits/stdc++.h>
using namespace std;
int minElement;
stack<int>s;
void getMin();
void push();
void pop();
void top();
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
           case 3:top();
           break;
           case 4:getMin();
           break;
           default:cout<<"Invalid choices\n";
        }
    }
}
void getMin(){
    if(s.size()==0){
        cout<<"-1"<<"\n";
    }
    else{
        cout<<minElement;
    }
}
void push(){
    int x;
    cout<<"enter the element\n";
    cin>>x;
    if(s.size()==0){
        s.push(x);
        minElement=x;
    }
    else{
        if(x>=minElement){
            s.push(x);
        }
        else if(x<minElement){
            s.push(2*x-minElement);
            minElement=x;
        }
    }
}
void pop(){
    if(s.size()==0){
        cout<<"no element\n";
    }
    else{
        if(s.top()>=minElement){
            s.pop();
        }
        else if(s.top()<minElement){
            minElement=2*minElement-s.top();
            s.pop();
        }
    }
}
void top(){
    if(s.size()==0){
        cout<<"-1"<<"\n";
    }
    else{
        if(s.top()>=minElement){
            cout<<s.top();
        }
        else if(s.top()<minElement){
            cout<<minElement<<"\n";
        }
    }
    
}