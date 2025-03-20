#include <stdio.h>

int main() {
    int num[10], size, newElement, i;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter the elements:\n");
    for (i = 0; i < size; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("\nEnter the element to insert at the end: ");
    scanf("%d", &newElement);

    num[size] = newElement;
    size++;

    printf("\nUpdated array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
