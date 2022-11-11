#include <math.h>
#include <stdio.h>
int main()
{
	int arr[25];
	int i, size = 25, h;

	for (h = 0; h < size; h++)
	{
		printf("Enter arr[%d]:", h);
		scanf_s("%d", &arr[h]);
	}


	int m = 0, s = 0;
	for (i = 0; i < 25; ++i) {
		if (arr[i] == 0) {
			++s;
		}
		else {
			if (m < s) {
				m = s;
				s = 0;
			}
		}
	}
	if (m < s) {
		m = s;
	}



	printf("Max number of null`s : %d ", m);

	return 0;
}