#include <bits/stdc++.h>
typedef long long int ll;
#define fi(s,e) for(ll i=s;i<=e;i++)
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

//utility function to calculate number of gcd

ll count_divisors(ll num)
{
    set s;
    fi(1 , sqrt(num))
    {
        if(num % i == 0)
        {
            s.insert(i);
            s.insert(num/i);
        }
    }
    return s.size();
}

int main()
{
    fast;   
    ll k = 1 , triangular_num , count = 0;
    while(count < 500)
    {
        triangular_num = k*(k+1)/2;
        count = count_divisors(triangular_num);
        k++;
    }
    cout<<triangular_num;
    return 0;
}