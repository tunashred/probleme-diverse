int* plusOne(int* digits, int digitsSize, int* returnSize) {
    *returnSize = digitsSize;
    int count = 0;
    int i;
    for(i = digitsSize - 1; i >= 0; i--) {  
        if(digits[i] == 9) {
            count++;
        }
        else {
            break;
        }
    }

    if(count == digitsSize) {
        ++*returnSize;
    }
    else {
        digits[digitsSize - count - 1]++;
    }
    int *d_digits = (int*) malloc(sizeof(int) * (*returnSize));
    if(count != digitsSize) {
        memcpy(d_digits, digits, *returnSize * sizeof(int));
    }
    else {
        d_digits[0] = 1;
    }
    i = *returnSize - count;
    memset(d_digits + i, 0, sizeof(int) * count);

    return d_digits;
}