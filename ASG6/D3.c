#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	int i, j;
    int tc; scanf("%d", &tc);
    int index = 1;
    while(tc--){
        int n; scanf("%d", &n);
        long long int angka[n];
        for(i  = 0; i < n; i++){
            scanf("%lld", &angka[i]);
        }
        for(i = 0; i < n; i++){
            for(j = i+1; j < n; j++){
                if(angka[i] > angka[j]){
                    int temp = angka[i];
                    angka[i] = angka[j];
                    angka[j] = temp;

                }
            }
        }
        long long int max_count = 1, res = angka[0], curr_count = 1; 
        for (i = 1; i < n; i++) { 
            if (angka[i] == angka[i - 1]) 
                curr_count++; 
            else { 
                if (curr_count > max_count) { 
                    max_count = curr_count; 
                    res = angka[i - 1]; 
                } 
                curr_count = 1; 
            } 
        } 
        if (curr_count > max_count){ 
            max_count = curr_count; 
            res = angka[n - 1]; 
        }
        printf("Case #%d: %lld\n", index, max_count);
        printf("%lld\n", res);
        index++;
    }
    return 0;
}
