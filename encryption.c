#include <stdio.h>
#define key 4

void encrypt(int d) {
    char alphabet[61] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '(', '<', '=', '+', ')', '[', '*', '/', ']', '{', '>', '!', '-', '}', '?', '\\', '&', '|', '%', '_', ';', '"', '#', '.', '\'', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int count;
    char txt;
    int counter;
    char first_num;
    char second_num;
    
    while (scanf("%c", &txt) != EOF) {
    	int char_counter =0;	
        for ( char_counter; char_counter < 61; char_counter++) {
            if (txt == alphabet[char_counter]) {
               
                if (char_counter + d > 61) {
                    txt = alphabet[char_counter + d - 61];
                    printf("%c", txt);
                } else {
                    txt = alphabet[char_counter + d];
                    printf("%c", txt);
                }
                break;
            }
        }

        if ( (txt == '\n' || txt == '\t' || txt == ' ')) {
            txt=txt;
            printf("%c", txt);
       
    }
}

}
int main() {

    encrypt(key);

    return 0;
}

