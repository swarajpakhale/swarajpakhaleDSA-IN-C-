#include <stdio.h>
#define SIZE 10   

int hashTable[SIZE];

void init() 
{
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;   
}


int hashFunc(int key) 
{
    return key % SIZE;
}

void insert(int key) 
{
    int index = hashFunc(key);
    int i = 0;

    
    while (hashTable[(index + i) % SIZE] != -1 && i < SIZE)
        i++;

    if (i == SIZE) {
        printf("Hash table is full!\n");
        return;
    }

    hashTable[(index + i) % SIZE] = key;
    printf("Inserted key %d at index %d\n", key, (index + i) % SIZE);
}


void search(int key) 
{
    int index = hashFunc(key);
    int i = 0;

    while (hashTable[(index + i) % SIZE] != -1 && i < SIZE) {
        if (hashTable[(index + i) % SIZE] == key) {
            printf("Key %d found at index %d\n", key, (index + i) % SIZE);
            return;
        }
        i++;
    }

    printf("Key %d not found!\n", key);
}


void deleteKey(int key) 
{
    int index = hashFunc(key);
    int i = 0;

    while (hashTable[(index + i) % SIZE] != -1 && i < SIZE) {
        if (hashTable[(index + i) % SIZE] == key) {
            hashTable[(index + i) % SIZE] = -1;
            printf("Key %d deleted from index %d\n", key, (index + i) % SIZE);
            return;
        }
        i++;
    }

    printf("Key %d not found!\n", key);
}


void display() {
    printf("\nHash Table:\n");
    for (int i = 0; i < SIZE; i++) 
    {
        if (hashTable[i] != -1)
            printf("[%d] --> %d\n", i, hashTable[i]);
        else
            printf("[%d] --> (empty)\n", i);
    }
}

int main() 
{
    int choice, key;
    init();

    do {
        printf("\n--- Hash Table Menu ---\n");
        printf("1. Insert Key\n");
        printf("2. Search Key\n");
        printf("3. Delete Key\n");
        printf("4. Display Table\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter key to insert: ");
                scanf("%d", &key);
                insert(key);
                break;

            case 2:
                printf("Enter key to search: ");
                scanf("%d", &key);
                search(key);
                break;

            case 3:
                printf("Enter key to delete: ");
                scanf("%d", &key);
                deleteKey(key);
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
