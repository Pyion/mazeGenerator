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
		printf("%lld %lld %lld\n",w,x,y);
		while(x!=y){
			if(x>y){
				x+=k-2;
				x=x/k;
			}
			else{
				y+=k-2;
				y=y/k;
			}
			w++;

			printf("%lld %lld %lld\n",w,x,y);
		}
		printf("%lld\n",w);
	}
}
