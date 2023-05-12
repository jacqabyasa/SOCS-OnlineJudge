#include <stdio.h>

int binary(int left, int right, int arr[], int find){
	int mid = left + (right - left)/2;
	
	while(left <= right){
		if(arr[mid] == find){
				if(arr[mid-1] == find){
				if(mid != 0){
				return binary(left, mid-1, arr, find);
				}
			}
			return mid+1;
		}
		if(find < arr[mid]){
			return binary(left, mid-1, arr, find);
		}
		if(find > arr[mid]){
			return binary(mid+1, right, arr, find);
		}
	}
	return -1;
}
int main(){
	
	int i, j, k, q, q1, n, m;
	scanf("%d %d", &n, &m);
	int arr[n], find;
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	for(q=0; q<m; q++){
		scanf("%d", &find);
		int position = binary(0, n-1, arr, find);
		printf("%d\n", position);
	}
	return 0;
}
