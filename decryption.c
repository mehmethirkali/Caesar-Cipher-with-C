#include <stdio.h>
#define key 4

void decrypt(int d) {
    char alphabet[61] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '(', '<', '=', '+', ')', '[', '*', '/', ']', '{', '>', '!', '-', '}', '?', '\\', '&', '|', '%', '_', ';', '"', '#', '.', '\'', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char txt;
    char num1;
    char num2;
    int k=0;
    int z=0;

    while (scanf("%c", &txt) != EOF) {
        int char_counter = 0;
        for (char_counter=0; char_counter < 61; char_counter++) {
            if (txt == alphabet[char_counter]) {
                if (char_counter - d < 0) {
                    txt = alphabet[char_counter - d + 61];
                    printf("%c", txt);
                } else {
                    txt = alphabet[char_counter - d];
                    printf("%c", txt);
                }
                break;
            }
        }

        if ((txt == '\n' || txt == '\t' || txt == ' ')) {
            printf("%c", txt);
        }
    }
}
int main() {
    decrypt(key);
    return 0;
}

