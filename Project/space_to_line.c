#include <stdio.h>
#include <string.h>

void space_to_line(char * input_string);

int main(void)
{
    char test1[] = "Test";
    char test2[] = "This is a test";
    space_to_line(test1);
    space_to_line(test2);
    return 0;
}

void space_to_line(char *  input_string)
{
    int counter = 0;

    while (input_string[counter] != '\0'){

      if (input_string[counter] == ' '){
        printf("\n");
        counter++;
      }

      else{
        printf( "%c", input_string[counter]);
        counter++;
      }
    }
    printf("\n");
}
