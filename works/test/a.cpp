#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int WIDTH = 10;
const int HEIGHT = 10;
const int MINES = 10;

struct Cell {
    bool isMine;
    bool isRevealed;
    int adjacentMines;
};

vector<vector<Cell>> board(HEIGHT, vector<Cell>(WIDTH));

void initializeBoard() {
    srand(time(0));
    for (int i = 0; i < MINES; ++i) {
        int x, y;
        do {
            x = rand() % WIDTH;
            y = rand() % HEIGHT;
        } while (board[y][x].isMine);
        board[y][x].isMine = true;
    }

    for (int y = 0; y < HEIGHT; ++y) {
        for (int x = 0; x < WIDTH; ++x) {
            if (board[y][x].isMine) continue;
            int count = 0;
            for (int dy = -1; dy <= 1; ++dy) {
                for (int dx = -1; dx <= 1; ++dx) {
                    int ny = y + dy, nx = x + dx;
                    if (ny >= 0 && ny < HEIGHT && nx >= 0 && nx < WIDTH && board[ny][nx].isMine) {
                        ++count;
                    }
                }
            }
            board[y][x].adjacentMines = count;
        }
    }
}

void displayBoard() {
    cout << "   ";
    for (int x = 0; x < WIDTH; ++x) {
        cout << x << " ";
    }
    cout << endl;

    for (int y = 0; y < HEIGHT; ++y) {
        cout << y << " ";
        if (y < 10) cout << " ";
        for (int x = 0; x < WIDTH; ++x) {
            if (board[y][x].isRevealed) {
                if (board[y][x].isMine) {
                    cout << "* ";
                } else {
                    cout << board[y][x].adjacentMines << " ";
                }
            } else {
                cout << "# ";
            }
        }
        cout << endl;
    }
}

bool revealCell(int x, int y) {
    if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT || board[y][x].isRevealed) {
        return false;
    }

    board[y][x].isRevealed = true;
    if (board[y][x].isMine) {
        return true;
    }

    if (board[y][x].adjacentMines == 0) {
        for (int dy = -1; dy <= 1; ++dy) {
            for (int dx = -1; dx <= 1; ++dx) {
                revealCell(x + dx, y + dy);
            }
        }
    }

    return false;
}

bool checkWin() {
    for (int y = 0; y < HEIGHT; ++y) {
        for (int x = 0; x < WIDTH; ++x) {
            if (!board[y][x].isMine && !board[y][x].isRevealed) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    initializeBoard();
    bool gameOver = false;

    while (!gameOver) {
        displayBoard();
        int x, y;
        cout << "Enter coordinates to reveal (x y): ";
        cin >> x >> y;

        if (revealCell(x, y)) {
            cout << "Game Over! You hit a mine." << endl;
            gameOver = true;
        } else if (checkWin()) {
            cout << "Congratulations! You have won the game." << endl;
            gameOver = true;
        }
    }

    displayBoard();
    return 0;
}