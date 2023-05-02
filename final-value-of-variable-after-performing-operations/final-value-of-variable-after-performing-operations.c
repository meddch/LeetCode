int finalValueAfterOperations(char ** s, int op){

    int x = 0;
    int i = 0;
    while(i < op)
    {
        if (s[i][1] == '-')
            x--;
        else
            x++;
        i++;
    }
    return(x);
}