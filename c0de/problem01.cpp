#include <bits/stdc++.h>
using namespace std;
long long a,k,c,w;
long long x,y;
int main(){
	scanf("%lld",&a);
	scanf("%lld",&k);
	scanf("%lld",&c);
	for(int i=0;i<c;i++){
		scanf("%lld %lld",&x,&y);
		w=0;
		
		
		while(x!=y){
			if(x>y){
				x=x/k;
				x+=k-2;
			}
			else{
				y=y/k;
				y+=k-2;
			}
			w++;

			//printf("%d %d\n",x,y);
		}
		printf("%d\n",w);
	}
}
