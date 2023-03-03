//
//  main.c
//  GRADE
//
//  Created by apple on 21/02/23.
//

#include <stdio.h>

int main()
{
    int marks;
    
    printf("ENTER MARKS : ");
    scanf("%d",&marks);
    
    if(marks>=80 && marks <=100)
    {
        printf("GRADE A ");
    }
    else if(marks>=60 && marks<=80)
    {
        printf("GRADE B ");
    }
    else if(marks>=35 && marks<=80)
    {
        printf("GRADE C ");
    }
    else
    {
        printf("FAIL");
    }
}
