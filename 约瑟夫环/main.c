#include<stdio.h>

int main()
{
	int i,j,m=0,k=0; 
	
	int num=0;//���� 
	int T=0; //�������� 
	int out=0;//���ֱ�� 
	int remain=0;//ʣ������
 	
	char a[1100]={0};
	
	printf("����������\n");   scanf("%d",&num);
	printf("���뱨������\n"); scanf("%d",&T);
	printf("������ֱ��\n"); scanf("%d",&out);
	
	if(num>=1100||num<=0||T>num||num<=0||out>T||out<=0) 
	{
		printf("�����������  Ҫ��\n1.������С��1100\n2.����С�ڵ���������\n\
3.���ֱ��С�ڵ�������\n4.���в������ڵ���1\n");
		getch(); 
		return 0;
	}
		
	for(i=0;i<num;i++)
	{	 
		if(a[i]==0) m++;//�����0����û�г��֣����� ���ۼӣ�
				
		if(m%(T+1)==out) //����ǳ��ֵı�ţ�����1������ 
		{
			printf("%d ",i+1);
			a[i]=1;
			m++;
		}
		
		if(i==num-1) i=-1;//����β����ͷѭ�� 
		
		//ͳ��0�ĸ�������ʣ���˵ĸ��� 
		for(j=0,remain=0;j<num;j++)
		{
			if(a[j]==0) 
			{
				k=j+1;//���һ��0��λ�� 
				remain++;
			}
		} 
		if(remain==1) break;
	}

    printf("%d\n",k);
    
    getch();
    
    return 0;
}


