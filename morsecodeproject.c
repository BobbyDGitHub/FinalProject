#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){

/*if(argc = 1){
printf("error\n");
return 0;
}*/

int strsize = 0;
    for (int i = 1; i < argc; i++) {
        strsize += strlen(argv[i]);
        if (argc > i+1)
            strsize++;
    }

char* word;
word = malloc(strsize);
word[0] = '\0';

for (int i = 1; i < argc; i++) {
        strcat(word, argv[i]);
        if (argc > i+1)
            strcat(word, " ");
    }

printf("%s\n", word);

for(int i = 0; i < strlen(word); i++){

//printf("%d\n", strlen(word));
if(word[i] == ' '){
printf("             ");
}#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){

/*if(argc = 1){
printf("error\n");
return 0;
}*/

int strsize = 0;
    for (int i = 1; i < argc; i++) {
        strsize += strlen(argv[i]);
        if (argc > i+1)
            strsize++;
    }

char* word;
word = malloc(strsize);
word[0] = '\0';

for (int i = 1; i < argc; i++) {
        strcat(word, argv[i]);
        if (argc > i+1)
            strcat(word, " ");
    }

printf("%s\n", word);

for(int i = 0; i < strlen(word); i++){

//printf("%d\n", strlen(word));
if(word[i] == ' '){
printf("             ");
}
if(word[i] == 'a'){
printf(".- ");
}
if(word[i] == 'b'){
printf("-... ");
}
if(word[i] == 'c'){
printf("-.-. ");
}
if(word[i] == 'd'){
printf("-.. ");
}
if(word[i] == 'e'){
printf(". ");
}
if(word[i] == 'f'){
printf("..-. ");
}
if(word[i] == 'g'){
printf("--. ");
}
if(word[i] == 'h'){
printf(".... ");
}
if(word[i] == 'i'){
printf(".. ");
}
if(word[i] == 'j'){
printf(".--- ");
}
if(word[i] == 'k'){
printf("-.- ");
}
if(word[i] == 'l'){
printf(".-.. ");
}
if(word[i] == 'm'){
printf("-- ");
}
if(word[i] == 'n'){
printf("-. ");
}
if(word[i] == 'o'){
printf("--- ");
}
if(word[i] == 'p'){
printf(".--. ");
}
if(word[i] == 'q'){
printf("--.- ");
if(word[i] == 'q'){
printf("--.- ");
}
if(word[i] == 'r'){
printf(".-. ");
}
if(word[i] == 's'){
printf("... ");
}
if(word[i] == 't'){
printf("- ");
}
if(word[i] == 'u'){
printf("..- ");
}
if(word[i] == 'v'){
printf("...- ");
}
if(word[i] == 'w'){
printf(".-- ");
}
if(word[i] == 'x'){
printf("-..- ");
}
if(word[i] == 'y'){
printf("-.-- ");
}
if(word[i] == 'z'){
printf("--.. ");
}

}
printf("\n");
return 0;
}
