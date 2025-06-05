#include<stdio.h>
#include<string.h>

// Function to search for a substring within a string
void search_text(char *main, char *search);

int main() {
    // Define the main string and the substring to search for
    char main[] = "Ali Omar Nafiz";
    char search[] = "Omar";

    // Call the function to search for the substring
    search_text(main, search);

    return 0;
}

void search_text(char *main, char *search) {
    int len1, len2, count;
    len1 = strlen(main);    // Length of the main string
    len2 = strlen(search);  // Length of the search string

    // Loop through each character in the main string
    for (int i = 0; i < len1; i++) {
        count = 0;

        // Compare characters of search string with main string starting from position i
        for (int j = i, k = 0; k < len2; j++, k++) {
            if (main[j] != search[k]) break;  // Break if any character does not match
            count++;
        }

        // If all characters matched, we found the substring
        if (count == len2) {
            printf("Text found at index %d\n", i);
            return;
        }
    }

    // If loop completes without a match
    printf("Not found\n");
}
