//
//  main.c
//  HOMEWORK
//
//  Created by apple on 21/02/23.
//

#include <stdio.h>

int main()
{
    int age;
    
    printf("ENTER AGE : ");
    scanf("%d",&age);
    
    if(age>=14)
    {
        if(age>=18)
        {
            printf("ADULT");
        }
        else
        {
            printf("TEENAGE");
        }
    }
    else
    {
        if(age<=5)
        {
            printf("CHILD");
        }
        else
        {
            printf("ENTER VALID AGE");
        }
    }
}
