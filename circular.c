#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Song 
{
    char name[100];
    struct Song *next;
};

struct Song *head = NULL;

void insertSong(char songName[]) 
{
    struct Song *newSong = (struct Song *)malloc(sizeof(struct Song));
    strcpy(newSong->name, songName);
    newSong->next = NULL;

    if (head == NULL) 
    {
        head = newSong;
        head->next = head; 
    } else 
    {
        struct Song *temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = newSong;
        newSong->next = head;
    }

    printf("Song '%s' added to the playlist.\n", songName);
}


void deleteSong(char songName[]) 
{
    if (head == NULL) {
        printf("Playlist is empty.\n");
        return;
    }

    struct Song *temp = head, *prev = NULL;

    
    if (strcmp(head->name, songName) == 0) 
    {
        if (head->next == head) 
        { 
            free(head);
            head = NULL;
        } else 
        {
            struct Song *last = head;
            while (last->next != head)
                last = last->next;
            last->next = head->next;
            temp = head;
            head = head->next;
            free(temp);
        }
        printf("Song '%s' deleted from the playlist.\n", songName);
        return;
    }

    do 
    {
        prev = temp;
        temp = temp->next;
        if (strcmp(temp->name, songName) == 0) 
        {
            prev->next = temp->next;
            free(temp);
            printf("Song '%s' deleted from the playlist.\n", songName);
            return;
        }
    } while (temp != head);

    printf("Song '%s' not found.\n", songName);
}

void displayPlaylist() 
{
    if (head == NULL) {
        printf("Playlist is empty.\n");
        return;
    }

    struct Song *temp = head;
    printf("Playlist:\n");
    do {
        printf("🎵 %s\n", temp->name);
        temp = temp->next;
    } while (temp != head);
}

void countSongs() 
{
    if (head == NULL) 
    {
        printf("Total songs: 0\n");
        return;
    }

    struct Song *temp = head;
    int count = 0;
    do {
        count++;
        temp = temp->next;
    } while (temp != head);

    printf("Total songs in playlist: %d\n", count);
}

void searchSong(char songName[]) 
{
    if (head == NULL) {
        printf("Playlist is empty.\n");
        return;
    }

    struct Song *temp = head;
    do {
        if (strcmp(temp->name, songName) == 0) 
        {
            printf("Song '%s' found in the playlist.\n", songName);
            return;
        }
        temp = temp->next;
    } while (temp != head);

    printf("Song '%s' not found in the playlist.\n", songName);
}

void playSongs() 
{
    if (head == NULL) {
        printf("Playlist is empty.\n");
        return;
    }

    struct Song *temp = head;
    printf("Playing songs (in loop)... Press Ctrl+C to stop.\n");
    while (1) 
    { 
        printf("🎶 Now playing: %s\n", temp->name);
        temp = temp->next;
    }
}

int main() 
{
    int choice;
    char songName[100];

    do {
        printf("\n Music Playlist menu\n");
        printf("1. Insert a Song\n");
        printf("2. Delete a Song\n");
        printf("3. Play Songs (Traversal)\n");
        printf("4. Search for a Song\n");
        printf("5. Display Playlist\n");
        printf("6. Count Songs\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) 
        {
            case 1:
                printf("Enter song name: ");
                fgets(songName, 100, stdin);
                songName[strcspn(songName, "\n")] = '\0'; 
                insertSong(songName);
                break;

            case 2:
                printf("Enter song name to delete: ");
                fgets(songName, 100, stdin);
                songName[strcspn(songName, "\n")] = '\0';
                deleteSong(songName);
                break;

            case 3:
                playSongs();
                break;

            case 4:
                printf("Enter song name to search: ");
                fgets(songName, 100, stdin);
                songName[strcspn(songName, "\n")] = '\0';
                searchSong(songName);
                break;

            case 5:
                displayPlaylist();
                break;

            case 6:
                countSongs();
                break;

            case 7:
                printf("Exiting... Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 7);

    return 0;
}
