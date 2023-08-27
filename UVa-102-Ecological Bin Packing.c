#include <stdio.h>

int main() {
  int B[3];
  int G[3];
  int C[3];
  char palabras[6][4] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
  //                       0      1      2      3      4      5
  
  while(scanf("%d %d %d %d %d %d %d %d %d", &B[0], &G[0], &C[0], &B[1], &G[1], &C[1], &B[2], &G[2], &C[2]) != EOF){
    int flag;
    int minimo = 2147483647, cache;
    
    // BCG
    cache = B[1] + B[2] + C[0] + C[2] + G[0] + G[1];
    if (cache < minimo){
      minimo = cache;
      flag = 0;
    }

    // BGC
    cache = B[1] + B[2] + G[0] + G[2] + C[0] + C[1];
    if (cache < minimo){
    minimo = cache;
    flag = 1;
    }

    // CBG
    cache = C[1] + C[2] + B[0] + B[2] + G[0] + G[1];
    if (cache < minimo){
    minimo = cache;
    flag = 2;
    }

    // CGB
    cache = C[1] + C[2] + G[0] + G[2] + B[0] + B[1];
    if (cache < minimo){
    minimo = cache;
    flag = 3;
    }

    // GBC
    cache = G[1] + G[2] + B[0] + B[2] + C[0] + C[1];
    if (cache < minimo){
    minimo = cache;
    flag = 4;
    }

    // GCB
    cache = G[1] + G[2] + C[0] + C[2] + B[0] + B[1];
    if (cache < minimo){
    minimo = cache;
    flag = 5;
    }

    printf("%s %d\n", palabras[flag], minimo);
  }
  return 0;
}
