#include <stdio.h>

int main () {
	
	int x, y, a, b, c, i, j, k, i1, j1, T;
	
	
	x= 0; y=0;
	
	scanf("%i %i", &x, &y);
	
	int array[x][y];
	for(i=0; i<x; i++){
		for (j=0; j<y; j++){
		scanf("%i", &array[i][j]);
		scanf("\n");
	}
	}
	T=0;
	scanf ("%i", &T);
	for (k=0;k<T;k++) {
		a=0;b=0;c=0;
		scanf ("%i %i %i", &a, &b, &c);
		array[(a-1)][(b-1)] = c;	
	}
	
	for(i1=0; i1<x; i1++){
		for (j1=0; j1<y; j1++){
		printf("%i", array[i1][j1]);
		if (j1<(y-1)) printf (" ");
		}
		printf("\n");
	}

	return 0;
}


