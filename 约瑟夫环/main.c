#include<stdio.h>

int main()
{
	int i,j,m=0,k=0; 
	
	int num=0;//总人 
	int T=0; //报数周期 
	int out=0;//出局编号 
	int remain=0;//剩余人数
 	
	char a[1100]={0};
	
	printf("输入总人数\n");   scanf("%d",&num);
	printf("输入报数周期\n"); scanf("%d",&T);
	printf("输入出局编号\n"); scanf("%d",&out);
	
	if(num>=1100||num<=0||T>num||num<=0||out>T||out<=0) 
	{
		printf("输入参数有误  要求：\n1.总人数小于1100\n2.周期小于等于总人数\n\
3.出局编号小于等于周期\n4.所有参数大于等于1\n");
		getch(); 
		return 0;
	}
		
	for(i=0;i<num;i++)
	{	 
		if(a[i]==0) m++;//如果是0，即没有出局，则报数 （累加）
				
		if(m%(T+1)==out) //如果是出局的编号，则置1，出局 
		{
			printf("%d ",i+1);
			a[i]=1;
			m++;
		}
		
		if(i==num-1) i=-1;//数到尾，从头循环 
		
		//统计0的个数，即剩下人的个数 
		for(j=0,remain=0;j<num;j++)
		{
			if(a[j]==0) 
			{
				k=j+1;//最后一个0的位置 
				remain++;
			}
		} 
		if(remain==1) break;
	}

    printf("%d\n",k);
    
    getch();
    
    return 0;
}


