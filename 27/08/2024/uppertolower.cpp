#include<bits/stdc++.h>
using namespace std;

string low(string v){
      string res="";
      for(int i=0;i<v.size();i++){
        res=v[i]+(1<<5);
      }
}
string upper(string v){
      string res="";
      for(int i=0;i<v.size();i++){
        res=v[i]^(1<<5);
      }
}
int main(){
     string v;
     cin>>v;
     //upperto low
     string res1 = low(v);
     string res2 = upper(v);
     cout<<res1<<res2;

}