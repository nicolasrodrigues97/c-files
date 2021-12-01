#include <stdio.h>

int main()
{
    int array[2][2] = {0, 1}, // Declares a 2D array and assigns values to each element 
                      {2, 3}; // A "," is used to separate individual lines of a bi-dimensional array
    read2DArray(array);
    int array2[3][3];
    fill2DArray(array2)
    return 0;
}

void read2DArray (int array[L][C]){
    for(int L=0; L<2; L++){ // Loop through the lines (L) of the 2D array
        for(int C=0; C<2; C++){ // Loop through the columns (C) of the 2D array
            printf("%d ", array[L][C]); // Print the current element of the array
        }
        if(C==2){ // Reached column limit (2)
            printf("\n");
        }
    } 
}

void fill2DArray (int array[i][j]){
    for(int C=0; C<i; C++){
        for(int L=0; L<j; L++){
            scanf("%d", array[i][j]);
        }
    }     
}
