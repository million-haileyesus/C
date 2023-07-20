#include <stdio.h>
#include <stdbool.h>

void back_track(int board_size);
bool is_viable(int board[], int i, int j, int board_size);
void display(int board[], int board_size);

void main() {
    printf("%s", "choose a number: \n");
    int input = getchar();
    int board_size;
    /*while(input != '\n') {
        size = input - '0';
        board_size = 10 * board_size + size;
        input = getchar();
    }*/
	scanf("%d", &board_size);
    back_track(board_size);
}

/**
 * It advances to the next column if the queens position is viable, but
 * backtracks to the next available row or the previous column. If number
 * of input is filled on the board, it gets displayed.
 * 
 * @param board_size The size count of the row and column on the board.
 */
void back_track(int board_size) {
    bool can_quit = false;
    int board[board_size];
    board[0] = 0;
    for(int i = 1; i < board_size; i++) {
        board[i] = -1;
    }

    for(int i = 0; i < board_size && !can_quit; ) {
        if(is_viable(board, i, board[i], board_size)) {
            if(i == board_size - 1) {
                can_quit = true;
                display(board, board_size);
            }
            else {
                board[++i] = 0;
            }
        }
        else {
            while(i > 0 && board[i] == board_size - 1) {
                board[i--] = -1;
            }
            can_quit = (++board[i] == board_size);
        }
    }
}

/**
 * It checks if the queen does not attack or get attacked by others, or if it
 * is safe to be place in the position provided.
 *
 * @param board 		The board where the queens will be placed.
 * @param i     		The position of the column.
 * @param j				The position of the row.
 * @param board_size	The size count of the row and column on the board.
 *
 * @return is_safe		Return true if it is safe and false if not.
 */
bool is_viable(int board[], int i, int j, int board_size) {
    bool is_safe = true;
    int k = 1;
    for(; i > 0 && is_safe; k++, i--) {
        if(board[i - 1] == j) {
            is_safe = false;
        }
        else if(board[i - 1] == (j + k)) {
            is_safe = false;
        }
        else if(board[i - 1] == (j - k)) {
            is_safe = false;
        }
    }
    return is_safe;
}

/**
 * Displays the board with their viable positions.
 *
 * @param board 		The board where the queens will be placed.
 * @param board_size	The size count of the row and column on the board.
 */
void display(int board[], int board_size) {
    for(int i = 0; i < board_size; i++) {
        for(int j = 0; j < board_size; j++) {
            if(j == board[i]) {
                printf("%s", "Q");
            }
            else {
                printf("%s", "-");
            }
        }
        printf("%s", "\n");
    }
}

