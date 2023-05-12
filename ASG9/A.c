#include <stdio.h>

void fibo(int order, char a0, char a1){  
    
        if(order ==0) printf("%c",a0);
		else if (order ==1) printf("%c",a1);
		else{
		 fibo(order-1, a0, a1);
		 fibo(order-2, a0, a1);
	}
          
}
	


int main(){
	int a0, a1, order, i,t;
	scanf("%d", &t);
	for(i=0; i<t; i++){
	scanf("%d %c %c", &order, &a0, &a1);
	
	printf("Case #%d: ", i+1);

	fibo(order, a0, a1);
	printf("\n");}
	
return 0;
}
