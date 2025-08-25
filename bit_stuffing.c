#include <stdio.h>
#include <string.h>
void bit_stuff(char *data){
    int cnt, i;
    for(i = 0; data[i];i++){
        putchar(data[i]);
        if(data[i] == '1' && ++cnt == 5){
            putchar('0');
            cnt = 0;
        }
        if(data[i] == '0'){
        cnt = 0;}
    }
}
int main(){
    char data[] = "01111111011010";
    printf("Input:%s\n",data); 
    bit_stuff(data);
return 0;
}
