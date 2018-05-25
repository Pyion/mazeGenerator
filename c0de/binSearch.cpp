#include <bits/stdc++.h>

using namespace std;

int a,b,c,w,x,y,z,n,v;
int tab[1000000];
int main(){
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &n);
	w=1;
	while(w<=a){
		w=w*2;
	}
	for(int i=0;i<b;i++){
		scanf("%d",&x);
		scanf("%d",&y);
		scanf("%d",&z);
		x+=w;
		y+=w+1;
		while(x/2!=y/2){
			if(x%2==0)tab[x+1]+=z;
			if(y%2==1)tab[y-1]+=z;
			x/=2;
			y/=2;
		}
	}
	int pr=0;
	for(int i=0;i<n;i++){
		pr=0;
		scanf("%d",&v);
		v+=w+1;
		
		while(v>=1){
			pr+=tab[v];
			v/=2;
		}
		printf("%d\n",pr);
	}
}
