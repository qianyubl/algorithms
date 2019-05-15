#include<iostream>
using namespace std;

void BubbleSort(int* array, int length)// asending order
{   
	int * ptr1, *ptr2, temp;
	for(int i = 0;i<length;i++)
	{   
		for(int j=0; j<length-i;j++)
		{
			ptr1 = array+j;
			ptr2 = array + j+1;
			if(*ptr1 > *ptr2)
			{
				temp = *ptr1;
				*ptr1 = *ptr2;
				*ptr2 = temp;
			}
		}
	}
}

int main()
{
    int a[5] = {2, 1, 7, 4, 0};
	//BubbleSort(&a[0], 5);
	BubbleSort(a, 5);
	//BubbleSort(&a, 5);// error &a stands for pointer that pointed to int (*)[5]
	for(int i = 0; i<5;i++)
		cout<<a[i]<<endl;
	return 0;
}
