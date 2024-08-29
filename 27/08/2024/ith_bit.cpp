#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    int i;
    cin>>i;

    int val =Findbit(a,i);
    while(a){
       if(a&(1<<i)!=0){
        return false;
       }else{
        return false;
       }
    }
    cout<<val;
    return 0;
    }