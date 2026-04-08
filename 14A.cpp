#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char grid[55][55];

    for(int i = 0; i < n; i++) {
        scanf("%s", grid[i]);
    }

    int top = n, bottom = 0, left = m, right = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == '*') {
                if(i < top) top = i;
                if(i > bottom) bottom = i;
                if(j < left) left = j;
                if(j > right) right = j;
            }
        }
    }

    // Print result rectangle
    for(int i = top; i <= bottom; i++) {
        for(int j = left; j <= right; j++) {
            printf("%c", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}
