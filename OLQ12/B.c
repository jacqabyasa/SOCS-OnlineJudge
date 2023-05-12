#include <stdio.h>

void sort(int arr[], int in){
	int i, j;
	for(i=0; i<in; i++){
		for(j=0; j<in-1-i; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void replace(int arr[], int in, int remove[], int out){
	int i, j;
	for(i=0; i<in; i++){
		for(j=0; j<out; j++){
			if(arr[i] == remove[j]){
				arr[i] = 0;
			}
		}
	}
}

int main(){
	
	int in, out, i, j;
	scanf("%d %d", &in, &out);
	int arr[in], remove[out];
	for(i=0; i<in; i++){
		scanf("%d", &arr[i]);
	}
	for(j=0; j<out; j++){
		scanf("%d", &remove[j]);
	}
	
	sort(arr, in);
	replace(arr, in, remove, out);
	sort(arr, in);
	
	if(arr[in-1] == 0) arr[in-1] = -1;
	
	printf("Maximum number is %d\n", arr[in-1]);
	
	
}
