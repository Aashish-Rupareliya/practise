//
//  main.c
//  full_pyramid_inverted_star
//
//  Created by apple on 14/03/23.
//

#include <stdio.h>

int main()
{
    int rows, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i=rows; i>=1; i--)
    {
        for(space=0; space<(rows-i); space++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
