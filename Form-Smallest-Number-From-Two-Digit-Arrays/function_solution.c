int minNumber(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int min1 = nums1[0], min2 = nums2[0];
    int minNum;
    int common, anyCommon = 0, aux = 69;

    for(int j = 1; j < nums2Size; j++) {
        if(nums2[j] < min2) {
            min2 = nums2[j];
        }
    }

    for(int i = 0; i < nums1Size; i++) {
        for(int j = 0; j < nums2Size; j++) {
            if(nums1[i] == nums2[j]) {
                common = nums1[i];
                anyCommon = 1;
            }
            if(common > aux) {
                common = aux;
            }
        }
        if(nums1[i] < min1) {
            min1 = nums1[i];
        }
        aux = common;
    }
    if(anyCommon) {
        return common;
    }
    else {
        if(min1 == min2) {
            return min1;
        }
        else {
            if(min1 < min2) {
                minNum = min1 * 10 + min2;
            }
            else {
                minNum = min2 * 10 + min1;
            }
        }
        return minNum;
    }
}