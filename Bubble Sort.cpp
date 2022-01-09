#include<bits/stdc++.h>
using namespace std;

void Swap(int *low,int *high)
{
	//swap without using a third variable,works for +ve and -ve numbers alike
	*low = *low + *high;
	*high = *low - *high;
	*low = *low - *high;
}

void BubbleSort(int array[],int arraySize)
{
	for(int i=0;i<arraySize-1;i++)
	{
			bool swapped;
		for(int j=0;j<arraySize-i-1;j++)
		{
			if(array[j] > array[j+1])
			{
				Swap(&array[j],&array[j+1]);
				swapped = true;
			}
				if(!swapped)
		                   break;
		}
	}
}


void PrintBubbleSort(int array[],int arraySize)
{
	for(int i=0;i<arraySize;i++)
	 cout<<array[i]<<" ";
}

int main()
{
	 int array[] = {64, 34, 25, 12, 22, 11, 90}; 
	 int arraySize = sizeof(array)/sizeof(array[0]);
	 BubbleSort(array,arraySize);// Arrays are always passed by referene as array is a pointer to the first element
	 PrintBubbleSort(array,arraySize);
}
