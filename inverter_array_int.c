/*invert numbers 
ex: 123 -> 321 */

#include <stdio.h>

void recieveArray (int size, int a[]);

//main
int main(void) 
{
        int size = 0; 

        printf("how many numbers would you like to insert? ");
        scanf("%d", &size); //size of array

        int a[size];

        recieveArray(size, a);
}

//function
void recieveArray (int size, int a[]) 
{
        int i = 0;
        printf("insert array (with space between the numbers): ");
        for (i = 0; i < size; i++) {
                scanf("%d", &a[i]); //recieve array
        }

        printf("\ninverted array: ");
        for (i = (size - 1); i >= 0; i--) { 
                printf("%d ", a[i]); //print inverted array
        }
}
