int searchInsert(int* nums, int numsSize, int target) {
    int low = 0, high = numsSize - 1;
    int index = numsSize;
    
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(nums[mid] >= target) {
            index = mid;        
            high = mid - 1;
        }
        else {
           low = mid + 1;
        }
    }        
   return index;
}
