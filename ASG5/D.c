#include <stdio.h>

int main()
{

int a, q, k;
scanf("%d", &k);
for (q=0; q < k; q++) {
	
scanf("%d", &a);


  
int i = 0, j=0;

    for (i = 0; i < a; i++) {
        for (j = 0; j < a; j++) {
            if (i == 0 || j == i || i == a - 1 || a - 1 - i == j || j == 0 || j == a - 1)          
               {printf("*"); }          
 
            else
                {printf(" ");}
             
        }
 
        printf("\n");
    }
    printf("\n");
}
return 0;
}
