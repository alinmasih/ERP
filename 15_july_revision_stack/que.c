1  wildcard pattern

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isMatch(char *s, char *p) {
    int i = 0, j = 0;
    int star = -1, match = 0;

    while (s[i] != '\0') {
               if (p[j] == '?' || p[j] == s[i]) {   // Characters match or '?'

            i++;
            j++;
        }
              else if (p[j] == '*') {    // Found '*'

            star = j;
            match = i;
            j++;
        }
              else if (star != -1) {    // Previous '*' exists, backtrack

            j = star + 1;
            match++;
            i = match;
        }
   
        else {        // No match found
            return false;
        }
    }

      while (p[j] == '*')    // Skip remaining '*'

        j++;

    return p[j] == '\0';
}

int main() {
    char s[201], p[201];

    scanf("%s", s);
    scanf("%s", p);

    if (isMatch(s, p))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}