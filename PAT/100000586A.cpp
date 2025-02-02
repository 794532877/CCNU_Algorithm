//codeup100000586A
#include <stdio.h>
#include <algorithm>
using namespace std;

const int maxn = 100010;

void merge(int A[], int L1, int R1, int L2, int R2)
{
	int i = L1, j = L2;
	int temp[maxn], index = 0;
	while(i <= R1 && j <=R2)
	{
		if(A[i] <= A[j])
			temp[index++] = A[i++];
		else
			temp[index++] = A[j++];
	 } 
	 while(i <= R1)
	 	temp[index++] = A[i++];
	while(j <= R2)
		temp[index++] = A[j++];
	for(int i = 0; i < index; ++i)
		A[L1 + i] = temp[i];
}
void mergesort(int A[], int left, int right)
{
	if(left < right)
	{
		int mid = (left + right) / 2;
		mergesort(A, left, mid);
		mergesort(A, mid + 1, right);
		merge(A, left, mid, mid + 1, right);
	}
}
int main()
{
	int n, m;
	while(scanf("%d", &n) != EOF)
	{
		while(n--)
		{
			scanf("%d", &m);
			int a[m];
			for(int i = 0; i < m; ++i)
			{
				scanf("%d", &a[i]);
			}
			mergesort(a, 0, m - 1);
			
			for(int i = 0; i < m; ++i)
			{
				printf("%d\n", a[i]);
			}
		}
	}
}
