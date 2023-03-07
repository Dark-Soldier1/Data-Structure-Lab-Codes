#include <stdio.h>
#include <stdlib.h>
int visited[7] = {0, 0, 0, 0, 0, 0, 0};
int A[7][7] = {
    {0, 1, 1, 1, 0, 0, 0}, {1, 0, 1, 0, 0, 0, 0}, {1, 1, 0, 1, 1, 0, 0}, {1, 0, 1, 0, 1, 0, 0}, {0, 0, 1, 1, 0, 1, 1}, {0, 0, 0, 0, 1, 0, 0}, {0, 0, 0, 0, 1, 0, 0}};
void Dfs(int i)
{
    printf("%d", i);
    visited[i] = 1;
    for (int j = 0; j < 7; j++)
    {
        if (A[i][j] == 1 && !visited[j])
        {
            Dfs(j);
        }
    }
}
int main()
{
    Dfs(1);
    return 0;

    return 0;
}