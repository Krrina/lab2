#include <stdio.h>
#include<stdlib.h>  
#include<ctime>   
int main() {
	int Z, i, j, N;
	int *a=(int*)malloc(N*sizeof(int)); 
	printf("Z=");
	scanf("%i", &Z);
	printf("N=");
	scanf("%d", &N);  
	srand(time(NULL));
	j = 0;
	for (i = 0; i < N; i++) { 
		a[i] = -100 + rand() % (-100 - 100);
		printf("a[%d]=%d \n", i, a[i]);
		if (a[i] > Z) {
			a[i] = Z;
			j++;
			printf("a[%d]=%d \n", i, a[i]); 
		}
	}  
	printf("%i \n", j);   
}  