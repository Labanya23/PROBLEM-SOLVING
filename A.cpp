#include<bits/stdc++.h>

using namespace std;

int main(){
   ios_base::sync_with_stdio(false),cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
    int n,i;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    int m=0,n1=0;
    for(i=0;i<n;i++){
        if(a[i]>b[i])swap(a[i],b[i]);
        m=max(m,a[i]);
        n1=max(n1,b[i]);
    }
    if(m==a[n-1] && n1==b[n-1])
        cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
   }
   return 0;
}

