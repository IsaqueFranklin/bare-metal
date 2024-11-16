#include <stdio.h>
#include <stdlib.h>

// 1. Arrays
void array_example() {
    // Declare and initialize an array of integers
    int arr[5] = {1, 2, 3, 4, 5};

    // Accessing array elements
    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 2. Structures
struct Person {
    char name[50];
    int age;
};

// Function to demonstrate structures
void struct_example() {
    // Declare and initialize a structure
    struct Person person;
    snprintf(person.name, sizeof(person.name), "Alice");
    person.age = 30;

    // Accessing structure members
    printf("Person: %s, Age: %d\n", person.name, person.age);
}

// 3. Linked List Node Definition
struct Node {
    int data;
    struct Node* next;
};

// Function to demonstrate linked lists
void linked_list_example() {
    // Create nodes
    struct Node* head = malloc(sizeof(struct Node));
    head->data = 1;
    head->next = malloc(sizeof(struct Node));
    head->next->data = 2;
    head->next->next = NULL;

    // Traversing the linked list
    printf("Linked List: ");
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    // Free allocated memory
    free(head->next);
    free(head);
}

// 4. Dynamic Memory Allocation
void dynamic_memory_example() {
    // Allocate memory for an array dynamically
    int* dynamic_array = malloc(5 * sizeof(int));

    // Check if memory allocation was successful
    if (dynamic_array == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    // Initialize and print dynamic array
    for (int i = 0; i < 5; i++) {
        dynamic_array[i] = i + 1;
    }

    printf("Dynamic Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", dynamic_array[i]);
    }
    printf("\n");

    // Free allocated memory
    free(dynamic_array);
}

// Main function to run the examples
int main() {
    array_example();
    struct_example();
    linked_list_example();
    dynamic_memory_example();

    return 0;
}
