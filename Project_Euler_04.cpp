#include <bits/stdc++.h>
typedef long long int ll;
#define fi for(ll i=999;i>=900;i--)
#define fj for(ll j=999;j>=900;j--)
#define vi vector<int>
#define vc vector<char>         //for vector bool
using namespace std;

bool is_palindrome(ll n)
{
  ll r,sum=0,temp;
  temp=n;
  while(n>0)
  {
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
  }
  if(temp==sum)
        return 1;
  return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll k,flag=0;
    fi
    {
      fj
      {
        k=i*j;
        if(is_palindrome(k))
        {
              flag=1;
              cout<<k;
              break;
        }
        if(flag==1)
          break;
      }
    }
    return 0;
}
