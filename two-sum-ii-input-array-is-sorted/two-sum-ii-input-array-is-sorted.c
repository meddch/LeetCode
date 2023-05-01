int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    *returnSize = 2;
    int *index_array = (int *)(malloc(2 * sizeof(int)));
    index_array[0] = -1;
    index_array[1] = -1;
    int i = 0;
    int j = numbersSize - 1;
    while (i <= j) {
        if (numbers[i] + numbers[j] == target) {
            index_array[0] = i + 1;
            index_array[1] = j + 1;
            return index_array;
        }
        else if (numbers[i] + numbers[j] > target) {
            j -= 1;
        }
        else {
            i += 1;
        }
    }
    return index_array;
}