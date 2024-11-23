//403110393 mostafa omidi
#include<stdio.h>

int main(){
    int a;
    int b;
    int c;
    scanf("%d" , &a) ;
    scanf("%d" , &b) ; 
    scanf("%d" , &c) ;
    if( (a <= b && a >= c) || (a <= c && a >= b) ){
        printf("%d" , a);
    }
    else if((b <= a && b >= c) || (b <= c && b >= a) ){
        a = a + b ;
        b = a - b ;
        a = a - b ;
        printf("%d" , a);
    }
    else if ((c <= a && c >= b) || (c <= b && c >= a) ){
        a = a + c ;
        c = a - c ;
        a = a - c ;
        printf("%d" , a);
    }
    return 0 ;
}