#include <bits/stdc++.h>
typedef long long int ll;
#define fi for(ll i=2;i*i<=r;i++)
#define fj for(ll j=i*i;j<=r;j+=i)

#define vi vector<int>
#define vc vector<char>         //for vector bool
using namespace std;

void set_prime(int r , vc &is_prime)  //utility fuction to store all primes till root of n
{

  is_prime[0]=is_prime[1]=false;
  fi
  {
    if(is_prime[i])
    {
      fj
        is_prime[j]=false;
    }
  }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,flag=0,temp;
    cin>>n;
    ll original=n;
    ll r=floor(sqrt(n));
    vc is_prime(r+1,true);
    set_prime(r,is_prime);
    for(ll i=2;i<=r;i++)
    {
      if(is_prime[i])
      {
        while(n%i==0)
        {
          n=n/i;
          if(n==1)
          {
            flag=1;
            temp=i;
            break;
          }
        }
        if(flag==1)
          break;
      }
    }
    if(flag==1)
      cout<<temp;
    else
      cout<<original;
    return 0;
}
