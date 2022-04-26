// 8.16
#include <stdio.h>
#include <string.h>
#define SIZE 200

int main(void)
{
  char input_str[SIZE], search_str[SIZE];
  char *searchptr;
  printf("input texts :\n");
  gets(input_str);
  printf("search str: \n");
  gets(search_str);

  searchptr = strstr(input_str, search_str);
  if (searchptr != NULL)
  {
    printf("ramaineder for first occuerence:\n %s\n", searchptr);
    searchptr = strstr(searchptr + 1, search_str);
    if (searchptr != NULL)
    {
      printf("remaineder for second occuernce:\n %s\n", searchptr);
    }
  }
  else
    printf("search stirng not found");
}