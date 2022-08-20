#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int MAH(vector<int>&arr,int size);
int main(){
    int n=4;
    int m=4;
    int arr[n][m];
    cout<<"enter the 2D array\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    for(int j=0;j<m;j++){
        v.push_back(arr[0][j]);
    }
    int mx=MAH(v,size);
    cout<<mx<<"\n";
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                v[j]=0;
            }
            else{
                v[j]=v[j]+arr[i][j];
            }
            //cout<<v[j]<<"\n";
            

        
        //mx=max(mx,MAH(v,size));
        }
        mx=max(mx,MAH(v,size));
        
    }
    
    cout<<mx;
}
int  MAH(vector<int>&arr,int size){
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
    return max;
}
    

