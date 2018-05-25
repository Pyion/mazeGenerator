#include <cstdio>

int a,p,k,w,s,i;

int main(){
  scanf("%d",&a);
  char tab[a];
  scanf("%c", &tab[0]);
  for(int i=0;i<a;i++){
    scanf("%c",&tab[i]);
    //printf("%c\n",tab[i]);
  }
  p=0;
  k=a-1;
  while(tab[p]==tab[k] && p<k){
    p++;
    k--;
  }
  s=a/2;
  i=0;
  while(tab[s-i]==tab[s+i] && s-i>p){
    i++;
  }
  i--;
  printf("%d",1+2*i+2*p);
}
