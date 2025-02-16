int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int i,count=0;

    for(i=0;i<hoursSize;i++){
        if(hours[i] >= target)
            count++;
    }
    return count;
}