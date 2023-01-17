#include <stdio.h>
#include <string.h>

char name[20];

void _copy(char* src, char* dst){
  strcpy(dst, src);
}

int main(){
  char str[20] = "What`s your name?";
  printf("This is just for test:)\n\n");
  printf("%s\n", str);
  printf("Please enter your name!: ");
  scanf("%s", str);
  _copy(name, str);
  printf("Hello, %s\n", name);
} 
