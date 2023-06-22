#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define labanya ios_base::sync_with_stdio(false);cin.tie(0);cin.tie(0);
#define __lcm(a,b) (a/__gcd(a,b)*b)

int main()
   {

       labanya;
       int t;
       cin>>t;
       while(t--){
        int n;
        cin>>n;
        vector<ll>a(n),b(n);
        for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
       }
       int ans=1;
       ll lcm=1,gcd=0;
       for(int i=0;i<n;i++){
        gcd=__gcd(gcd,a[i]*b[i]);
        lcm=__lcm(lcm,b[i]);
        if(gcd%lcm!=0){
            ans++;
            gcd=a[i]*b[i];
            lcm=b[i];
        }
       }
       cout<<ans<<endl;
   }
   return 0;
   }

