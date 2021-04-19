#include <bits/stdc++.h>
typedef long long int ll;
#define fi for(int i=2;i<=n;i++)
#define fj for(int j=i*i;j<=n;j+=i)
#define vi vector<ll>
#define vc vector<char>         //for vector bool
using namespace std;

// int calculate_pow(int f,int exp)
// {
//   int final=1;
//   if(exp==0)
//     return 1;
//   while(exp>0)
//   {
//     final=final*f;
//     exp--;
//   }
//   return final;
// }
vi store_prime(ll n )
{
  vi res;
  ll least[n+1]={0};
  vi prime;
  fi
  {
    if(least[i]==0)
    {
      least[i]=i;
      prime.push_back(i);
    }
    for(ll j=0;j<prime.size() && prime[j]<=least[i] && i*prime[j]<=n;++j)
      least[i*prime[j]]=prime[j];
  }
  fi
  {
    if(i==least[i])
      res.push_back(i);
  }
  return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll k,num=1,f=1;;
    cin>>k;
    vi exp;
    // vi lol(k+1,0);
    vi exponent(k,0);
    vi res=store_prime(k);
    for(ll i=0;i<res.size();i++)
    {
      exponent[res[i]] = floor(log(k)/log(res[i]));
      // cout<<res[i]<<" ";
    }
    for(ll i=2;i<exponent.size();i++)
    {
      cout<<exponent[i]<<" ";
      if(exponent[i]!=0)
      {
        f=pow(i,exponent[i]);
        num=num*f;
        // cout<<num<<" ";
      }
    }

    cout<<num;
    return 0;
}
