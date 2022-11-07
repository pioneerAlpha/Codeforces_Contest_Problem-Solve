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
        string a;
        cin>>a;
        s=r=0;
        for(i=0;i<n;i++)
        {
            if(a[i]=='1')s++;
            else r++;
        }
        mx=s*r;
        c=0;
        char b='o';
        for(i=0;i<n;i++)
        {
            if(a[i]!=b)
            {
                mx=max(mx,c*c);
                b=a[i];
                c=1;
            }
            else c++;
        }
        mx=max(mx,c*c);
        cout<<mx<<endl;
    }
}
