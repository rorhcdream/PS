#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;

enum Direction {
    UP, DOWN, LEFT, RIGHT
};
const Direction all_directions[] = {UP, DOWN, LEFT, RIGHT};

int n;
int board[20][20];

// reverse_index: reverse horizontal indices (before reverse axis)
int* access_arr(int board[20][20], int i, int j, bool reverse_index, bool reverse_axis) {
    if (reverse_index) {
        j = n - 1 - j;
    }
    if (reverse_axis) {
        int temp = i;
        i = j;
        j = temp;
    }

    return &board[i][j];
}

void move(int board[20][20], Direction d) {
    bool reverse_index = false, reverse_axis = false;
    if (d == UP || d == DOWN)
        reverse_axis = true;
    if (d == DOWN || d == RIGHT)
        reverse_index = true;

    for (int i = 0; i < n; i++) {
        int filled = 0;    // index of next block of completely filled block
        for (int j = 1; j < n; j++) {
            int* boardij = access_arr(board, i, j, reverse_index, reverse_axis);
            int* boardifilled = access_arr(board, i, filled, reverse_index, reverse_axis);
            if (*boardij != 0) {
                if (*boardifilled == *boardij) {
                    *boardifilled *= 2;
                    filled++;
                    *boardij = 0;
                }
                else {
                    if (*boardifilled != 0)
                        filled++;
                    if (j != filled) {
                        *access_arr(board, i, filled, reverse_index, reverse_axis) = *boardij;
                        *boardij = 0;
                    }
                }
            }
        }
    }
}

int find_max(int board[20][20], int left_count) {
    int max = 0;

    if (left_count == 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                max = max > board[i][j] ? max : board[i][j];
            }
        }
    }
    else {
        int boards[4][20][20];
        for (int i = 0; i < 4; i++) {
            memcpy(boards[i], board, sizeof(int) * 20 * 20);
        }
        for (Direction d : all_directions) {
            int idx = (int)d;
            int value;
            move(boards[idx], d);
            value = find_max(boards[idx], left_count-1);
            max = max > value ? max : value;
        }
    }
    
    return max;
}

void print_board(int board[20][20]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(5) << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main(void)
{
    // // input
	// cin >> n;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cin >> board[i][j];
    //     }
    // }

    // cout << find_max(board, 5);

    // test
    n = 20;
    int board[20][20];

    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int val;
            int r = rand() % 3 + 1;
            if (r == 0) val = 0;
            else val = 1 << r;

            board[i][j] = val;
        }
    }

    print_board(board);
    Direction d = Direction(rand() % 4);
    cout << d << endl;

    move(board, d);
    print_board(board);
    cout << endl;

    // cout << find_max(board, 5);
    
    return 0;
}