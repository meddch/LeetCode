char * defangIPaddr(char * add){
    
    char *s = malloc(32);
    int i = 0;
    while(*add)
    {
        if (*add == '.')
        {
            s[i++] = '[';
            s[i++] = '.';
            s[i++] = ']';
        }
        else
            s[i++] = *add;
        add++;
    }
    s[i] = '\0';
    return(s);
}