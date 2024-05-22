#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function declarations
void speak();
bool allowed_to_speak();

int main() {
    // Check if allowed to speak
    if (allowed_to_speak()) {
        // Execute the speak function
        speak();
    } else {
        printf("Not allowed to speak.\n");
    }
    return 0;
}

// Function definitions
void speak() {
    printf("Speaking now...\n");
    printf("I NEED IT TO TOP ME NOW\n");
}

bool allowed_to_speak() {
    char response[10];

    // Prompt the user
    printf("Am I allowed to speak? (yes/no): ");
    fgets(response, sizeof(response), stdin);

    // Remove newline character from the response
    response[strcspn(response, "\n")] = '\0';

    // Check if the response is "yes"
    if (strcmp(response, "yes") == 0) {
        return true;
    } else {
        return false;
    }
}