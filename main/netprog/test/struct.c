# include <stdio.h>
typedef struct test{
    int int_ipa;
} ipa;

int main(){
    ipa ip;
    ip.int_ipa = 0x12345678;
    printf("%x\n", ip);
}
