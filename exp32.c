#include <stdio.h>

// Function to calculate the length of a string
int my_strlen(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to copy source string into destination string
void my_strcpy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Ensure the destination string is null-terminated
}

// Function to append source string to the end of destination string
void my_strcat(char dest[], char src[]) {
    int i = 0;
    int j = 0;

    // Move to the end of the destination string
    while (dest[i] != '\0') {
        i++;
    }

    // Start appending source characters
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0'; // Ensure the concatenated string is null-terminated
}

int main() {
    char str1[100] = "Hello";
    char str2[50] = " World";
    char copyBuffer[100];

    // Testing strlen
    printf("Length of '%s': %d\n", str1, my_strlen(str1));

    // Testing strcpy
    my_strcpy(copyBuffer, str1);
    printf("After strcpy, copyBuffer: %s\n", copyBuffer);

    // Testing strcat
    my_strcat(str1, str2);
    printf("After strcat, str1: %s\n", str1);

    return 0;
}

