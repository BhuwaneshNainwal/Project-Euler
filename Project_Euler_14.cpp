#include <bits/stdc++.h>
typedef long long int ll;
#define fi(s,e) for(ll i=s;i>=e;i--)
#define fj(s,e) for(ll j=s;j<e;j++)
#define vi vector<ll>
#define vvi vector<vector<int>>
#define pb push_back
#define vpi vector<pair<ll,ll>>
#define vc vector<char>         //for vector bool
#define vs vector<string>
#define fast ios_base::sync_with_stdio(false) , cin.tie(NULL) , cout.tie(NULL)
#define set set<ll>
#define null NULL

using namespace std;

ll count(ll num , map<ll , ll> &track)
{
    ll x;
    if(track[num] != 0)
    {
        return track[num];
    }
    if(num == 1)
        return 1;
    if(num % 2 == 0)
    {
        x = count(num/2 , track) + 1;
        track[num] = x;
        return x;
    }
    else
    {
        x = count(3*num + 1 , track) + 1;
        track[num] = x;
        return x;
    }
}

int main()
{
    fast;   
    ll n , temp , res;
    ll maxi = INT_MIN;
    map<ll , ll> track;
    vi store;
    fi(1000000 - 1 , 1)
    {
        temp = count(i , track);
        if(temp > maxi)
        {
            maxi = temp;
            res = i;
        }
    
    }
    cout<<res;
    return 0;
}