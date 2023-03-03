//
//  main.c
//  if
//
//  Created by apple on 18/02/23.
//

#include <stdio.h>

int main()
{
    int marks;
    
    printf("ENTER MARKS:");
    scanf("%d",&marks);
    
    if(marks>=35)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
}
