#include <stdio.h>

int main() {
    int num[10], size, newElement, i;

    printf("Enter the number of elements : ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &num[i]);
    }

    printf("\nEnter the element to insert at the beginning: ");
    scanf("%d", &newElement);

    for (i = size; i > 0; i--) {
        num[i] = num[i - 1];
    }

    num[0] = newElement;
    size++;

    printf("\nUpdated array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}
