#include <bits/stdc++.h>
using namespace std;
int l,a,b,c,d,maxp;
int main(){
  scanf("%d",&a);
  scanf("%d",&b);
  pair<int,int> t[2*a-2];
  int tab[a];
  for(int i=0;i<a-1;i++){
    scanf("%d",&c);
    scanf("%d",&d);
    t[i]=make_pair(c,d);
    t[i]=make_pair(d,c);
    tab[c]++;
    tab[d]++;
  }
}
