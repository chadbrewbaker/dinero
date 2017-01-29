#include <stdio.h>


#define M 3
#define K 3
#define N 3


int** p_dist(int** a, int**  b){
     if(a ==b)
	return 0;
     if(a<b)
	return b-a;
     else
	return a-b;
}


int main()
{
  int i,j,k;

  int matA[M][M];
  int matB[M][M];
  int matC[M][M];

printf("main %p\n", main);
printf("matA %p\n", matA);
printf("matB %p\n", matB);
printf("matC %p\n", matC);
printf("AC dist %p\n", p_dist(matA, matC));
printf("i %p\n", &i);
printf("j %p\n", &j);
printf("k %p\n", &k);

for(i=0;i<M;i++){
	for(j=0;j<K;j++){
		printf("zero %p\n", &matC[i][j]);
		   matC[i][j]=0;
	           for(k=0;k<N;k++){
                    printf("load  %p\n", &matA[i][k]);
		    printf("load  %p\n", &matB[k][j]);
		    printf("store %p\n", &matC[i][j]);
		    matC[i][j]+=matA[i][k]*matB[k][j];
	}
     }
  }

return 0;
}
