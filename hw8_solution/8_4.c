# include <stdio.h>
# include <string.h>
# define SIZE 100

int main(void)
{
  char input_str[SIZE], search_str[SIZE];
  char *searchptr;
  printf("input texts :\n");
  gets(input_str);
  printf("search str: \n");
  gets(search_str);
  int occurence = 0;
  
  searchptr = strstr(input_str, search_str);
  if (searchptr != NULL){
    occurence += 1;
    while(1){
      searchptr = strstr(searchptr+1, search_str);
      if (searchptr != NULL){
        occurence += 1;
      }
      else
        break;
    }
  }
  printf("total occurence of %s is : %d", search_str, occurence);
}