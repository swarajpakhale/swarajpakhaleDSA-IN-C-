#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee 
{
    char name[50];
    int salary;
    struct Employee *left, *right;
};

struct Employee* createEmployee(char name[], int salary) 
{
    struct Employee* newEmp = (struct Employee*)malloc(sizeof(struct Employee));
    strcpy(newEmp->name, name);
    newEmp->salary = salary;
    newEmp->left = newEmp->right = NULL;
    return newEmp;
}

struct Employee* insert(struct Employee* root, char name[], int salary) 
{
    if (root == NULL)
        return createEmployee(name, salary);

    if (salary < root->salary)
        root->left = insert(root->left, name, salary);
    else
        root->right = insert(root->right, name, salary);

    return root;
}

void displayInOrder(struct Employee* root) 
{
    if (root == NULL)
        return;

    displayInOrder(root->left);
    printf("Name: %-15s | Salary: %d\n", root->name, root->salary);
    displayInOrder(root->right);
}

struct Employee* findMin(struct Employee* root) 
{
    while (root && root->left != NULL)
        root = root->left;
    return root;
}

struct Employee* findMax(struct Employee* root) 
{
    while (root && root->right != NULL)
        root = root->right;
    return root;
}

int totalSalary(struct Employee* root) 
{
    if (root == NULL)
        return 0;
    return root->salary + totalSalary(root->left) + totalSalary(root->right);
}

int main() 
{
    struct Employee* root = NULL;
    int choice, salary;
    char name[50];

    do {
        printf("\n Employee Database (BST) \n");
        printf("1. Add Employee\n");
        printf("2. Display Employees (Sorted by Salary)\n");
        printf("3. Display Employee with Minimum Salary\n");
        printf("4. Display Employee with Maximum Salary\n");
        printf("5. Display Total Monthly Salary Expenses\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                printf("Enter Employee Name: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0'; 
                printf("Enter Salary: ");
                scanf("%d", &salary);
                root = insert(root, name, salary);
                printf("Employee added successfully!\n");
                break;

            case 2:
                if (root == NULL)
                    printf("No employees found.\n");
                else {
                    printf("\nEmployees sorted by salary:\n");
                    displayInOrder(root);
                }
                break;

            case 3: {
                struct Employee* minEmp = findMin(root);
                if (minEmp)
                    printf("Employee with Minimum Salary:\nName: %s | Salary: %d\n", minEmp->name, minEmp->salary);
                else
                    printf("No employees found.\n");
                break;
            }

            case 4: {
                struct Employee* maxEmp = findMax(root);
                if (maxEmp)
                    printf("Employee with Maximum Salary:\nName: %s | Salary: %d\n", maxEmp->name, maxEmp->salary);
                else
                    printf("No employees found.\n");
                break;
            }

            case 5:
                printf("Total Monthly Salary Expenses: %d\n", totalSalary(root));
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 6);

    return 0;
}
