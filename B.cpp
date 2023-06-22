#include<bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int i,n;
        cin>>n;
        map<int,int>mn;
        vector <int>v[n];
        for(i=0;i<n;i++){
            int m;
            cin>>m;
            v[i].resize(m);
            for(int j=0;j<m;j++){
                cin>>v[i][j];
                mn[v[i][j]]++;
            }
        }
        vector<int>ans;
        for(i=0;i<n;i++)
            bool f= true;
          for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                if(f){
                    ans.push_back(v[i][j]);
                    f=false;
                }
            }
            mn[v[i][j]]--;
          }
    }
    if(ans.size()!=n)cout<<-1;
    else{
        for(auto i : ans){
            cout<<i<<' ';
        }
    }
    cout<<'\n';
}
 return 0;
 }
