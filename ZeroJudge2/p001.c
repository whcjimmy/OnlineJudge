#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m,count=0,number=1;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        if(n==0&&m==0)
            break;
        else
        {
            if(number!=1)
                printf("\n");
            printf("Field #%d:\n",number++);
            int i,j,a,b;
            char matrix[n+2][m+2],string[m+1];
            for(i=0;i<(n+2);i++)
                for(j=0;j<(m+2);j++)
                    matrix[i][j]='.';
            for(i=1;i<=n;i++)
            {
                scanf("%s",string);
                for(j=1;j<=m;j++)
                    matrix[i][j]=string[j-1];
            }
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=m;j++)
                {
                    count=0;
                    if(matrix[i][j]=='*')
                        printf("*");
                    else
                    {
                        for(a=(i-1);a<=(i+1);a++)
                            for(b=(j-1);b<=(j+1);b++)
                                if(matrix[a][b]=='*')
                                    count++;
                        printf("%d",count);
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}
