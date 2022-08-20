#include<bits/stdc++.h>
using namespace std;
void MAH(int arr[],int size);
int main(){
    int arr[]={2,1,5,6,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    MAH(arr,size);
}
void MAH(int arr[],int size){
    stack<pair<int,int>>s;
    vector<int>left;
    int pseudo=-1;
    for(int i=0;i<size;i++){
        if(s.size()==0){
            left.push_back(pseudo);
        }
        else if(s.size()>0&&s.top().first<arr[i]){
            left.push_back(s.top().second);
        }
        else if(s.size()>0&&s.top().first>=arr[i]){
            while(s.size()>0&&s.top().first>=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                left.push_back(pseudo);
            }
            else{
                left.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
}
    //left loop

    //right
    stack<pair<int,int>>s1;
    vector<int>right;
    int pseudo_index=7;
    for(int i=size-1;i>=0;i--){
        if(s1.size()==0){
            right.push_back(pseudo_index);
        }
        else if(s1.size()>0 && s1.top().first<arr[i]){
            right.push_back(s1.top().second);
        }
        else if(s1.size()>0 && s1.top().first>=arr[i]){
            while(s1.size()>0 && s1.top().first>=arr[i]){
                s1.pop();
            }
            if(s1.size()==0){
                right.push_back(pseudo_index);
            }
            else{
                right.push_back(s1.top().second);
            }
        }
       s1.push({arr[i],i});
    }
    //right loop
    reverse(right.begin(),right.end());
    
    vector<int>area;
    for(int i=0;i<size;i++){
        area.push_back((right[i]-left[i]-1)*arr[i]);
    }
    int max=area[3];
    //cout<<max;
    for(int i=0;i<size;i++){
        if(area[i]>max){
            max=area[i];
        }
    }
    cout<<max;
}
    

