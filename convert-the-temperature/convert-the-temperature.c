/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize)
{
    double *res = malloc(sizeof(double)*2);
    *returnSize = 2;
    res[0] = celsius + 273.15;
    res[1] = (celsius * 1.8) + 32.0;
    return(res);
}