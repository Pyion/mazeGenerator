#include <bits/stdc++.h>
using namespace std;
long long a,b,c,w;
long long tab[1000000];
int main(){
  scanf("%lld",&a);
  long long t[a];
  for(int i=0;i<a;i++){
    scanf("%lld",&t[i]);
  }
  scanf("%lld",&c);
  for(int i=0;i<a;i++){
    w+=tab[c-t[i]];
    tab[t[i]]++;
  }
  printf("%lld\n",w);
}
