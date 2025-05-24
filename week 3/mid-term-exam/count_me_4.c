#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    while (n--) {
        char s[10001];
        scanf("%s", s);
        
        int cLetter = 0, sLetter = 0, digit = 0;
        
        int len = strlen(s);
        
        for (int i = 0; i < len; i++) {
            
            if (s[i] >= 'A' && s[i] <= 'Z') {
                cLetter++;
            } else if (s[i] >= 'a' && s[i] <= 'z') {
                sLetter++;
            } else if (s[i] >= '0' && s[i] <= '9') {
                digit++;
            }
        }
        
        printf("%d %d %d\n", cLetter, sLetter, digit);
    }
    
    return 0;
}
