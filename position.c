#include <stdio.h>

int main() {
    int num[10], size, newElement, position, i;

    printf("Enter the number of elements : ");
    scanf("%d", &size);

    printf("Enter the elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &num[i]);
    }

    printf("\nEnter the element to insert: ");
    scanf("%d", &newElement);

    printf("Enter the position : ");
    scanf("%d", &position);

    if (position < 1 || position > size + 1) {
        printf("\nInvalid position! Please enter a valid position.\n");
    } else {
        for (i = size; i >= position; i--) {
            num[i] = num[i - 1];
        }

        num[position - 1] = newElement;
        size++;

        printf("\nUpdated array:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", num[i]);
        }
    }

    return 0;
}
