#include<stdio.h>
#include<stdlib.h>

int main(){
  int i, nu, heads=0, tails=0;
  for(i=0;i<3;i++){
    nu = rand();
    if(nu%2==0){
      printf("Round %d: Head\n", i+1);
      heads++;
    } else{
      printf("Round %d: Tails\n",i+1);
      tails++;
    }
  }
  printf("Heads: %d, Tails: %d\n", heads,tails);
  return 0;
}
