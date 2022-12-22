#include <iostream>
#include <cstdlib> // for srand() and rand()
#include <ctime> // for time()
using namespace std;

// d?nh nghia s? ph?n t? m?ng
#define ROW 100
#define COL 100

// khai báo prototype
void nhapMang(int mt[][COL], int &m, int &n);
void xuatMang(int mt[][COL], int m, int n);
int timMax(int mt[][COL], int m, int n);
void tamgiac(int a[][COL],int m ,  int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n+i;j++)
        {
            if (j < n - i -1 ) cout << "   ";
                else cout << " * ";
            }
            cout << "\n";
        }
    }


int main()
{
	int mt[ROW][COL]; // m?ng myArray có MAX ph?n t?
	int nRow, nCol; // s? ph?n t? dòng và c?t du?c s? d?ng

	// nh?p xu?t m?ng t? d?ng
	nhapMang(mt, nRow, nCol);
	xuatMang(mt, nRow, nCol);

	// tìm max
	int max = timMax(mt, nRow, nCol);
	cout << "Max = " << max << endl;

	tamgiac(mt,nRow,nCol);
	return 0;
	
}

// hàm nh?p m?ng
void nhapMang(int mt[][COL], int &m, int &n)
{
	// kh?i t?o s? ng?u nhiên
	srand(time(NULL));

	cout << "Nhap so dong : ";
	cin >> m;
	cout << "Nhap so cot : ";
	cin >> n;

	// kh?i t?o m?ng ng?u nhiên t? [0][0] d?n [m-1][n-1].
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mt[i][j] = rand() % 100;
		}
	}
}

// hàm xu?t m?ng
void xuatMang(int mt[][COL], int m, int n)
{
	// xu?t t?ng ph?n t? cho m?ng
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mt[i][j] << "\t";
		}
		cout << endl;
	}
}


// tìm giá tr? max c?a m?ng 2 chi?u
int timMax(int mt[][COL], int m, int n)
{
	int i, j, max;
	max = mt[0][0];
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (mt[i][j] > max)
				max = mt[i][j];
	return max;
}


/************Count saddle elements in matrix*****************
*Author: vncoding
*Date : 31/03/2019
************************************************************/
 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define N 100
#define M 100
 
void ImportData(float[][M], int, int, char*);
void PrintMatrix(float[][M], int, int);
int CntSaddleInMatrix(float[][M], int, int);
 
 
void main()
{
    int nRow, nCol;
    float average;
    float A[N][M];
 
    printf("\nNumber of row: ");
    scanf("%d", &nRow);
    printf("\nNumber of column: ");
    scanf("%d", &nCol);
 
    ImportData(A, nRow, nCol, "A");
    PrintMatrix(A, nRow, nCol);
 
    printf("\nCount saddle elements in matrix: %d",
        CntSaddleInMatrix(A, nRow, nCol));
 
    getch();
}
 
/*************************************************************
* Function      : CntSaddleInMatrix()
* Parameter     : A[][M]: input matrix (I)
nRow  : row number   (I)
nCol  : column number(I)
* Return        : float
* Description   : Count saddle elements in matrix
*************************************************************/
int CntSaddleInMatrix(float A[][M], int nRow, int nCol)
{
    int iRow, iCol;
    int cnt = 0;
    int col;
    float max;
    float min;
 
    for (iRow = 0; iRow < nRow; iRow++)
    {
        max = A[iRow][0];
        col = 0;
        for (iCol = 1; iCol < nCol; iCol++)
        {
            // Find maximum in a row
            if (max < A[iRow][iCol])
            {
                max = A[iRow][iCol];
                col = iCol;
            }
        }
 
        // Find minimum in a column col
        min = A[0][col];
        for (int i = 1; i < nRow; i++)
        {
            if (min > A[i][col])
            {
                min = A[i][col];
            }
        }
 
        // Compare maximum in row and minimm in column
        if (max == min)
        {
            cnt++;
        }
    }
 
    return cnt;
}
 
/*************************************************************
* Function      : ImportData()
* Parameter     : A[][M]: input matrix (I)
nRow  : row number   (I)
nCol  : column number(I)
nameMatrix: matrix name (I)
* Return        : void
* Description   : Import matrix data
*************************************************************/
void ImportData(float Matrix[][M], int nRow, int nCol, char* nameMatrix)
{
    int iRow, iCol;
    for (iRow = 0; iRow < nRow; iRow++)
        for (iCol = 0; iCol < nCol; iCol++)
        {
            printf("\n%s[%d][%d] = ", nameMatrix, iRow, iCol);
            scanf("%f", &Matrix[iRow][iCol]);
        }
}
 
/*************************************************************
* Function      : PrintMatrix()
* Parameter     : Matrix: input matrix (I)
nRow  : row number   (I)
nCol  : column number(I)
* Return        : void
* Description   : Display matrix data
*************************************************************/
void PrintMatrix(float Matrix[][M], int nRow, int nCol)
{
    int iRow, iCol;
    printf("\nA = ");
    for (iRow = 0; iRow < nRow; iRow++)
    {
        printf("\n");
        for (iCol = 0; iCol < nCol; iCol++)
        {
            printf("\t%.2f\t", Matrix[iRow][iCol]);
        }
    }
}

