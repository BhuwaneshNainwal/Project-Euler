//Bhuwanesh Nainwal
#include <bits/stdc++.h>
typedef long long int ll;
#define fli(i,s,e) for(int i=s;i<=e;i++)
#define flj(j,s,e) for(int j=s;j<=e;j++)
#define vi vector<int>
#define pb push_back
#define vpi vector<pair<int,int>>
#define vc vector<char>         //for vector bool
#define vs vector<string>
using namespace std;

int main()
{
 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,p=0;
    cin>>n;
    fli(i,1,n/3)
    {
        flj(j,1,n/2)
        {
            k=n-(i+j);
            if(k * k == i * i + j * j)
            {    
                p=1;
                cout<<i*j*k;
                break;
            }
        }
        if(p == 1)
            break;
    }
    return 0;
}