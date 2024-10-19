long int reverse(long int x){
    long int res = 0, n = x;

    while(n!=0) {
        res *= 10;
        res += n % 10 ;
        n /= 10;
    }

    if (-2147483648 < res && res < 2147483647)
    {
        return res;
    }
    return 0;
}