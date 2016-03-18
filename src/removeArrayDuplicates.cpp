/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/
#include<stdio.h>

int removeArrayDuplicates(int *Arr, int len)
{
	int i, maxlength = 1, j, offset = 0, value = 0;
	if (Arr && len > 0)
	{
		for (i = 1; i < len; i++)
		{

			offset = 0;
			value = Arr[i];
			for (j = 0; j < maxlength; j++)
			{
				if (Arr[j] == value)
				{
					offset = 1;
					break;
				}
			}
			if (offset != 1)
			{
				Arr[j] = value;
				maxlength++;
			}

		}
		for (i = maxlength; i < len; i++)
		{
			Arr[i] = NULL;
		}
		return maxlength;

	}
	else
		return -1;
}