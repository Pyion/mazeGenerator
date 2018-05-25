#include <bits/stdc++.h>

using namespace std;

int a,b,p,k,x,y;
char c;
int tabw[500000];
int tabp[500000];
int tabr[500000];


int main() {
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%c",&c);
  for(int i=1;i<=a;i++){
    scanf("%c",&c);
    if(c=='W'){
      tabw[i]=tabw[i-1]+1;
      tabp[i]=tabp[i-1];
      tabr[i]=tabr[i-1];
    }
    else if(c=='P'){
      tabw[i]=tabw[i-1];
      tabp[i]=tabp[i-1]+1;
      tabr[i]=tabr[i-1];
    }
    else if(c=='R'){
      tabw[i]=tabw[i-1];
      tabp[i]=tabp[i-1];
      tabr[i]=tabr[i-1]+1;
    }
    else
    {
      printf("zle %d",&i);
    }
  }
  for(int i=0;i<b;i++){
    scanf("%d",&x);
    scanf("%d",&y);
    printf("%d %d %d\n",tabw[y]-tabw[x-1],tabp[y]-tabp[x-1],tabr[y]-tabr[x-1]);
  }
}
