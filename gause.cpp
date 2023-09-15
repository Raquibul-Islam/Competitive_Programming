#include<bits/stdc++.h>
using namespace std;

#define N 3	 

int forwardElimanation(double mat[N][N+1]);
void backSubstitution(double mat[N][N+1]);

void swap_row(double mat[N][N+1], int i, int j)
{
	

	for (int k=0; k<=N; k++)
	{
		double temp = mat[i][k];
		mat[i][k] = mat[j][k];
		mat[j][k] = temp;
	}
}


void print(double mat[N][N+1])
{
	for (int i=0; i<N; i++)
    {
        for (int j=0; j<=N; j++)
        {
            printf("%lf ", mat[i][j]);
           
        }
         printf("\n");
    }
		
			

	
}


int forwardElimanation(double mat[N][N+1])
{
	for (int k=0; k<N; k++)
	{
		
		int i_max = k;
		int v_max = mat[i_max][k];

	
		for (int i = k+1; i < N; i++)
			if (abs(mat[i][k]) > v_max)
				v_max = mat[i][k], i_max = i;

		
		if (!mat[k][i_max])
			return k; 


		if (i_max != k)
			swap_row(mat, k, i_max);


		for (int i=k+1; i<N; i++)
		{
			
			double f = mat[i][k]/mat[k][k];

			
			for (int j=k+1; j<=N; j++)
				mat[i][j] -= mat[k][j]*f;

		
			mat[i][k] = 0;
		}

		
	}
	
	return -1;
}

void backSubstitution(double mat[N][N+1])
{
	double x[N]; 

	
	for (int i = N-1; i >= 0; i--)
	{
		
		x[i] = mat[i][N];

		
		for (int j=i+1; j<N; j++)
		{
			
			x[i] -= mat[i][j]*x[j];
		}

	
		x[i] = x[i]/mat[i][i];
	}

	printf("\nSolution for the system:\n");
	for (int i=0; i<N; i++)
		printf("%lf\n", x[i]);
}


int main()
{

	double mat[N][N+1];
    for(int k=0; k<N; k++)
    {
        for(int l=0; l<=N; l++)
        {
            cin>>mat[k][l];
        }
    }
	
	int singular_flag = forwardElimanation(mat);


	if (singular_flag != -1)
	{
		printf("Singular Matrix.\n");

	
		if (mat[singular_flag][N])
			printf("Inconsistent System.");
		else
			printf("May have infinitely many "
				"solutions.");
		
	}

	backSubstitution(mat);

	return 0;
}



                    //   3.0 -0.1-0.2 7.85
					// 	 0.1 7.0 -0.3 -19.3
					// 	 0.3 -0.2 10.0 71.4
					