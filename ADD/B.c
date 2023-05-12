#include <stdio.h>

int main () {
	
	
	int d, s, t;
	
	scanf("%i %i %i", &d, &s, &t);
	if (d > s && d > t) { printf ( "Daging\n"); if (s>t) {printf ("Sayur\nTelur\n");} else printf ("Telur\nSayur\n"); }
	else if (s > d && s > t) { printf ( "Sayur\n"); if (d>t) {printf ("Daging\nTelur\n");} else printf ("Telur\nDaging\n"); }
	else if (t > s && t > d) { printf ( "Telur\n"); if (s>d) {printf ("Sayur\nDaging\n");} else printf ("Daging\nSayur\n"); }	
		
	

	
	
	return 0;
}



