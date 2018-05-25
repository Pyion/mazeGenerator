#include <bits/stdc++.h>
using namespace std;
int numberDays, pluses, minuses;
char currentDay;
int main(){
  scanf("%d",&numberDays);
  scanf("%c",&currentDay);
  for(int i=0;i<numberDays;i++){
    scanf("%c", &currentDay);
    if(currentDay == '+'){
      pluses++;
    }
    else{
      minuses++;
    }
  }
  printf("%d", min(pluses, minuses));
}
