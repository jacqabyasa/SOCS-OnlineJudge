#include <stdio.h>
#include <string.h>

int main() {
	int t, n, i, j, k, k1, q, q1, p;
	scanf("%d %d", &t, &n);
	char str[t][n+1], temp, temp1[n+1];
	
	for(i=0; i<t; i++){
		scanf("%s", &str[i]);
	}
	
	for(j=0; j<t; j++){
		for(k=0; k<n-1-j; k++){
			for(k1=k+1; k1<n; k1++){
				if (str[j][k] > str[j][k1]){
				temp = str[j][k];
				str[j][k] = str[j][k1];
				str[j][k1] = temp;
				}
			}
		}
	}
	
	for(q=0; q<t; q++){
		for (q1=0; q1<t-1-q; q1++){
			if(strcmp(str[q1],str[q1+1])<0){
				strcpy(temp1,str[q]);
            	strcpy(str[q1],str[q1+1]);
            	strcpy(str[q1+1],temp1);
			}
		}
	}
	
	for(p=0; p<t; p++){
		printf("%s\n", str[p]);
	}
	
	return 0;
}
