//Bhuwanesh Nainwal
//Using segmented sieve
#include <bits/stdc++.h>
typedef long long int ll;
#define fi for(int i=2;i*i<limit;i++)
#define fj for(int j=i*i;j<limit;j+=i)
#define vi vector<int>
#define vc vector<char>         //for vector bool
using namespace std;

int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll l , h , sum=0;
  int  correct;
  cin>>l>>h;
  int limit=floor(sqrt(h))+1;
  vc is_prime(limit,true);
  vi prime;
  is_prime[0]=is_prime[1]=false;
  fi
  {
    if(is_prime[i])
    {
      fj
        is_prime[j]=false;
    }
  }
  for(int i=0;i<limit;i++)
  {
    if(is_prime[i]==true)
    {
      prime.push_back(i);
      // cout<<i<<"  ";
      sum+=i;
    }
  }
  int count=prime.size();
  int low=limit;
  int high=2*limit;
  while(low<h)
  {
    if(high>=h)
      high=h;
    vc mark(limit+1,true);
    for(int i=0;i<prime.size();i++)
    {
        correct=floor(low/prime[i])*prime[i];
        if(correct<low)
          correct+=prime[i];
        for(int j=correct;j<high;j+=prime[i])
          mark[j-low]=false;
    }
    for(int i=low;i<high;i++)
    {
      if(mark[i-low]==true)
        sum+=i;  
    }
    low=low+limit;
    high=high+limit;
  }
  cout<<sum;
    return 0;
}
