#include <bits/stdc++.h>
typedef long long int ll;
#define fi(s,e) for(ll i=s;i<e;i++)
#define fj(s,e) for(ll j=s;j<e;j++)
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pb push_back
#define mii map<ll , ll>
#define msi map<string , ll>
#define mci map<char , ll>
#define vpi vector<pair<ll,ll>>
#define vc vector<char>         //for vector bool
#define vs vector<string>
#define fast ios_base::sync_with_stdio(false) , cin.tie(NULL) , cout.tie(NULL)
#define set set<ll>
#define null NULL

using namespace std;


int main()
{
    fast;   
    int n;
    
    cin>>n;
    ll dp[n+1][n+1];
    fi(0 , n+1)
    {
        fj(0 , n+1)
        {
            if(i == 0 || j == 0)
                dp[i][j] = 1;
            else
            {
                dp[i][j] = dp[i-1][j] + dp[i][j-1]; 
            }
        }
    }
    cout<<dp[n][n];

    return 0;
}