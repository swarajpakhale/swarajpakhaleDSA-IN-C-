#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int visited[MAX], adj[MAX][MAX];
int vertices;

int isCyclicUtil(int v, int parent) 
{
    visited[v] = 1;

    for (int i = 0; i < vertices; i++) {
        if (adj[v][i]) { 
            if (!visited[i]) {
                if (isCyclicUtil(i, v))
                    return 1;
            }
            else if (i != parent)
                return 1; 
        }
    }
    return 0;
}

int isCyclic() 
{
    for (int i = 0; i < vertices; i++)
        visited[i] = 0;

    for (int u = 0; u < vertices; u++) 
    {
        if (!visited[u]) {
            if (isCyclicUtil(u, -1))
                return 1;
        }
    }
    return 0;
}


void displayMatrix() 
{
    printf("\nAdjacency Matrix:\n");
    for (int i = 0; i < vertices; i++) 
    {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }
}

void inputFromFile() 
{
    char filename[50];
    printf("Enter file name (e.g. graph.txt): ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if (!fp) {
        printf("Error: Cannot open file!\n");
        return;
    }

    fscanf(fp, "%d", &vertices);
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            fscanf(fp, "%d", &adj[i][j]);
        }
    }
    fclose(fp);
    printf("Graph loaded successfully from file!\n");
    displayMatrix();
}

void inputFromMatrix() 
{
    printf("Enter number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter adjacency matrix (%d x %d):\n", vertices, vertices);
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            scanf("%d", &adj[i][j]);
        }
    }
    displayMatrix();
}

void inputFromList() 
{
    printf("Enter number of vertices: ");
    scanf("%d", &vertices);


    for (int i = 0; i < vertices; i++)
        for (int j = 0; j < vertices; j++)
            adj[i][j] = 0;

    int edges, v, u;
    printf("Enter number of edges: ");
    scanf("%d", &edges);

    printf("Enter each edge (u v):\n");
    for (int i = 0; i < edges; i++) {
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1; 
    }
    displayMatrix();
}

int main() {
    int choice;

    do {
        printf("\n--- Cycle Detection in Graph ---\n");
        printf("1. Accept graph from File\n");
        printf("2. Accept graph as Adjacency List\n");
        printf("3. Accept graph as Adjacency Matrix\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputFromFile();
                if (isCyclic())
                    printf("\nCycle detected in graph!\n");
                else
                    printf("\nNo cycle found in graph.\n");
                break;

            case 2:
                inputFromList();
                if (isCyclic())
                    printf("\nCycle detected in graph!\n");
                else
                    printf("\nNo cycle found in graph.\n");
                break;

            case 3:
                inputFromMatrix();
                if (isCyclic())
                    printf("\nCycle detected in graph!\n");
                else
                    printf("\nNo cycle found in graph.\n");
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
