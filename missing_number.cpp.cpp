
#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define no cout<<"NO"<<"\n";
#define yes cout<<"YES"<<"\n";
#define fast() ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve()
{
    int n;
    cin>>n;
    ll sum=0;
    for(int i=1; i<=n; i++)
    {
        sum^=i;
    }
    for(int i=1;i<n;i++)
    {
        int x;
        cin>>x;
        sum^=x;
    }
    cout<<sum<<endl;






}
int main()
{
    fast()
    solve();
//    ll tc;
//    cin>>tc;
//    while(tc--)
//    {
//        solve();
//
//    }
    return 0;
}
