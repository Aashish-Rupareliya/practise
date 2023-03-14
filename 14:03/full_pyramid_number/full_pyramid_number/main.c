//
//  main.c
//  full_pyramid_number
//
//  Created by apple on 14/03/23.
//

#include <stdio.h>

int main()
{
    int i,j,n,space;
    
    printf("\n ENTER NUM : ");
    scanf("%d",&n);
    
    space=n-1;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=space;j++)
        {
            printf(" ");
        }
        space--;
        
        for(j=1;j<=2*i-1;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
