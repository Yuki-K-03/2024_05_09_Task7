#include <iostream>
using namespace std;

int Bit(int x) {
    return 1 << x;
}

void Show(char flag) {
    for (int i = 0; i < 8; i++) {
        printf("%d番目%s\n", i + 1 , (flag & Bit(i)) ? "True" : "False");
    }
    printf("\n");
}

int main()
{
    unsigned char flag = 0;

    Show(flag);

    int select = 0;
    printf("何番目のフラグを立てますか\n");
    cin >> select;

    if (1 <= select && select <= 8) {
        flag |= Bit(select - 1);
    }
    
    Show(flag);


    return 0;
}