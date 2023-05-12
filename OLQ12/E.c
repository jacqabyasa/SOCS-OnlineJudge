#include <stdio.h>

int main(){
	
	int t, i, j, counter[2] = {0};
	scanf("%d", &t);
	int arr[t];
	for(i=0; i<t; i++){
		scanf("%d", &arr[i]);
	}
	for(j=0; j<t; j++){
		counter[arr[j]]++;
	}
	if(counter[1] != 0) printf("not easy\n");
	else if(counter[1] == 0) printf("easy\n");
	
	return 0;
}
