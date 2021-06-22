/*
you are given 2d matrix of m row each row contain 
permutation of 1 to n . now print the length of longest
common subarray.

eg. m=3,n=5
   [ [1 2 4 3 5],
     [2 4 3 5 1],
     [4 3 5 2 1]]

    ans: 3 ->subarray is : [4 3 5]


*/

#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

int solve (int M, int N, int** A) {
   int vis[M][N+1];
   for(int i=0;i<M;i++)
   for(int j=0;j<N;j++)
   vis[i][A[i][j]]=j;

int cnt=1,cx=1;

for(int i=1;i<N;i++)
{
    int e1=A[0][i-1],e2=A[0][i];
    bool st=true;

    for(int j=1;j<M;j++)
    if(vis[j][e2]-vis[j][e1]!=1){
        st=false;
        break;
            }
            if(!st)
            cx=1;
            else
            cx++;
            if(cnt<cx)
            cnt=cx;
            
}

return cnt;
   
}

int main() {
    int T;
    scanf("%d", &T);
    for(int t_i = 0; t_i < T; t_i++)
    {
        int M;
        scanf("%d", &M);
        int N;
        scanf("%d", &N);
        int i_A, j_A;
        int **A = (int **)malloc((M)*sizeof(int *));
        for(i_A = 0; i_A < M; i_A++)
        {
        	A[i_A] = (int *)malloc((N)*sizeof(int));
        }
        for(i_A = 0; i_A < M; i_A++)
        {
        	for(j_A = 0; j_A < N; j_A++)
        	{
        		scanf("%d", &A[i_A][j_A]);
        	}
        }

        int out_ = solve(M, N, A);
        printf("%d", out_);
        printf("\n");
    }
}