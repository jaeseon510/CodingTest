#include<stdio.h>
int main(){
    int a,b,c,d,e;
    int f=0;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    a=a*a;
    b=b*b;
    c=c*c;
    d=d*d;
    e=e*e;
    f=(a+b+c+d+e+f);
    printf("%d",f%10);
}