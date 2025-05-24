#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int totalFarmers = m1 + m2;
        
        int newDays = (m1 * d) / totalFarmers; 
        
        int fewerDays = d - newDays;

        printf("%d\n", fewerDays);
    }

    return 0;
}
