#include <stdio.h>

int main() {
    int n, index, value;
    scanf("%d", &n);

    int arr[n + 1];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &index);
    scanf("%d", &value);

    for(int i = n; i >= index+1; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;

    for(int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
