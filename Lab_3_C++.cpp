
#include <stdio.h>
#include <math.h>  
#include "pch.h"
#define n 5
#include <iostream>


int matrix[5][5];
int start_array[] =
{ 9, 67, -65, 45, 1,
 12, 61, 48, -5, -1,
0, 39, 0, 41, 2,
36, 95, -8, -5, 0,
11, 22, 71, 3, 63 };


int j;
int i;
int h;
int l = 0;
int sum_column;
int result_column;


 int  Sort_matrix(int input_array[n][n])
{
	// Sort array.
	int tmp_value;
	for (j = 0; j < n; j++) {
		for (int k = n - 1; k >= 0; k--) {
			for (i = 0; i < k; i++) {
				if (input_array[n][i] > input_array[n][i + 1]) {
					tmp_value = input_array[n][i + 1];
					input_array[n][i + 1] = input_array[n][i];
					input_array[n][i] = tmp_value;

				}
			}
		}
	}
	return input_array[n][n];
 }

 int Sum_up_diagonal(int sum_result_columns, int number_in_line) {
	return (sum_result_columns + number_in_line);
	 
 }


int main()
{
	h = 0;
	for (j = 0; j < n; j++) {
		for (i = 0; i < n; i++) {
			matrix[j][i] = start_array[h];
			h++;
		}
	}
	
	
	matrix[n][n] = { Sort_matrix(matrix) };
	printf("\n New array\n");
	for (j = 0; j < n; j++) {
		for (i = 0; i < n; i++) {
			printf("%5d", matrix[j][i]);
		}
		printf("\n");
	}
 
	
	// Sum up diagonal.
	printf("\n  sum colums \n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (j < l) {
				sum_column = Sum_up_diagonal(sum_column, matrix[j][i]);
				
			}
		}
		result_column = result_column * sum_column;
		printf(" sum  column %d = %d \n", i, sum_column);
		sum_column = 0;
		l++;
		printf(" result = %d  \n",result_column);

	}
}
	






