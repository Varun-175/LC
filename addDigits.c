#include<stdio.h>

int addDigits(int num){

    int temp1=0,temp2=0,count=0;
    
    while(num>0){
        temp1 += num%10;
        num /= 10;
    }

    temp2=temp1;
    while(temp2!=0){
        temp2 /= 10;
        ++count;
    }

    if(count>1){
        return addDigits(temp1);
    }
    else{
        return temp1;
    }
}

int main(){

    int num;
    printf("\nEnter the number: ");
    scanf("%d",&num);
    int res = addDigits(num);
    printf("\nResult: %d\n\n",res);

    return 0;    

}