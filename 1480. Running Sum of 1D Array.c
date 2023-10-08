#include <stdio.h>

void runningSum(int* nums, int numsSize, int* result) {
    result[0] = nums[0];
    for (int i = 1; i < numsSize; i++) {
        result[i] = result[i-1] + nums[i];
    }
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int result[numsSize];

    runningSum(nums, numsSize, result);

    printf("Running sum: [");
    for (int i = 0; i < numsSize; i++) {
        printf("%d", result[i]);
        if (i != numsSize - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
