#include <stdio.h>

int main(){

	int t, tc, i, j, k, q, i1, j1, index, find;
	scanf("%d", &t);
	for(i=0; i<t; i++){
		scanf("%d", &tc);
		int arr[tc], temp;
		for(j=0; j<tc; j++){
			scanf("%d", &arr[j]);
		}
		
		for(i1=0; i1<tc; i1++){
				for(j1=0; j1<tc-1; j1++){
					if(arr[j1] > arr[j1+1]){
						temp = arr[j1];
						arr[j1] = arr[j1+1];
						arr[j1+1] = temp;
					}
				}
				}
		
		
		int status = 0;
		scanf("%d", &find);
		for(k=0; k<tc; k++){
			if(3000<=arr[k]<=9999 ){
				if(arr[k] == find){
					status = 1;
					if(k == tc-1) {
						index = arr[k-1];
					} else if(k < tc-1){
						index = arr[k+1];
						}
				}
			}
		}
		
		if(status == 0){
		printf("CASE #%d: -1 -1\n", i+1);
		}
		else if (index > find){		
		printf("CASE #%d: %d %d\n", i+1, find, index);
		}
		else if (index < find){
		printf("CASE #%d: %d %d\n", i+1, index, find);	
		}
	}
	return 0;
	}

