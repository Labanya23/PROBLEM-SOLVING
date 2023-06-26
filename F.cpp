#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n,i,p=0,n2=0,score=0,p1,n1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
    if(a[i]>0)
        p++;
    else
        n2++;
    }
    for(i=0;i<n;i++){
        if(p>0)
            score++;
            p--;
    }
    cout<<score<<endl;
    p=p1;
    n2=n1;

    for(i=1;i<=n;i++){
        if(n2>0 &&(i%2)==0){
            score--;
             n2--;
        }
        else {
            score++;
            p--;
            cout<<score;
        }
    }
    cout<<endl;
   }
}
