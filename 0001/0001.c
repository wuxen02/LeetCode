#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize);
int main()
{
	int nums[] = { 2, 7, 11, 15 };
	int target = 18;
	int* p = (int*)malloc(sizeof(int) * 2);

	p = twoSum(nums, 4, target, p);
	printf_s("%d %d\n", p[0], p[1]);
	return 0;
}
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	*returnSize = 2;
	int* thereturn;
	thereturn = (int*)malloc(sizeof(int) * 2);
	for (int i = 0; i < numsSize; i++)
	{
		for (int j = i + 1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				thereturn[0] = i;
				thereturn[1] = j;
				return thereturn;
			}
		}
	}
	return thereturn;
}
