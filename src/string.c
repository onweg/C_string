#include "string.h"
#include <stdio.h>

void *s21_memchr(const void *str, int c, size_t n) {
    const unsigned char *ptr = (const unsigned char *)str;
    while (*ptr && n--) {
        if (*ptr == c) return (void *)ptr;
        ptr++;
    }
    return NULL;
}

int s21_memcmp(const void *str1, const void *str2, size_t n) {
    const unsigned char *ptr1 = str1, *ptr2 = str2;
    while (n--) {
        if (*ptr1 != *ptr2) return *ptr1 - *ptr2;
        // if (!*ptr1) return 0; убрал, якобы работы с mem функциями не подразумевается проверки
        ptr1++;
        ptr2++;
    }
    return 0;
}

void *s21_memcpy(void *dest, const void *src, size_t n){
    unsigned char* str = dest;
    while (n--) {
        *str++ = *src++;
    }    
    return dest;
}

void *s21_memset(void *str, int c, size_t n) {
    unsigned char *ptr = (unsigned char *)str;
    while (*ptr && n--) {
        *ptr++ = c;
    }
    return str;
}

char *s21_strncat(char *dest, const char *src, size_t n) {
    unsigned char *str = (unsigned char *)dest;
    while(*str++);
    str--;
    while(*src && n--){
        *str++ = *src++;
    }
    *str = 0;
    return dest;
}

char *s21_strchr(const char *str, int c) {
    
}

int main() {
    char str1[100] = "123456";
    char *str2 = "123456789";
    char *res = s21_strncat(str1, str2, 9);
    printf("%s\n", res);
    return 0;
}