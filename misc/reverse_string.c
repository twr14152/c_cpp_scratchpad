#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse_string(const char *str) {
    size_t len = strlen(str);
    int i = 0;
    // remove '/0' from count
    int j = (int)(strlen(str)-1);
    char *reverseStr = malloc(len + 1);
    if (reverseStr == NULL) {
        perror("Malloc Fuckin Falied");
        return;
    }
    for (size_t i = 0; i < len; i++) {
        reverseStr[i] = str[j];
        j--;
    }
    // add '/0' back to end of reverseStr
    reverseStr[len] = '\0';
    printf("The string %s reversed is %s\n", str, reverseStr);
    free(reverseStr);

}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        return -1;
    }
    else {
        reverse_string(argv[1]);
        return 0;
    }
}
