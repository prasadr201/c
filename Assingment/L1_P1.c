#include<stdio.h>
int main(){
    //1.
    printf("Hello \n");

    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);

    printf("sum = %d\n", a+b); //3

    printf("sub = %d\n", a-b); //5

    printf("mull = %d\n", a*b); //6

    printf("divid = %d\n", a/b); //7

    printf("remd = %d\n", a%b); //8

    printf("sq = %d\n", a*a); //9

    printf("cube = %d\n", a*a*a); //9


    //11 SI
    int p,r,t;
    scanf("%d%d%d", &p, &r, &t);
    int si = (p*r*t)/100;
    printf("si = %d\n", si);

    //12 average of 5 sub
    int a1,a2,a3,a4,a5;
    printf("a1=");
    scanf("%d", &a1);
    printf("a2=");
    scanf("%d", &a2);
    printf("a3=");
    scanf("%d", &a3);
    printf("a4=");
    scanf("%d", &a4);
    printf("a5=");
    scanf("%d", &a5);
    printf("%d\n", (a1+a2+a3+a4+a5)/5);


    //13 rectangle area and parameter
    int l,w;
    printf("length=");
    scanf("%d", &l);
    printf("width");
    scanf("%d", &w);
    printf("parameter = %d\n", (l+w)*2);
    printf("area = %d\n", l*w);



}