#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(v) (v).begin(),(v).end()
#define memset(v,x) memset((v),x,(sizeof(v)))
using namespace std;
typedef long long int lli;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    lli t,n,i,x,mx,mn,f,j,s,r,y,c,m,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<lli>v(n);
        for(i=0;i<n;i++)cin>>v[i];
        sort(all(v));
        mx=0;
        for(i=0;i<n-2;i++)mx=max(v[n-1]-v[i]+v[i+1]-v[i],mx);
        for(i=n-1;i>1;i--)mx=max(v[i]-v[0]+v[i]-v[i-1],mx);
        cout<<mx<<endl;
    }
}
