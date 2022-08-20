#include<bits/stdc++.h>
using namespace std;
stack<int>s,ss;
void push();
void pop();
void max();
int main(){
        int choice;
        while(1){
            cout<<"enter the choices\n";
            cin>>choice;
            switch(choice){
               case 1:push();
               break; 
               case 2:pop();
               break;
               case 3:
               max();
               break;
            }
        }
    }

void push(){
    int x;
    cout<<"enter the element\n";
    cin>>x;
    s.push(x);
    if(ss.size()==0||ss.top()<=x){
        ss.push(x);
    }
}
void pop(){
   // cin>>choice;
    int a=s.top();
    s.pop();
    if(ss.top()==a){
        ss.pop();
    }
    
}
void max(){
    cout<<ss.top();
}