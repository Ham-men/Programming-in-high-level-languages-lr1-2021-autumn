#include <stdio.h>
#include <time.h>
#define N 10


void search_mas ( int a, int b,int c);

int main( void )
{
	int schet[N],summ[N];	//original
	
	int i=0,a=0;
	srand(time(NULL));
     
	for (i=0;i<N;i++)
	{
		schet[i] = rand()%100;
		summ[i] = rand()%100000;
		printf("\nschet [ %d ] = %d p",schet[i],summ[i]);
	}
	
	printf("\nvvedite nomer scheta = ");

	while(a<1)
		scanf("%d",&a);
	
	search_mas(schet,a,summ);

	
	return 0;
}



void search_mas ( int a, int b,int c)
{
	int *schet1 = a;	//ukaz
	int *schet2 = b;
	int *summ1 = c;	
	int i;
	for (i=0;i<N;i++)
	{
		if (*(schet1+i) == schet2)
		{
			
			printf("\n schet[ %d ] = %d p",*(schet1+i),*(summ1+i));
		}
		
	}	
		
	return 0;
}




