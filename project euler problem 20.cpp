/*
project euler problem 20:-

n! means n × (n - 1) × ... × 3 × 2 × 1

For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!

*/

#include<iostream>
using namespace std;

int main()

{

	int n,j,temp;
	int arr[200];
	arr[0]=1;
	long long sum=0;

	j=0;//for index of array arr

	cout<<"Enter the number.:";
	cin>>n;

	for(;n>=2;n--)
	{

		temp=0;
		for(int i=0;i<=j;i++)
	{

	temp=(arr[i]*n)+temp;
	arr[i]=temp%10;
	temp=temp/10;

	}

	while(temp>0)
	{

		arr[++j]=temp%10;
		temp=temp/10;
	}

}

	for(int i=j;i>=0;i--){
	
		sum+=arr[i];
		printf("%d",arr[i]);
	}
		cout<<"\n"<<sum;

return 0;

}
