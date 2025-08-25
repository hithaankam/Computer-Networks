#include <stdio.h>
#include <string.h>
#include <stdint.h>
uint32_t compute(uint32_t msg, uint32_t poly, int width){
    uint32_t mask = 1 << (width - 1);
    msg <<= width;
    for(int i = 31; i >= 0; i--){
        if(msg & (1U << i)){
            msg ^= poly << (i - width);
        }
    }
    return msg & ((1U << width) - 1);

}
int main(){
    uint32_t message = 0110110;
    printf("12:%X\n", compute(message, 0x80F, 12));
    printf("16:%X\n", compute(message, 0x80F, 16));
    printf("32:%X\n", compute(message, 0x80F, 32));
}
