#include <stdio.h>
#include <string.h>
void char_stuff(char *ip){
    int i;
    for(i = 0; ip[i]; i++){
        if(ip[i] == 'D'){
            printf("DD");
        }
        else{
            putchar(ip[i]);
        }
    }
}
int main(){
    char data[] = "ABCDEFGD";
    printf("Input%s:", data);
    char_stuff(data);

return 0;
}
