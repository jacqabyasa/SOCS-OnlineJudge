#include <stdio.h>

int main () {
	
	int N, j, l, b, i, score, total, average;
	
	scanf ("%i", &N);
	scanf ("%i %i %i", &j, &l, &b);
	
	total=0;
	for (i=0; i<N; i++) {
		scanf ("%i", &score);
		total = total + score;
	}
	
	average = (total+j+l+b)/(N+3);
	
	if (j >= average) {printf("Jojo lolos\n");}
	else {printf("Jojo tidak lolos\n");}
	
	if (l >= average) {printf("Lili lolos\n");}
	else {printf("Lili tidak lolos\n");}
	
	if (b >= average) {printf("Bibi lolos\n");}
	else {printf("Bibi tidak lolos\n");}
	
	
	return 0;
}


