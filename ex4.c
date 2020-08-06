#include<stdio.h>
#include<stdlib.h>

int main(){
  int i, n, heads=0, tails=0;

  //name part
  char str[8];
  printf("Who are you? \n>");
  scanf("%s",str);
  printf("Hello,%s!\n",str);
  printf("Tossing a coin...");
  printf("\n");

  //coin part
  for(i=0;i<3;i++){
    n = rand();
    if(n%2==0){
      printf("Round %d: Head\n", i+1);
      heads++;
    } else{
      printf("Round %d: Tails\n",i+1);
      tails++;
    }
  }
  printf("Heads: %d, Tails: %d\n", heads,tails);

  //won or lost part
  if(heads > tails)
    printf("%s won!",str);
  else
    printf("%s lost.",str);
  return 0;
}
