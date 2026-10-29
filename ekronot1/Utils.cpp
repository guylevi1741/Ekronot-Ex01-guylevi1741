#include "Utils.h"
#include <iostream>
/*
this function gets an array and its size nad reverses it
input:the array and its size
output:none
*/
void reverse(int* nums, unsigned int size)
{
	int right = size-1;
	int left = 0;
	while (left < right) 
	{
		int temp = nums[left];
		nums[left] = nums[right];

		nums[right] = temp;
		left++;
		right--;

	}

}
/*
this function will request an array of 10 elements from the user and return it reversed
input:none
output:the reversed array
*/
int* reverse10()
{
	int* arr = new int[10];

	for(int i =0;i<10;i++)
	{
		std::cout << "enter" << i << std::endl;
		std::cin >> arr[i];
	}

	reverse(arr, 10);
	return arr;
}