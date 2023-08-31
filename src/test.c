#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define STEP 1
#define TIME 10e6
#define MAX_NUMBER 100
#define PERSTAR 10e3
int main(){
    srand(time(NULL));
    const long LENGTH = MAX_NUMBER / STEP;
    double* record_num;
    record_num = (double *)malloc(sizeof(double)*LENGTH);
    memset(record_num, 0, sizeof(double)*LENGTH);
    for(long i=0; i<TIME; i++){
	long number = rand()%MAX_NUMBER;
	long lebal = number/STEP;
	record_num[lebal]++;
    }
    for(long i=0; i<LENGTH; i++){
	printf("NO.%2ld: %3ld<=num<=%3ld: %6.0lf| ", i+1, i*STEP, STEP*(i+1), record_num[i]);
	for(long j=0; j<record_num[i]; j+=PERSTAR){
	    printf("*");
	    if(j != record_num[i]-1){
		printf(" ");
	    }
	}
	printf("\n");
    }
    free(record_num);
    return 0;
}
