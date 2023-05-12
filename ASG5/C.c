#include <stdio.h>

int main()
{

int n, k, i, x1, x, y1, y, z, z1;

scanf("%d %d", &n, &k);



    for (i = 0; i < 3; i++) {
		if (i==0) {
			for (x1 = 0; x1<n; x1++) {
			for (x = 0; x<n; x++)
			printf("#");printf("\n");} printf("\n");}          
 
        if (i==1){
			for (y1 = 0; y1<n; y1++) {
			for (y = 0; y<n; y++)
				if ((y1+1)%k == 0) {printf("#");}
				else printf(".");printf("\n");} printf("\n");}  
       
	   if (i==2) {
			for (z1 = 0; z1<n; z1++) {
			for (z = 0; z<n; z++)
				if ((z+1)%k== 0) {printf("#");}
				else printf("."); printf("\n");} }        
        }

   

return 0;
}
