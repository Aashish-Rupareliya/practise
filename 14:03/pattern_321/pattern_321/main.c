//
//  main.c
//  pattern_321
//
//  Created by apple on 14/03/23.
//

#include <stdio.h>

int main()
{
    int i,j,n;
    
    printf("\n ENTER NUM :");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
}
