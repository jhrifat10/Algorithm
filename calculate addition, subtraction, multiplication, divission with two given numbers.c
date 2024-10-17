#include <stdio.h>
int add(int x,int y){
    int c=x+y;
    return c;
}
int sub(int x,int y){
    int e=x-y;
    return e;
}
float mul(float x,float y){
    float p=x*y;
    return p;
}
double dib(double x,double y){
    double o=x/y;
    return o;
}
int main() {
int a,b,d,g;
scanf("%d %d",&a,&b);
d=add(a,b);
printf("Addition=%d\n",d);
g=sub(a,b);
printf("Subtraction=%d\n",g);
float h=mul(a,b);
printf("Multiplication=%.1f\n",h);
double i=dib(a,b);
printf("Division=%.1lf\n",i);
return 0;

}
