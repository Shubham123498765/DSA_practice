/* Test case
Input Matrix A= 1 1 1 1 			    
                2 2 2 2 
			    3 3 3 3 
			    4 4 4 4  

             B= 1 1 1 1 			    
                2 2 2 2 
			    3 3 3 3 
			    4 4 4 4

Result matrix is C= 2 2 2 2
                    4 4 4 4
                    6 6 6 6
                    8 8 8 8
*/
#include <iostream>
using namespace std;
void add(int A[][4], int B[][4], int C[][4])
{
	int i, j;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			C[i][j] = A[i][j] + B[i][j];
}

// Driver code
int main()
{
	int A[4][4] = { {1, 1, 1, 1},
					{2, 2, 2, 2},
					{3, 3, 3, 3},
					{4, 4, 4, 4}};

	int B[4][4] = { {1, 1, 1, 1},
					{2, 2, 2, 2},
					{3, 3, 3, 3},
					{4, 4, 4, 4}};

	int C[4][4];
	int i, j;
	add(A, B, C);

	cout << "Result matrix is " << endl;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		cout << C[i][j] << " ";
		cout << endl;
	}

	return 0;
}


