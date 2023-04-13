int searchInsert(int* nums, int numsSize, int target) {
    int low = 0, high = numsSize - 1;
    int mid;
    while(low != high) {
        mid = (double) (low + high) / 2;
        if(target > nums[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if(target > nums[high]) {
        return ++high;
    }
    else if(target < nums[low]) {
        return 0;
    }
    else {
        return mid;
    }
}