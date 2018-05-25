#include <bits/stdc++.h>

using namespace std;
bool b;
string s,ss;
int tab[255];
int main() {
  getline(cin,s);
  for(int i=0;i<s.length();i++){
    tab[s[i]]++;
  }
  getline(cin,ss);
  for(int i=0;i<ss.length();i++){
    tab[ss[i]]--;
  }
  b=1;
  for(int i=0;i<255;i++){
    if(tab[i]!=0){
      printf("NIE");
      b=0;
      break;
    }
  }
  if(b){
    printf("TAK");
  }
  return 0;
}
