#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define MAX_NUMBER 10e3
#define MAX_DEGREE 100000
#define PI 3.14159265
int main(){
    const double int2double = 0.0001;
    srand(time(NULL));
    double numbers = 0;
    double degree_gram[8] = {0};
    while (numbers <= MAX_NUMBER){
	numbers++;
	int degree_temp = rand() % MAX_DEGREE;
	double degree = degree_temp * int2double;
	if (degree <= 0.5 * PI){
	    degree_gram[0]++;
	}
	else if ((degree >= 0.5 * PI) && (degree <= 1 * PI)){
	    degree_gram[1]++;
	}
	else if ((degree >= 1 * PI) && (degree <= 1.5 * PI)){
	    degree_gram[2]++;
	}
	else if ((degree >= 1.5 * PI) && (degree <= 2 * PI)){
	    degree_gram[3]++;
	}
	else if ((degree >= 2 * PI) && (degree <= 2.5 * PI)){
	    degree_gram[4]++;
	}
	else if ((degree >= 2.5 * PI) && (degree <= 3 * PI)){
	    degree_gram[5]++;
	}
	else if ((degree >= 3 * PI) && (degree <= 3.5 * PI)){
	    degree_gram[6]++;
	}
	else if ((degree >= 3.5 * PI) && (degree <= 4 * PI)){
	    degree_gram[7]++;
	}
	//if (sin(degree) > 0){
	//    printf("NO. %.0lf: %.2lf\n", numbers, sin(degree));
	//}
	//else{
	//    printf("NO. %.0lf: %.2lf\n", numbers, -sin(degree));
	//}
    }
    for(int i=0; i<8; i++){
	printf("%.1f*PI <= degree <= %.1f*PI: %3.0lf| ", i*0.5, (i+1)*0.5, degree_gram[i]);
	for(int j=0; j<degree_gram[i]; j+= 50){
	    printf("*");
	    if(j != (degree_gram[i]-1)) printf(" ");
	}
	printf("\n");
    }
    return 0;
}
