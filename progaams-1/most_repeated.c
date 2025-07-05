#include <stdio.h>
int majorityElement(int nums[], int numsSize)
{
    int i, j, count, big = nums[0], a = 0, ind;
    for (i = 0; i < numsSize; i++)
    {
        count = 0;
        for (j = 0; j < numsSize; j++)
        {
            if (nums[j] == nums[i])
            {
                count++;
            }
            if (count > a)
            {
                a = count;
                big = nums[i];
            }
        }

        printf("big:%d ", big);
        printf("%d ", a);
    }
    return big;
}
int main()
{
    int i, j, nums[] = {1, 3, 1, 1, 4, 1, 1, 5, 1, 1, 6, 2, 2};
    printf("majority:%d ", majorityElement(nums, 13));
}