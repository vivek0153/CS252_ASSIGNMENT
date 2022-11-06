#include<stdio.h>
#include<pthread.h>
int arr[50],n,i;
int min,max;
float avg;
void *th()
{
	int sum=0;
	float average;
	printf("Enter number of numbers:\n");
	scanf("%d",&n);
	printf("Enter numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
		{
			sum=sum+arr[i];
		}
	average=sum/n;
	avg=average;
}
void *th1()
{


	int temp=arr[0];
	for(int i=1;i<n;i++)
		{
			if(temp>arr[i])
			{
			temp=arr[i];
			}
		}
		min=temp;
}
void *th2()
{

	int temp=arr[0];
	for(int i=1;i<n;i++)
		{
			if(temp<arr[i])
			{
			temp=arr[i];
			}
		}
		max=temp;
	
	}
int main()
{
pthread_t t1;
pthread_t t2;
pthread_t t3;
	pthread_create(&t1,NULL,&th,NULL);
	pthread_join(t1,NULL);
	printf("This Thread is done\n");
	printf("The average value is:%f\n",avg);
	pthread_create(&t2,NULL,&th1,NULL);
        pthread_join(t2,NULL);
	printf("This Thread is done\n");
	printf("The Minimum  value is:%d\n",min);
	pthread_create(&t3,NULL,&th2,NULL);
        pthread_join(t3,NULL);
	printf("This Thread is done\n");
	printf("The Maximum  value is:%d\n",max);

}
