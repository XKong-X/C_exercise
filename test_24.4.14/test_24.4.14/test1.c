#define _CRT_SECURE_NO_WARNINGS 1


//27. �Ƴ�Ԫ��
int removeElement(int* nums, int numsSize, int val) {
    if (numsSize == 0) {
        return numsSize;
    }
    int delNumScope = numsSize - 1;
    while (delNumScope >= 0) {
        //��Ҫɾ����Ԫ��
        while (nums[delNumScope] != val) {
            --delNumScope;
            if (delNumScope < 0) {
                return numsSize;
            }
        }

        //����
        nums[delNumScope] = nums[numsSize - 1];
        --delNumScope;
        --numsSize;
    }
    return numsSize;
}