#include <bits/stdc++.h>

using namespace std;

int tab[2000009];
int a,b,w,e,p,k;

int main(){
  scanf("%d",&a);
  e=1;
  while(e<a){
    e*=2;
  }
  for(int i=0;i<a;i++){
    scanf("%d",&b);
    w+=b-1;
    p=b+e-1;
    while(p>=1){
      if(p%2==0){
        p=p/2;
        tab[2*p+1]++;
      }
      else{
        p=p/2;
      }
    }

    b--;
    b=b+e;
    while(b>=1){
      w-=tab[b];
      b=b/2;
    }
  }
  printf("%d",w);
}
