//
//  main.c
//  nasted if age
//
//  Created by apple on 21/02/23.
//

#include <stdio.h>

int main()
{
    int age;
    
    printf("ENTER AGE : ");
    scanf("%d",&age);
    
    if(age>=18)
    {
        printf("ADULT");
    }
    else if(age>=14 && age<=18)
    {
        printf("TEENAGE");
    }
    else if(age<=5)
    {
        printf("CHILD");
    }
    else
    {
        printf("CHILDERN");
    }
}
