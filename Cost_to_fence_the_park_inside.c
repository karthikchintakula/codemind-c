#include<stdio.h>
int main()
{
    int l,b,w,c,a,g;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    if(l<=2*w || b<=2*w){
    printf("Impossible");
    }
    else{
    a=(l*b)-((l-2*w)*(b-2*w));
    g=a*c;
    printf("%d",g);
    }
    return 0;
}