/* Author : Martins Filipe
 * Name : Sort list
 * Date : 2016.12.02
 */

#include <iostream>
#include <list>


void show_list(std::list<int>& intList)
{
	std::cout << "The list contains: \n";
	for (int elem : intList)
	{
		std::cout << elem << "\n";
	}
}

void bubble_sort_list(std::list<int>& intList)
{
	int i, j, flag = 1;    // set flag to 1 to start first pass
	int temp;             // holding variable
	int numLength = intList.size();
	for (i = 1; (i <= numLength) && flag; i++)
	{
		flag = 0;
		for (j = 0; j < (numLength - 1); j++)
		{
			if (intList[j + 1] > intList[j])      // ascending order simply changes to <
			{
				temp = intList[j];             // swap elements
				intList[j] = intList[j + 1];
				intList[j + 1] = temp;
				flag = 1;               // indicates that a swap occurred.
			}
		}
	}
	return;
}

void insertion_sort(std::list<int>& intList) {
	int j, temp;
	int length = intList.size();
	for (int i = 0; i < length; i++) {
		j = i;

		while (j > 0 && intList[j] < intList[j - 1]) {
			temp = intList[j];
			intList[j] = intList[j - 1];
			intList[j - 1] = temp;
			j--;
		}
	}
}

void swap(int i, int j, std::list<int>& intList)
{
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}


void quicksort(std::list<int>& intList) 
{
	
	int left = intList.begin();
	int right = intList.end();
	int min = (left + right) / 2;

	int i = left;
	int j = right;
	int pivot = intList[min];

	while (left<j || i<right)
	{
		while (intList[i]<pivot)
			i++;
		while (intList[j]>pivot)
			j--;

		if (i <= j) {
			swap(i, j, intList);
			i++;
			j--;
		}
		else {
			if (left<j)
				quicksort(intList, left, j);
			if (i<right)
				quicksort(intList, i, right);
			return;
		}
	}
}


void sort_list(std::list<int>& intList)
{
	//TODO sort the list from the smallest to the biggest number,
	//Mayby call the good functions (Bubble, insertion and quick)

}


int main()
{

	std::list<int> intList =
	{
		4,
		2,
		3,
		6,
		5,
		1
	};
	std::cout << "Before the sort: \n";
	show_list(intList);

	sort_list(intList);

	std::cout << "After the sort: \n";
	show_list(intList);

	//Windows specifics
	system("pause");
	return 0;
}