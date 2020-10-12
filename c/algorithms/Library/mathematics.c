#include<stdio.h>
#include "mathematics.h"

int int_sum_two(int x, int y){
	return x+y;
}
int int_bigger(int x, int y){
	if(x >= y)return x;
	return y;
}
int int_smaller(int x, int y){
	if(x <= y)return x;
	return y;
}
int int_verify_equality(int x, int y){
	if(x==y) return 1;
	return -1;
}
int fibonaci(int x){

	int i, before = 1, after = 1,result = 0;

	if(x < 1)return 0;

	if(x == 1 || x == 2)
		return 1;

	for(i = 2; i < x; i++){
				
		result = before + after;
		before = after;
		after = result;
	}

	return result;
}

int n_fibonaci(int n){

	int i, j, before = 1, after = 1, result = 0;	

	if(n < 0) printf("not exist fibonaci\n");
	else if(n == 0) printf("fibonaci 0 = 0\n");
	else if(n > -1 && n < 2){
		printf("fibonaci 0 = 0\n");
		printf("fibonaci 1 = 1\n");
	}
	else{

		printf("fibonaci 0 = 0\n");
		printf("fibonaci 1 = 1\n");
		printf("fibonaci 2 = 1\n");

		for(i = 3; i <= n; i++){
			result = before + after;
			before = after;
			after = result;
			printf("fibonaci %d = %d\n",i,result);
		}
	}
}
long double factorial(int x){

	int i;
	long double fat = 1;
   	
	if( x < 0)return 0;

	for(i = 2; i <= x; i++)
			fat*= i;
	
	return fat; 
}
long double  n_factorial(int n){

	int i;
	long double fat = 1;

	if(n < 0) printf("factorial %d  not exist\n",n);

	else if(n == 0 )printf("factorial 0 = 1\n");

	else{

		printf("factorial 0 = 1\n");
		printf("factorial 1 = 1\n");
		for(i = 2; i <= n; i++){
			printf("factorial %d = %Lf\n\n",i, fat*=i);
		}
	}
}

float float_sum_two(float x, float y){
	return x+y;
}
float float_bigger(float x, float y){
	if(x >= y)return x;
	return y;
}
float float_smaller(float x, float y){
	if(x <= y)return x;
	return y;
}
float float_verify_equality(float x, float y){
	if(x==y) return 1;
	return -1;
}


double double_sum_two(double x, double y){
	return x+y;
}
double double_bigger(double x, double y){
	if(x >= y)return x;
	return y;
}
double double_smaller(double x, double y){
	if(x <= y)return x;
	return y;
}
double double_verify_equality(double x, double y){
	if(x==y) return 1;
	return -1;
}
