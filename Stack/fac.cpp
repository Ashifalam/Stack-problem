#include<iostream>
using namespace std;
int fac(int n);
int main()
{
    int a;
    cin>>a;
    int b=fac(a);
    cout<<"factorial is"<<b;
}
int fac(int n){
    if(n==0 && n==1){
        return (1);
    }
    else{
        return (n*fac(n-1));
    }
}

