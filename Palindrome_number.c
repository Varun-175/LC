bool isPalindrome(long long int x) {
    long long int n=x,reversed=0,rem;
    
    while(n>0){
        rem = n%10;
        reversed = (reversed*10) + rem;
        n /= 10;
    }

    if(reversed == x)
        return true;
    else
        return false;

}