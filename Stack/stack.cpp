#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void new_stack();
void new_stack(stack<int>ss){
    stack<int>sj=ss;
    while(!sj.empty()){
        cout<<sj.top()<<" ";
        sj.pop();
    }
    cout<<"\n";
}
int main(){
    stack<int>newsw;
    newsw.push(10);
    newsw.push(20);
    newsw.push(30);
    newsw.push(40);
    newsw.push(50);
    cout<<"new stack is:\n";
    new_stack(newsw);
    cout << "\n newsw.top() :"<<newsw.top();
    cout<<"\npop operation in stack\n";
    newsw.pop();
    cout<<"remaining element in newsw stack are\n";
    new_stack(newsw);
    
    
}
