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


void sort_list(std::list<int>& intList)
{
	//TODO sort the list from the smallest to the biggest number
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