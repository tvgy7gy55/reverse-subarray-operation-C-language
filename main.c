#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 10};
    int sizeOfArray = sizeof(arr) / sizeof(int); 
    int choice;

    printf("Enter a number(index) from 0 to %d: ", sizeOfArray - 1);
    scanf("%d", &choice);
    
    int *temp = malloc(choice * sizeof(int)); //Allocating enough memory based on input

    if (choice >= sizeOfArray || choice < 0) {
        printf("Invalid choice");
        return 0;
    }

    for(int i = choice, j = 0; i != -1; i--, j++) //Writing reversed values into dynamic memory
    {
        temp[j] = arr[i];
        printf("Temp index %d // value %d\n", j, temp[j]);
    }

    for (int i = 0; i < choice + 1; i++) //Outputs reversed values from dynamic memory
    {
        printf("Index %d // value %d\n", i, temp[i]);
    }
    
    free(temp); //Releasing the allocated memory
    return 0;
}