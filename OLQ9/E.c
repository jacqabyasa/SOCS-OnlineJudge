#include <stdio.h>
#include <stdlib.h>


int counter = 0;
int m, n;
char map[10010][10010];
int map_int[10010][10010];
void pacmon(int x, int y){
	
    map_int[x][y]++;
    if (y < m-1){
        if ((map[x][y + 1] == '*' || map[x][y + 1] == '.') && map_int[x][y + 1] != 1){
            if (map[x][y + 1] == '*'){
            	counter++;
			} 
            pacmon(x, y+1);
        }
    }
    if (y != 0){
        if ((map[x][y - 1] == '*'|| map[x][y - 1] == '.') && map_int[x][y-1] != 1){
            if (map[x][y - 1] == '*'){
            	counter = counter + 1;
			}
            pacmon(x, y-1);
        }
    }

    if (x < n-1){
        if ((map[x+1][y] == '*' || map[x+1][y] == '.') && map_int[x+1][y] != 1){
            if (map[x+1][y] == '*'){
            	counter = counter + 1;
			}   
            pacmon(x+1, y);
        }
    }

    if (x != 0){
        if ((map[x - 1][y] == '*' || map[x - 1][y] == '.') && map_int[x-1][y] != 1){
            if (map[x - 1][y] == '*'){
            	counter = counter + 1;
			}   
            pacmon(x-1, y);
        }   
    }
}
int main(){
	
	int t, k;
	scanf("%d", &t);
	for(k=0; k<t; k++){
		scanf("%d %d", &n, &m);
    	getchar();
    	int p, q, i, j;
    	for(i=0; i<n; i++){
        	for(j = 0; j < m; j++){
            	scanf("%c", &map[i][j]);
            	map_int[i][j] = 0;
            	
            	if (map[i][j] == 'P'){
               		p = i;
               		q = j;
            	}
        	}
        	getchar();
   		}
   		counter = 0;
    	pacmon(p, q);
    	printf("Case #%d: %d\n", k+1, counter);	
	}
	return 0;
	
}
