int removeDuplicates(int* nums, int numsSize){
    int temp = nums[0];
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == temp && nums[i] != 999) {
            nums[i] = 999;
        } else {
            temp = nums[i];
        }
    }

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++){
            if (nums[i] > nums[j]){
                int t = nums[i];
                nums[i] = nums[j];
                nums[j] = t;
            }
        }
    }

    int k = 0;
    for (int i = 0; i < numsSize; i++, k++) {
        if (nums[i] == 999) break;
    }
    return k;
}