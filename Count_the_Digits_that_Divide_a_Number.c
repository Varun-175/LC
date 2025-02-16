int countDigits(int num) {
    int count = 0,n=num,temp;
    
    while(n!=0){
        temp = n%10;
        if(num % temp==0)
            count++;
        n /= 10;
    }
    return count;
}