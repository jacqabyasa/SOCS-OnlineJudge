#include <stdio.h>

int main () {
	
	int x, friends, q, i, j, k, view, left, right, num, view1;
	
	
	scanf("%i", &x);
	int views[x];
	for (i = 0; i < x; i++) {
	scanf("%i", &views[i]);}

	scanf ("%i", &friends);
	
	for (q = 0; q < friends; q++) {
	scanf ("%i %i", &left, &right);
	
	view = 0;
	for (j = left; j < (right+1); j++){
	 view = view + views[(j-1)];	 
}
	 printf ("Case #%i: %i\n", num = q+1, view);
	 
}

	
	
	return 0;
}


