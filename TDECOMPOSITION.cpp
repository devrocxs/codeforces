#include<bits/stdc++.h>
#define pb push_back
using namespace std;
 vector<int> v[100004];
int main()
 {
   int n,a,b;
   scanf("%d",&n);
   printf("%d\n",n-1);
   for(int i=0;i<n-1;i++)
     {
      scanf("%d%d",&a,&b);
      printf("%d %d %d\n",2,a,b);
      v[a].pb(i+1);v[b].pb(i+1);
      }
   for(int i=1;i<=n;i++)
     { 
     for(int j=0;j<v[i].size()-1;j++)
      printf("%d %d\n",v[i][j],v[i][j+1]);
     }

  return 0;
 }
