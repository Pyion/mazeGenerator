#include <bits/stdc++.h>

using namespace std;

int a,b,c,d,w,j,k,l,o;
vector<int> v[1009];
int tab[1009];
struct kanal{
  int p;
  int k;
  int w;
};
kanal prz[100009];

void DFS(int p){
  tab[p]=1;
  for(int j=0;j<v[p].size();j++){
    if(!tab[v[p][j]]){
      DFS(v[p][j]);
    }
  }
}


int main() {
  scanf("%d",&a);
  scanf("%d",&b);
  for(int i=0;i<b;i++){
    scanf("%d",&k);
    scanf("%d",&l);
    scanf("%d",&o);
    prz[i].p=k-1;
    prz[i].k=l-1;
    prz[i].w=o;
  }
  scanf("%d",&c);
  for(int i=0;i<b;i++){
    if(prz[i].w>=c){
      v[prz[i].p].push_back(prz[i].k);
      v[prz[i].k].push_back(prz[i].p);
    }
  }
  for(int i=0;i<a;i++){
    if(tab[i]==0){
      w++;
      //printf("%d\n",i);
      DFS(i);
    }
  }
  printf("%d",w-1);
}
