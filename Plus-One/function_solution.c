int* plusOne(int* digits, int digitsSize, int* returnSize) {
    *returnSize = digitsSize;
    int count = 0;
    int i;
    int *d_digits;
    for(i = digitsSize - 1; i>= 0 && digits[i] == 9; i--) {  
        count++;
    }

    if(count == digitsSize) {
        ++*returnSize;
        d_digits = (int*) malloc(sizeof(int) * (*returnSize));
        d_digits[0] = 1;
    }
    else {
        digits[digitsSize - count - 1]++;
        d_digits = (int*) malloc(sizeof(int) * (*returnSize));
        memcpy(d_digits, digits, *returnSize * sizeof(int));
    }

    i = *returnSize - count;
    memset(d_digits + i, 0, sizeof(int) * count);

    return d_digits;
}