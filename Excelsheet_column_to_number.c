int titleToNumber(char* str) {
    int i,num=0;
    for(i=0;i<strlen(str);i++)
    {
        num *= 26;
        num += str[i]-'A'+1;
    }
    return num;
}