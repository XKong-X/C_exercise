#define _CRT_SECURE_NO_WARNINGS 1

//88. 合并两个有序数组(nums1Size和nums2Size是无用参数)
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    if (n == 0) {
        return;
    }
    int r1 = m - 1;
    int r2 = n - 1;
    for (int i = m + n - 1; i >= 0; --i) {
        if (r1 < 0) {
            while (r2 >= 0) {
                nums1[i--] = nums2[r2--];
            }
            return;
        }
        if (r2 < 0) {
            return;
        }
        if (nums1[r1] >= nums2[r2]) {
            nums1[i] = nums1[r1--];
        }
        else {
            nums1[i] = nums2[r2--];
        }
    }
}