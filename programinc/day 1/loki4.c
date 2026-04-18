#include<stdio.h>
void test()
{
    static int a=0;
    a++;
    printf("%d\n",a);
}
int main(){
    test();
    test();
    test();
    return 0;

}
