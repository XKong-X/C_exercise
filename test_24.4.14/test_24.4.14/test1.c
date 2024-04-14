#define _CRT_SECURE_NO_WARNINGS 1


//27. 移除元素
int removeElement(int* nums, int numsSize, int val) {
    if (numsSize == 0) {
        return numsSize;
    }
    int delNumScope = numsSize - 1;
    while (delNumScope >= 0) {
        //找要删除的元素
        while (nums[delNumScope] != val) {
            --delNumScope;
            if (delNumScope < 0) {
                return numsSize;
            }
        }

        //处理
        nums[delNumScope] = nums[numsSize - 1];
        --delNumScope;
        --numsSize;
    }
    return numsSize;
}