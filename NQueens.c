#include <stdio.h>
#include <stdbool.h>

void main() {
	printf("%s", "choose a number:\n");
	int c = getchar();
	printf("%d", c);
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
	 *			}
	 *			else {
	 *				board[++i] = 0;
	 *			}
	 *		}
	 *		else {
	 *			while(i > 0 && board) {
	 *			}
	 *			can_quit = (board[i] == size);
	 *
	 */
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
			printf("%s\n");
		}
		printf("%s\n");
	}
}
