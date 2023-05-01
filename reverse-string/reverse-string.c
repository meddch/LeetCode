void reverseString(char* s, int sSize){
    int i =0;
    char tmp;
    while (i <= --sSize)
    {
        tmp = s[i];
        s[i] = s[sSize];
        s[sSize] = tmp;
        i++;
    }
}