/******************************************************************************
                                    BinarySearch
*******************************************************************************/

#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key)
{
	int s=0;
	int e=n;
	while(s<=e)
	{
		int mid=(s+e)\2;
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]>key)
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
	}
	return -1;
}
int main()#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key)
{
	int s=0;
	int e=n;
	while(s<=e)
	{
		int mid=(s+e)\2;
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]>key)
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
	}
	return -1;
}
int main()
{	
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"\nEnter the element into array: ";
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int key;
	cout<<"\nEnter the key: ";
	cin>>key;
	cout<<"\nThe index of key is: "<<binarySearch(arra,n,key);
}
{	
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"\nEnter the sorted element into an array: ";
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int key;
	cout<<"\nEnter the key: ";
	cin>>key;
	cout<<"\nThe index of key is: "<<binarySearch(arra,n,key);
}
