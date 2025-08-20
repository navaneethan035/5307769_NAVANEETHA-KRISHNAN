#include <string.h>
#include <ctype.h>

char* pangrams(char* s) {
    int alphabet_seen[26] = {0};
    int unique_letters_count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char lower_char = tolower(s[i]);
        
        if (islower(lower_char)) {
            int index = lower_char - 'a';
            
            if (alphabet_seen[index] == 0) {
                alphabet_seen[index] = 1;
                unique_letters_count++;
            }
        }
    }
    
    if (unique_letters_count == 26) {
        return "pangram";
    } else {
        return "not pangram";
    }
}