#include<stdio.h>
int Fact(int i)
{
	if(i==0)
		return 1;
	else
		return i*Fact(i-1);
}

int main(void)
{
        int i=4;
        scanf("%d",&i);
        printf("%d= %d\n",i,Fact(i))

        return ;
        
}



