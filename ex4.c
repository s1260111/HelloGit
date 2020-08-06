#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
  int i,n,s,t;

  printf("Tossing a coin...\n");
  srand(time(NULL));
int r[3]={rand(),rand(),rand()};
  for(i=0;i<3;i++){
    if(r[i]%2==0) { printf("Round %d:Heads\n",i+1);
      s++;
    }
    else if(r[i]%2==1) { printf("Round %d:Tails\n",i+1);
      t++;
    }
  }
  printf("Heads: %d,Tails:%d\n",s,t);

  return 0;
}
