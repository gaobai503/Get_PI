#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define MAX_NUMBER 10e6
#define MAX_DEGREE 100
int main(){
    const double int2double = 0.01;
    srand(time(NULL));
    double l = 5;
    double a = 4;
    double true_num, false_num;
    true_num = false_num = 0;
    while (true_num + false_num <= MAX_NUMBER){
	double degree = rand() % (MAX_DEGREE * (long)(1/int2double)) * int2double;
	double base = rand() % ((long)l * (long)(1/int2double)) * int2double;
	if (sin(degree) < 0){
	    if ((-a*sin(degree) + base) >= l){
		true_num++;
	    }
	    else{
		false_num++;
	    }
	}
	else{
	    if ((a*sin(degree) + base) >= l){
		true_num++;
	    }
	    else{
		false_num++;
	    }
	}
	if(true_num+false_num == 10e6){
	    printf("...\n");
	}
    }
    double percent = true_num / (true_num + false_num);
    printf("PI = %lf\n", (2 * a) / (l * percent));
    getchar();
    return 0;
}
