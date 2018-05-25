#include <cstdio>
#include <stack>
#include <utility>
#include <algorithm>
using namespace std;
long long a,b,c,w;
int m;
int t[1000010];
long long tab[1000003];
long long tba[1000003];
stack<pair<int,int> > s;
int main(){
  scanf("%d",&a);
  for(int i=0;i<a;i++){
    scanf("%d",&t[i]);
    while(!s.empty() && t[i]<=s.top().first){
       s.pop();
    }
    if(!s.empty()){
        tab[i]=i-s.top().second;
    }
    else{
        tab[i]=i+1;
    }
    s.push(make_pair(t[i], i));
  }
  while(s.empty()==0){
    s.pop();
  }
  for(int i=a-1;i>=0;i--){
    while(!s.empty() && t[i]<=s.top().first){
       s.pop();
    }
    if(!s.empty()){
        tba[i]=abs(i-s.top().second);
    }
    else{
        tba[i]=a-i;
    }
    s.push(make_pair(t[i], i));
  }
  for(int i=0;i<a;i++){
    //printf("%lld %lld %lld\n",(tab[i]+tba[i]-1)*t[i],tab[i],tba[i]);
    w=max(w,(tab[i]+tba[i]-1)*t[i]);
  }
  printf("%d\n",w);
}
