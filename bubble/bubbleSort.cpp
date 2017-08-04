//
// Created by 高尚 on 2017/8/4.
//
/**
 * 冒泡排序
 */

#include <stdio.h>
#include <math.h>

int main() {
    int a[] = {3, 4, 5, 21, 6, 4};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6-i; j++) {
            if (a[j] > a[j + 1]) {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
    for (int k = 0; k <6 ; k++) {
        printf("%d",a[k]);
        printf(" ");
    }

}