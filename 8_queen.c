#include <stdio.h>

#define TRUE 1
#define FALSE 0

static short int board[8][8];

int good(int row, int col) {
    // Check the row
    for (int i = 0; i < 8; i++) {
        if (board[row][i] && i != col) {
            return FALSE;
        }
    }

    // Check the column
    for (int i = 0; i < 8; i++) {
        if (board[i][col] && i != row) {
            return FALSE;
        }
    }

    // Check the upper-left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] && (i != row || j != col)) {
            return FALSE;
        }
    }

    // Check the upper-right diagonal
    for (int i = row, j = col; i >= 0 && j < 8; i--, j++) {
        if (board[i][j] && (i != row || j != col)) {
            return FALSE;
        }
    }

    return TRUE;
}

void drawboard() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[i][j] == TRUE) {
                printf("Q ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

int try(int n) {
    if (n == 8) {
        return TRUE;  // All queens have been successfully placed.
    }

    for (int i = 0; i < 8; i++) {
        if (good(n, i)) {
            board[n][i] = TRUE;
            if (try(n + 1)) {
                return TRUE;
            }
            board[n][i] = FALSE;
        }
    }
    return FALSE;
}

int main() {
    int i, j;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            board[i][j] = FALSE;
        }
    }
    if (try(0) == TRUE) {
        drawboard();
    } else {
        printf("No solution found.\n");
    }
    return 0;
}
