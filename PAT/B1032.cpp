//B1032
#include<stdio.h>

int school_score[100]={0};		//�����洢ѧУ���� 

int main()
{
	int n, sch_id, sch_score;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &sch_id, &sch_score);
		school_score[sch_id] += sch_score;
	}
	
	int k=1;	//��������ѧУid 
	int MAX=-1;		//��������ѧУ��߷� 
	
	for(int i = 1; i <= n; i++)
	{
		if(school_score[i] > MAX)
		{
			MAX = school_score[i];
			k = i;
		}
	}
	
	printf("%d %d\n", k, MAX);
	return 0;
}
