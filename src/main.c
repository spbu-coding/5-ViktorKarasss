#include <stdio.h>

void other(){
    printf("Congratulations!\n");
    fflush(stdout);
    printf("You have entered in the secret function!\n");
    fflush(stdout);
}

void input(){
    char buffer[20];

    printf("Enter some text:\n");
    fflush(stdout);
    scanf("%s", buffer);
    printf("You entered: %s\n", buffer);
    fflush(stdout);
}

int main(){
    input();

    return 0;
}
