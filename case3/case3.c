#include <time.h>
#include <stdio.h>
#include <inttypes.h>

int findGCD3(int a, int b) {
    while (1) {
        if (a > (b * 4)) {
            a %= b;
            if (a == 0) return b;
            if (a == 1) return 1;
        } else if (a >= b) {
            a -= b;
            if (a == 0) return b;
            if (a == 1) return 1;
        }
        if (b > (a * 4)) {
            b %= a;
            if (b == 0) return a;
            if (b == 1) return 1;
        } else if (b >= a) {
            b -= a;
            if (b == 0) return a;
            if (b == 1) return 1;
        }
    }
}

void main(){
    struct timespec time_stamp1,time_stamp2;
    double DueTime=0;
    uint64_t DueTime_s=0;
    uint64_t DueTime_ns=0;
    int counter1=2;
    int counter2;
    clock_gettime(CLOCK_MONOTONIC, &time_stamp1);

    for (counter1=2;counter1<9999;counter1++){
        for (counter2=counter1+1;counter2<=9999;counter2++){
            findGCD3(counter1,counter2);
        }
    }
    clock_gettime(CLOCK_MONOTONIC, &time_stamp2);
    DueTime_s = ((uint64_t)(time_stamp2.tv_sec) - (uint64_t)(time_stamp1.tv_sec)) * (1000000000LL);
    DueTime_ns = (uint64_t)(time_stamp2.tv_nsec) - (uint64_t)(time_stamp1.tv_nsec);
    DueTime = DueTime_s + DueTime_ns;

    printf("Due time = %7f seconds\n\r",DueTime*0.000000001);
}