// 8.9
# include <stdio.h>
# include <string.h>

int main(void){
  char str1[50];
  char str2[50];
  int str1_len; 
  int str2_len;
  int str_cat_len;

  printf("inset the first string : \n");
  gets(str1);
  printf("insert the second string: \n");
  gets(str2);

  str1_len = strlen(str1);
  str2_len = strlen(str2);
  
  printf("word : %-20s, len : %d \n", str1, str1_len);
  printf("word : %-20s, len : %d \n", str2, str2_len);
  
  strcat(str1, str2);
  str_cat_len = strlen(str1);
  printf("concat_word : %-20s, len : %d", str1, str_cat_len);
}

