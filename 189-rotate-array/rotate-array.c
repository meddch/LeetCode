void reverse(int* arr, int i, int j){
    int tmp;
    
    while (i < j){
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        i++; j--;
    }
}

void rotate(int* nums, int numsSize, int k)
{
    k = k % numsSize;
    if (!k || numsSize == 1) 
        return; 
    reverse(nums, 0, numsSize-1);
    reverse(nums, 0, k-1);
    reverse(nums, k, numsSize-1);
    return;
}