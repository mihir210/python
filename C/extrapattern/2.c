#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void matrixMultiplication()
{
	FILE *fptr;
	int matrixA[1001][1001], matrixB[1001][1001], arow = 0, acol = 0, brow = 0, bcol = 0;
	// Accessing file a.txt and storing value in matrixA
	fptr = fopen("a.txt", "r");
	char astr[2002];
	while (fgets(astr, sizeof(astr), fptr))
	{
		int anum;
		char *atoken;
		acol = 0;
		atoken = strtok(astr, " ");
		while (atoken != NULL)
		{
			anum = atoi(atoken);
			atoken = strtok(NULL, " ");
			if ((anum == 0) && (atoken == NULL))
			{
				break;
			}
			else
			{
				matrixA[arow][acol] = anum;
				acol += 1;
			}
		}
		arow += 1;
	}
	fclose(fptr);

	// Accessing file b.txt and storing the value in matrixB
	fptr = fopen("b.txt", "r");
	char bstr[2002];
	while (fgets(bstr, sizeof(bstr), fptr))
	{
		int bnum;
		char *btoken;
		bcol = 0;
		btoken = strtok(bstr, " ");
		while (btoken != NULL)
		{
			bnum = atoi(btoken);
			btoken = strtok(NULL, " ");
			if ((bnum == 0) && (btoken == NULL))
			{
				break;
			}
			else
			{
				matrixB[brow][bcol] = bnum;
				bcol += 1;
			}
		}
		brow += 1;
	}
	fclose(fptr);

	// Matrix Multiplication
	if (acol != brow)
	{
		printf("Matix Multiplication is not possible due to dimension conflicts\n");
	}
	else
	{
		fptr = fopen("c.txt", "w");
		for (int i = 0; i < arow; i++)
		{
			for (int j = 0; j < bcol; j++)
			{
				int sum = 0;
				for (int k = 0; k < acol; k++)
				{
					sum = sum + matrixA[i][k] * matrixB[k][j];
				}
				fprintf(fptr, "%d ", sum);
			}
			fprintf(fptr, "\n");
		}
		fclose(fptr);
		printf("Please check the file c.txt for result\n");
	}
}
int main()
{
	matrixMultiplication();
	return 0;
}
