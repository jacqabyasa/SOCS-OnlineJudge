#include <stdio.h>
#include <string.h>

struct data {
	char name[11];
	int score;
};

int main(){
	int t, tc, i, j, i1, j1, i2, j2, k, k1, q, index = 0;
	char find[11];
	scanf("%d", &t);
	for(i=0; i<t; i++){
		scanf("%d", &tc);
		getchar();
			struct data rank[tc], temp, temp1;
			for(j=0; j<tc; j++){
				scanf("%[^#]#%d", &rank[j].name, &rank[j].score);
				getchar();
			}
			scanf("%s", &find);
		
			for(i1=0; i1<tc; i1++){
				for(j1=0; j1<tc-1; j1++){
					if(rank[j1].score < rank[j1+1].score){
						temp = rank[j1];
						rank[j1] = rank[j1+1];
						rank[j1+1] = temp;
					}
				
			}
			}
			
			for(i2=0; i2<tc-1; i2++){
			for(j2=0; j2<tc; j2++){
				if (rank[j2].score == rank[j2+1].score){
					if(strcmp(rank[j2].name,rank[j2+1].name) > 0){
            			temp1 = rank[j2]; 
						rank[j2] = rank[j2+1]; 
						rank[j2+1] = temp1;
					}
			}
			}
			}
			
			for(k=0; k<tc; k++){
			if(strcmp(rank[k].name, find) == 0){
			index = k+1;
			}
		}
			
			printf("Case #%d: %d\n", i+1, index);
		}
	return 0;
	}


