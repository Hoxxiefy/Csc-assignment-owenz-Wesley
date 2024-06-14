#include <stdio.h>
//Name: Wesley Owenz
//DEPARTMENT: Software engineering
//D-CODE AND MAT. NO: D1009357  CMP2307622
int main() {
    // Define an array to hold 5 integers
    int arr[5];
    int i;

    // Prompt the user to enter 5 integers one by one
    printf("Enter 5 integers one by one:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the elements of the array
    printf("\nThe elements you entered are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
