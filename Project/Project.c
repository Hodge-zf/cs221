#include <stdio.h>
#include <string.h>

void space_to_line(char * input_string);

void sort_and_print_array(int * input_array, int input_size);

int main(void)
{
    char test1[] = "Test";
    char test2[] = "This is a test";
    space_to_line(test1);
    space_to_line(test2);

    int input_array[] = {-2, 99, 16, 3};
    int input_size = 4;
    sort_and_print_array(input_array, input_size);

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

void sort_and_print_array(int * input_array, int input_size)
{
  for (int step = 0; step < input_size - 1; step++)
  {
    for (int i = 0; i < input_size - step - 1; i++)
    {
      if (input_array[i] > input_array[i + 1])
      {
        int temp = input_array[i];
        input_array[i] = input_array[i + 1];
        input_array[i + 1] = temp;
      }
    }
  }
  for (int i = 0; i < input_size; i++)
  {
    printf("%d ", input_array[i]);
  }
  printf("\n");
}
