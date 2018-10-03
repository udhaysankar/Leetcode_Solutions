#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target)
{
    int i,j;
    int *result=malloc(sizeof(int)*2);
    for(i=0;i<numsSize;i++)
        for(j=i+1;j<numsSize;j++)
    {
            if(((*(nums+i))+(*(nums+j))==target))
            {
                result[0]=i;
                result[1]=j;
                return result;
            }
    }
    return 0;
}
int main()
{
    int nums[]={2,7,11,13};
    int *p;
    p=twoSum(nums,4,18);
    int i;
    printf("%d\t%d",*p,*(p+1));
    return 0;
}