#include <iostream>
using namespace std;
int main()
{
    cout << "For sorted array search enter 1 for spiral order print press 2 ";
    int num;
    cin >> num;

    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    if (num == 1)
    {
        cout << "Enter element to search ";
        int number;
        cin >> number;
        int r = 0, c = m - 1;
        bool flag = false;
        while (r < n and c >= 0)
        {
            if (a[r][c] == number)
                flag = true;
            if (a[r][c] > number)
                c--;
            else
                r++;
        }
        if (flag == true)
            cout << "Element found";
        else
            cout << "Element not found";
        return 0;
    }
    if (num == 2)
    {
        //for spiral order print
        int row_start = 0, row_end = n - 1, column_start = 0, column_end = m - 1;
        while (row_start <= row_end && column_start <= column_end)
        {
            //for row_start
            for (int col = column_start; col <= column_end; col++)

                cout << a[row_start][col] << " ";

            row_start++;

            //for column_end
            for (int row = row_start; row <= row_end; row++)

                cout << a[row][column_end] << " ";

            column_end--;

            //for row_end
            for (int col = column_end; col >= column_start; col--)

                cout << a[row_end][col] << " ";

            row_end--;

            //for column_start
            for (int row = row_end; row >= row_start; row--)

                cout << a[row][column_start] << " ";

            column_start++;
        }

        return 0;
    }
}