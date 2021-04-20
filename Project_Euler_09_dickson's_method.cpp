//Bhuwanesh Nainwal
//Pythagorean triplet
#include <bits/stdc++.h>
typedef long long int ll;
#define fi for(int i=2;i<=50;i+=2)
#define fj for(int j=i*i;j<=n;j+=i)
#define vpi vector<pair<int,int>>
#define vc vector<char>         //for vector bool
using namespace std;

int gcd(int a , int b)
{
  if(b==0)
    return a;
  return gcd(b,a%b);
}
vpi compute_divisors(int r)
{
  vpi divisors;
  for(int i=1;i<=floor(sqrt(r));i++)
  {
    if(r%i==0)
    {
      // if(gcd(i,r/i)==1)
        divisors.push_back(make_pair(i,r/i));
    }
  }
  return divisors;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n=10,r,s,t,a,b,c,r_square,sum;
    fi
    {
      r=i;
      r_square=pow(r,2)/2;
      vpi res=compute_divisors(r_square);
      for(int j=0;j<res.size();j++)
      {
        s=res[j].first;
        t=res[j].second;
        a=r+s;
        b=r+t;
        c=r+s+t;
        if(gcd(s,t)==1)
        {
          cout<<a<<" "<<b<<" "<<c<<" "<<"\n";
          sum=a+b+c;
          if(sum==1000)
          {
            cout<<a<<" "<<b<<" "<<c<<" "<<"\n";
            break;
          }
        }
      }
    }
    return 0;
}
