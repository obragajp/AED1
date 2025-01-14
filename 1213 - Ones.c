#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10000

typedef struct {
    int mod;
    int length;
} QueueItem;

int bfs(int n) {
    QueueItem queue[MAX];
    int front = 0, rear = 0;
    queue[rear].mod = 1 % n;
    queue[rear].length = 1;
    rear++;
    int visited[n];
    memset(visited, 0, sizeof(visited));
    visited[1 % n] = 1;
    while (front < rear) {
        QueueItem current = queue[front];
        front++;
        if (current.mod == 0) {
            return current.length;
        }
        int nextMod = (current.mod * 10 + 1) % n;
        if (!visited[nextMod]) {
            visited[nextMod] = 1;
            queue[rear].mod = nextMod;
            queue[rear].length = current.length + 1;
            rear++;
        }
    }
    return -1;
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        printf("%d\n", bfs(n));
    }
    return 0;
}
