#include<stdio.h>
main(){


int rows = 5
int num = 11

for i in range(1, rows + 1):
    for j in range(1, i + 1):
        print(num, end=" ")
        num += 11
    print()
}
