#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T>&v1){
    cout<<"displaying the vector\n";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}
int main(){
    vector<int>v;
    vector<char>vec2(4);
    vector<char>vec3(vec2);
    vector<int>vec4(6,4);
    int element,size;
    cout<<"enter the size of vector\n";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"enter th element ";
        cin>>element;
        v.push_back(element);
        
    }
    cout<<"display the element\n";
    display(v);
    cout<<"\n";
    vector<int>::iterator iter =v.begin();
    v.insert(iter+1,5,786);
    display(v);
    cout<<"\n";
    display(vec4);
}