//100000585B
#include <stdio.h>

int main()
{
	int n;	//����������� 
	int k;	//�����е�Ԫ�ظ��� 
	int num[80];
	int ans[80];
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			int a = 0;
			scanf("%d", &k);
			for(int i = 0; i < k; i++)
			{
				scanf("%d", &num[i]);
			}
			if(num[0] != num[1])
			{
				ans[a++] = 0;	//�����һ��Ԫ����ڶ���Ԫ�ز���ȣ���ô��һ��Ԫ��Ϊ��ֵ 
			}
			for(int i = 1; i < k - 1; i++)
			{
				if(((num[i] > num[i + 1] )&& (num[i] > num[i - 1]) ) || ((num[i] < num[i - 1])&&(num[i] < num[i + 1])))
				{
					ans[a++] = i;
				}
			 } 
			if(num[k - 1] != num[k - 2])
			 {
			 	ans[a++] = k - 1;	//ĩλͬ�� 
			 }

		}
	}
				 for(int i = 0; i < a; i++)
			 {
			 	i == a-1 ? printf("%d\n", ans[i]) : printf("%d ", ans[i]);
			 }
	return 0;
}
