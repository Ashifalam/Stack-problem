#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v1){
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}
int main(){
    vector<int>v;
    int element,size;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"enter th element ";
        cin>>element;
        v.push_back(element);
        
    }
    cout<<"display the element\n";
    display(v);
}