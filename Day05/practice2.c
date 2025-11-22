#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int buildnumber(int a, int b, int c, int d){
    int num = ((a*1000)+(b*100)+(c*10)+(d))*5;
    return num;
}

int main() {
    
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    printf("The number is: %d", buildnumber(a,b,c,d));
    
    return 0;
}
