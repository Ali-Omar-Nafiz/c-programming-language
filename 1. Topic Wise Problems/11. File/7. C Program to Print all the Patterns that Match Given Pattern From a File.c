#include<stdio.h>
#include<string.h>

// Function prototype for searching text
void search_text(char *main, char *search);

int main() {
    // Open the main file and search file in read mode
    FILE *fptr1 = fopen("main_file.txt", "r");
    FILE *fptr2 = fopen("search_file.txt", "r");

    // Check if either file failed to open
    if(fptr1 == NULL || fptr2 == NULL) {
        printf("Cannot open the Files");
        return 1;
    }

    // Count the number of characters in main_file.txt
    int count_main = 0;
    char c;
    while((c = fgetc(fptr1)) != EOF) {
        count_main++;
    }

    // Create a char array to hold the contents of main_file.txt
    char main[count_main + 1];
    fseek(fptr1, 0, SEEK_SET);  // Reset file pointer to beginning
    for(int i = 0; i < count_main; i++) {
        main[i] = fgetc(fptr1);
    }
    main[count_main] = '\0';  // Null-terminate the string

    // Count the number of characters in search_file.txt
    int count_search = 0;
    char c2;
    while((c2 = fgetc(fptr2)) != EOF) {
        count_search++;
    }

    // Create a char array to hold the contents of search_file.txt
    char search[count_search + 1];
    fseek(fptr2, 0, SEEK_SET);  // Reset file pointer to beginning
    for(int i = 0; i < count_search; i++) {
        search[i] = fgetc(fptr2);
    }
    search[count_search] = '\0';  // Null-terminate the string

    // Call the function to search for text
    search_text(main, search);
    return 0;
}

void search_text(char *main, char *search) {
    int len1, len2, count, index;
    len1 = strlen(main);
    len2 = strlen(search);

    // Loop through the main string to find a match for the search string
    for(int i = 0; i < len1; i++) {
        count = 0;
        for(int j = i, k = 0; k < len2; j++, k++) {
            if(main[j] != search[k]) break;  // Mismatch found
            count++;
        }
        if(count == len2) {  // Full match found
            index = i;
            break;
        }
    }

    // Determine line number and position in line of the match
    int line = 1, pos = 0;
    for(int i = 0; i < index + 1; i++) {
        pos++;
        if(main[i] == '\n') {
            line++;
            pos = 0;
        }
    }

    // Output result
    printf("Text found in Line: %d, Position: %d", line, pos);
}
