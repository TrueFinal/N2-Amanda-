/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <math.h>


 double func(double x ){
      x*x + 2;
 
 }
 void bisection(double a, double b)  {
     
     if (func(a)*func (b)>=0){
         printf ("Você não assumiu os valores corretos de a e b\n");
         return;
     }
     double c=a;
     while ((b-a)>=0.01){
         c=(a+b)/2;
         if(func(c)==0.0)
         break;
         else if(func(c)*func(a)<0)
           b=c;
         else
         a=c;
         
     }
     printf("A raiz é: %.4lf\n",c);
 }
int main(){
    double a,b;
    printf("Digite o valor de a : ");
    scanf("%lf",&a);
    printf("Digite o valor de b : ");
    scanf("%lf",&b);
  
  
    bisection(a,b);
    return 0;
}

