#include <stdio.h>
#include <stdbool.h>

void back_track(int board_size);
bool is_safe(int board[], int i, int j, int board_size);
void display(int board[], int board_size);

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
    // printf("%d\n", board_size);
    back_track(board_size);
}

void back_track(int board_size) {
    bool can_quit = false;
    int board[board_size];
    board[0] = 0;
    for(int i = 1; i < board_size; i++) {
        board[i] = -1;
    }

    for(int i = 0; i < board_size && !can_quit; i++) {
        if(is_safe(board, i, board[i], board_size)) {
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
            board[i] = board[i] + 1;
            if(board[i] == board_size) {
                can_quit = true;
            }
            //can_quit = (++board[i] == board_size);
        }
    }
}

bool is_safe(int board[], int i, int j, int board_size) {
    bool isSafe = true;
    int k = 1;
    for(; i > 0 && isSafe; k++, i--) {
        if(board[i - 1] == j) {
            isSafe = false;
        }
        else if(board[i - 1] == (j + k)) {
            isSafe = false;
        }
        else if(board[i - 1] == (j - k)) {
            isSafe = false;
        }
    }
    return isSafe;
}

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

