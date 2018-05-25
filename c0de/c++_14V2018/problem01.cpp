#include <bits/stdc++.h>
using namespace std;
int n,m,x,y;
vector<int> v[500009];

bool tab[500009];
int without[500009];
int within[500009];

void DFS(int p){
  tab[p]=1;
  within[p]=1;
  bool c=0;
  for(int j=0;j<v[p].size();j++){
    if(!tab[v[p][j]]){
      DFS(v[p][j]);
      without[p]+=max(within[v[p][j]],without[v[p][j]]);
      within[p]+=without[v[p][j]];
      c=1;
    }
  }
  if(!c){
    within[p]=1;
    without[p]=0;
  }
}

int main(){
  scanf("%d",&n);
  scanf("%d",&m);
  for(int i=0;i<n-1;i++){
    scanf("%d",&x);
    scanf("%d",&y);
    v[x].push_back(y);
    v[y].push_back(x);
  }
  DFS(1);
  int mm=max(within[1],without[1]);
  for(int i=0;i<m;i++){
    scanf("%d",&x);
    if(x>mm){
      printf("NIE\n");
    }
    else
    {
      printf("TAK\n");
    }
  }
}
