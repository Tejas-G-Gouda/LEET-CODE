class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int row = -1, col = -1;

        // find rook
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (board[i][j] == 'R') {
                    row = i;
                    col = j;
                    break;
                }
            }
            if (row != -1) break;
        }

        int count = 0;

        // left
        for (int c = col - 1; c >= 0; c--) {
            if (board[row][c] == 'B') break;
            if (board[row][c] == 'p') {
                count++;
                break;
            }
        }

        // right
        for (int c = col + 1; c < 8; c++) {
            if (board[row][c] == 'B') break;
            if (board[row][c] == 'p') {
                count++;
                break;
            }
        }

        // up
        for (int r = row - 1; r >= 0; r--) {
            if (board[r][col] == 'B') break;
            if (board[r][col] == 'p') {
                count++;
                break;
            }
        }

        // down
        for (int r = row + 1; r < 8; r++) {
            if (board[r][col] == 'B') break;
            if (board[r][col] == 'p') {
                count++;
                break;
            }
        }

        return count;
    }
};
