int lengthOfLongestSubstring(char * s){
    char *addr[128] = {NULL};
    int max_len = 0, len = 0;
    for (char *p = s, *begin = s; *p != '\0'; p++) {
        len = addr[*p] >= begin ? p - (begin = addr[*p]) : len + 1;
        addr[*p] = p;
        max_len = len > max_len ? len : max_len;
    }    
    return max_len;
}