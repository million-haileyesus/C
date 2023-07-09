#include <stdio.h>
#include <stdbool.h>

void main() {
    printf("%s", "choose a number:\n");
	int input = getchar();
    int size, board_size;
	size = board_size = 0;
    while(input != '\n') {
		size = input - '0';
        board_size = 10 * board_size + size;
        input = getchar();
    }
	printf("%d\n", board_size);	
}

void run() {
    /**
     * int[num]* board;
     * bool can_quit = false;
     * board[0] = 0;
     * int size = sizeof(board) / sizeof(board[0]);
     * for(int i = 1; i < size; i++) {
     * 		board[i] = -1;
     * 	}
     *
     * 	for(int i = 0; i < size && !can_quit; i++) {
     *		if(is_safe()) {
     *			if(i == size - 1) {
     *				can_quit = true;
     *				display();
     *			}
     *			else {
     *				board[++i] = 0;
     *			}
     *		}
     *		else {
     *			while(i > 0 && board[i] == size - 1) {
     *				board[i--] = -1;
     *			}
     *			can_quit = (++board[i] == size);
     *
     */
}
bool is_safe() {
    int k = 1;
    bool isSafe = true;
    for(int i = 0; i < 10; i++) {

    }
    return isSafe;
}

void display() {
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 12; j++) {
            //if(j == board[i]) {
            printf("%sQ");
        }
        //else {
        //	printf("%s-");
        //}
        //}
        printf("%s\n");
    }
}
