#include <bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
    {

        int n,m,count=0;
        cin>>n>>m;
        string a[n],b[m];
        for(int i=0;i<a.size()-1;i++){
            cin>>a[i];
        }
        for(int i=0;i<b.size()-1;i++){
            cin>>b[i];
        }
        if(a[i]==b[i]){
            count++;
            cout<<count<<endl;
        }
    }
   }
