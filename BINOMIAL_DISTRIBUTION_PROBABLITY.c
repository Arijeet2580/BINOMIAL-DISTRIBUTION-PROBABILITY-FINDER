#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int fact(int n);
long combination(int n,int r);
void probability(int x,double p);
int n,x;
double p;
int main()
{
    printf("\nEnter the number of events (n): ");
    scanf("%d", &n);
    printf("\nEnter the events (x): ");
    scanf("%d", &x);
    printf("Enter the probability of success(p): ");
    scanf("%lf",&p);
    probability(x,p);
    return 0;
}
int fact(int n)
{
    int i, fact = 1;
    for (i = 1; i < n + 1; i++){
        fact = fact * i;
    }
    return fact;
}
long combination(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
void probability(int x,double p){
    float result;
    result=combination(n,x)*pow(p,x)*pow((1-p),(n-x));
    printf("The probability of the P(%d) is %lf",x,result);   
}
