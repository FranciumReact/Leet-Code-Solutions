/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 // This is using pointer arithmetic
 
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *p;
    int *q;
    *returnSize = 2;
    int *arr = (int*)malloc(2*sizeof(int));

    for (p = nums; p < nums + numsSize; p++){
        for (q = p+1; q < nums + numsSize; q++){
            if (*q + *p == target){
                arr[0] =  p - nums; // This is just doing lets say p is nums[6], then it does nums[6] - nums[0]. Pointer subtraction = 6
                arr[1] =  q - nums;
                return arr;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}