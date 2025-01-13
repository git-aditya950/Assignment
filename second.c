#include<stdio.h>
#include<ctype.h>

void VowAndCons(char *str,int *vowels,int *consonants){
    *vowels=*consonants=0;
    while(*str){
        char ch=tolower(*str);
        if(isalpha(ch)){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                (*vowels)++;
            } else{
                (*consonants)++;
            }
        }
        str++;
    }
}
int main(){
    char str[100];
    int vowels,consonants;
    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);
    VowAndCons(str,&vowels,&consonants);
    printf("Vowels: %d\nConsonants: %d\n",vowels,consonants);
    return 0;
}
