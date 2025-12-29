#include <stdio.h>

int n, eps[10][10], visited[10];

void eclosure(int s) {
    printf("q%d ", s);
    visited[s] = 1;

    for (int i = 0; i < n; i++) {
        if (eps[s][i] && !visited[i])
            eclosure(i);
    }
}

int main() {
    printf("Enter number of states: ");
    scanf("%d", &n);

    printf("Enter epsilon transition matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &eps[i][j]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            visited[j] = 0;

        printf("e-closure(q%d) = { ", i);
        eclosure(i);
        printf("}\n");
    }

    return 0;
}

