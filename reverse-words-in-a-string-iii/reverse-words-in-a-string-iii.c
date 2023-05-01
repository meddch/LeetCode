void rev(char* s,int left,int right) {
    while(left<right) {
        char temp = s[left];
        s[left++] = s[right];
        s[right--] =temp;
    }
}
char * reverseWords(char * s){
    int wleft=0,full=strlen(s),wright=0;
    while(wright<full) {
        while(wright<full && s[wright] != ' ') wright++;

        rev(s,wleft,wright-1);
        wleft = ++wright;
    }
    return s;
}