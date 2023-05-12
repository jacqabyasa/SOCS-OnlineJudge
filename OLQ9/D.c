#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 2501976503 - Fabian Habil

int moves = 0;
int visited[8][8];

int char_int(char ch){
	switch (ch) {
		case 'A':
			return 0;
		case 'B':
			return 1;
		case 'C':
			return 2;
		case 'D':
			return 3;
		case 'E':
			return 4;
		case 'F':
			return 5;
		case 'G':
			return 6;
		case 'H':
			return 7;
		case '1':
			return 7;
		case '2':
			return 6;
		case '3':
			return 5;
		case '4':
			return 4;
		case '5':
			return 3;
		case '6':
			return 2;
		case '7':
			return 1;
		case '8':
			return 0;	
	}
}

void move(int x, int y, int moves){
    if(x < 0 || y < 0 || x >= 8 || y >= 8){
        return;
    }
    if(moves < visited[x][y]){
        visited[x][y] = moves;
    }
    else return;
    
    move(x+2, y+1, moves+1);
    move(x+2, y-1, moves+1);
    move(x+1, y+2, moves+1);
    move(x+1, y-2, moves+1);
    move(x-2, y+1, moves+1);
    move(x-2, y-1, moves+1);
    move(x-1, y+2, moves+1);
    move(x-1, y-2, moves+1);
}

int main(){
    int t; scanf("%d", &t);
    int index = 1;
    char initial_x, initial_y, final_x, final_y;
    int inputXI, inputYI, destXI, destYI;
    while(t--){
        getchar();
        scanf("%c%c %c%c", &initial_x, &initial_y, &final_x, &final_y);
        inputXI = char_int(initial_x);
        inputYI = char_int(initial_y);
        destXI = char_int(final_x);
        destYI = char_int(final_y);
		int i, j;
        for(i = 0; i < 8; i++){
            for(j = 0; j < 8; j++){
                visited[i][j] = 1000000000;
            }
        }
        move(inputXI, inputYI, moves);
        printf("Case #%d: %d\n", index, visited[destXI][destYI]);
        moves = 0;
        index++;
    }
}
