//
//  main.c
//  practise123
//
//  Created by apple on 22/02/23.
//

#include <stdio.h>

int main()
{
    int time;
    
    printf("ENTER TIME : ");
    scanf("%d",&time);
    
    if(time<=12)
    {
        printf("GOOD MORNING");
    }
    else if(time<=18)
    {
        printf("GOOD NOON");
    }
    else
    {
        printf("GOOD EVE");
    }
    
}
