#include <stdio.h>
#include<conio.h>
void main()
{
    int A[10][10];
    int i, j=0, M,N;
    int size;
    int sum,sum1,sum2;
    int flag=0;

    clrscr();

    printf("Enter the order of the matrix:\n");
    scanf("%d %d", &M, &N);
    if(M==N){
        printf("Enter the elements of matrix \n");
        for(i=0; i<M; i++)
        {
            for(j=0; j<N; j++)
            {
                scanf("%d",&A[i][j]);
            }
        }

        printf("\n\nMATRIX  is\n");
        for(i=0; i<M; i++)
        {
            for(j=0; j<N; j++)
            {
                printf("%3d\t",A[i][j]);
            }
            printf("\n");
        }


        sum=0;
        for(i=0;i<M;i++)
        for(j=0;j<N;j++)
        {
            if(i==j)
            sum=sum+A[i][j];
        }


        for(i=0;i<M;i++)
        {
            sum1=0;
            {
                for(j=0;j<N;j++)
                sum1=sum1+A[i][j];
            }
            if(sum==sum1)
            flag=1;
            else
            {
                flag=0;
                break;
            }
        }

        for(i=0;i<M;i++)
        {
            sum2=0;
            for(j=0;j<N;j++)
            {
                sum2=sum2+A[j][i];
            }
            if(sum==sum2)
            flag=1;
            else
            {
                flag=0;
                break;
            }
        }

        if(flag==1)
        printf("\n\n The given Matrix is a Magic square matrix\n\n");
        else
        printf("The given Matrix is NOT a  Magic square matrix\n\n");
    } else
    {
        printf("\n\nPlease enter the square matrix order(m=n)\n\n");
    }
}
