#include <bits/stdc++.h>

using namespace std;

int tab[1000000];
int v,k,x,y,t;
vector<int> c[1000000];
priority_queue<int> q;
int main(){
	scanf("%d",&v);
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",&x);
		scanf("%d",&y);
		c[x].push_back(y);
		c[y].push_back(x);
	}
	q.push(1);
	while(!q.empty()){
		t=q.top();
		q.pop
	}
	
}
