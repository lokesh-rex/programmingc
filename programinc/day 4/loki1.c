#include<stdio.h>
void change(int a){
    a=20;
}
int main(){
    int x=10;
    change(x);
    printf("%d",x);
    return 0;

}