//
//  main.c
//  if4
//
//  Created by apple on 18/02/23.
//

#include <stdio.h>

int main()
{
    int year ;
    
    printf("ENTER THE YEAR : ");
    scanf("%d",&year);
    
    if(year%4==0)
    {
        printf("LEAP YEAR");
    }
    else
    {
        printf("NOT LEAP YEAR");
    }

}
