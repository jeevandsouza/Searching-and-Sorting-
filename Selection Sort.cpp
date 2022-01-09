//unstable Selection Sort


#include<bits/stdc++.h>
using namespace std;

void Swap(int *low,int *high)
{
	//swap without using a third variable,works for +ve and -ve numbers alike
	*low = *low + *high;
	*high = *low - *high;
	*low = *low - *high;
}


void SelectionSort(int array[],int arraySize)
{
	for(int i=0;i<arraySize-1;i++)
	{
		for(int j=i+1;j<arraySize;j++)
		{
			if(array[i] > array[j])
			  Swap(&array[i],&array[j]);
		}
	}
}

void PrintSelectionSort(int array[],int arraySize)
{
	for(int i=0;i<arraySize;i++)
	 cout<<array[i]<<" ";
}

int main()
{
	int array [] = {20,10,40,30,5};
	int arraySize = sizeof(array)/sizeof(array[0]); // sizeof(arr) gives the total bytes which sometimes maybe more than a bit so always use this and dividing by arr[0] gives the length of array.
	SelectionSort(array,arraySize);   
	PrintSelectionSort(array,arraySize);
}
