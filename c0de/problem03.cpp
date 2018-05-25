#include <bits/stdc++.h>

using namespace std;

int a,b,c,m;
int tab[1000];
bool czyOdw[1000];
int main(){
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d",&b);
		for(int j=0;j<b;j++){
			scanf("%d",&c);
			if(czyOdw[c]==0){
				tab[c]+=c;
				czyOdw[c]=1;
			}
		}
		m=0;
		for(int j=0;j<1000;j++){
			m=max(tab[j],m);
			tab[j]=m;
			czyOdw[j]=0;
		}
	}
	printf("%d",m);
}
