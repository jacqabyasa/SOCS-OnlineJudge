#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void leaves(int x, int sum, int arr[], int n) {
        int y = arr[x];
        
		if(x*2+1 < n) {
			
			leaves(x*2+1, sum + y, arr, n);
            if(x*2+2 < n) leaves(x*2+2, sum + y, arr, n);
        }
		  
		  else printf("%d\n", sum + y);
}

int main(){
    int t, n, i, j;
    scanf("%d", &t);
    
    for(i=0; i<t; i++){
        scanf("%d",&n);
        
		int arr[n];
		
        for(j=0; j<n; j++){
            scanf("%d",&arr[j]);
        }
        
        printf("Case #%d:\n", i+1);
        leaves(0, 0, arr, n);
    }
}
