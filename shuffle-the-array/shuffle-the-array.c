/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int i=0, j=0, k=0;
    *returnSize=numsSize;
    int *array=(int*)malloc((*returnSize)*(sizeof(int)));
    while(i<numsSize){
        if(i%2==0)
        {
            array[i]=nums[j];
            j++;
        }
        else
        {
            array[i]=nums[n+k];
            k++;
        }
        i++;
    }
    return array;
}