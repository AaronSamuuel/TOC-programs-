#include <stdio.h>

int n, e[10][10], v[10];

void dfs(int s) {
    printf("q%d ", s);
    v[s] = 1;
    for (int i = 0; i < n; i++)
        if (e[s][i] && !v[i])
            dfs(i);
}

int main() {
    printf("Enter number of states: ");
    scanf("%d", &n);

    printf("Enter epsilon transition matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &e[i][j]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) v[j] = 0;
        printf("e-closure(q%d) = { ", i);
        dfs(i);
        printf("}\n");
    }
    return 0;
}

