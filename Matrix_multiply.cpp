/* Test case
Input Matrix A= 1 1 1 1 			    
                2 2 2 2 
			    3 3 3 3 
			    4 4 4 4  

             B= 1 1 1 1 			    
                2 2 2 2 
			    3 3 3 3 
			    4 4 4 4

Result matrix is C= 10 10 10 10 20
                    20 20 20 20 30
                    30 30 30 30 40
                    40 40 40 40  4
                     4  0  0  0 39

*/
#include<iostream>
using namespace std;
int main()
{
	int i, j,N=4;
	int res[N][N]; // To store result
	int mat1[N][N] = { { 1, 1, 1, 1 },
					{ 2, 2, 2, 2 },
					{ 3, 3, 3, 3 },
					{ 4, 4, 4, 4 } };

	int mat2[N][N] = { { 1, 1, 1, 1 },
					{ 2, 2, 2, 2 },
					{ 3, 3, 3, 3 },
					{ 4, 4, 4, 4 } };

	int  k;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			res[i][j] = 0;
			for (k = 0; k < N; k++)
				res[i][j] += mat1[i][k] * mat2[k][j];
		}
	}
    cout << "Result matrix is \n";
    for(i=0;i<=N;i++){
        for(j=0;j<=N;j++)
        cout<<res[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}