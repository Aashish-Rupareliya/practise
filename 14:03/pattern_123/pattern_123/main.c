//
//  main.c
//  pattern_123
//
//  Created by apple on 14/03/23.
//

#include <stdio.h>

int main()
{
    int i,j,n;
    
    printf("\nENTER NUM : ");
    scanf("%d",&n);
    
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
