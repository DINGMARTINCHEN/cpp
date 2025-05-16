#include <stdio.h>

int ans;
int a[257], n;
char b[505];

void print() {
    ans++;
    for (int i = 1; i <= n; i++) {
        printf("%c", b[i]);
    }
    printf("\n");
}

void dfs(int t) {
    for (int i = 1; i <= 256; i++) {
        if (a[i] > 0) {
            b[t] = i + 'a' - 1;
            a[i]--;
            if (t == n) {
                print();
            }
            dfs(t + 1);
            a[i]++;
        }
    }
}

int main() {
    scanf("%lld", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &b[i]); 
    }
    for (int i = 0; i < n; i++) {
        a[b[i] - 'a' + 1]++;
    }
    dfs(1);
    printf("%lld\n", ans);
    return 0;
}
