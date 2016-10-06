#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen( char *arr ) {
  int i = 0;
  while( arr[i] != 0 ) {
    i++;
  }
  return i;
}

char * my_strcpy( char *dest, char *source ) {
  int i = 0;
  while( source[i] != 0 ) {
    dest[i] = source[i];
    i++;
  }
  dest[i] = 0;
  return dest;
}

char * my_strncpy( char *dest, char *source, int n ) {
  int i = 0;
  while( source[i] != 0 && n != 0 ) {
    dest[i] = source[i];
    i++;
    n--;
  }
  dest[i] = 0;
  return dest;
}

char * my_strcat( char *dest, char *source ) {
  int destLen = my_strlen(dest);
  int i = 0;
  while( source[i] != 0 ) {
    dest[destLen+i] = source[i];
    i++;
  }
  dest[destLen+i] = 0;
  return dest;
}

char * my_strncat( char *dest, char *source, int n ) {
  int destLen = my_strlen(dest);
  int i = 0;
  while( source[i] != 0 && n != 0 ) {
    dest[destLen+i] = source[i];
    i++;
    n--;
  }
  dest[destLen+i] = 0;
  return dest;
}

int my_strcmp( char *s1, char *s2 ) {
  int i = 0;
  int s1len = my_strlen(s1);
  int s2len = my_strlen(s2);
  for(; i < s1len || i < s2len; i++) {
    if( s1[i] != s2[i] ) {
      return s1[i] - s2[i];
    }
  }
  return 0;
}

char * my_strchr( char *s, char c ) {
  int i = 0;
  while( s[i] != 0 ) {
    if( s[i] == c ) {
      return &s[i];
    }
  }
  return 0;
}

int main() {

  //strlen test
  char s1[] = "apple";
  printf("STRLEN TEST\nTest for: %s\nmy_strlen(%s) = %d\n\n",s1,s1,my_strlen(s1)); 

  //strcpy test
  char s2[10];
  printf("STRCPY TEST\nCopy %s (s1) to s2\nmy_strcpy(s2,s1) = %s\n",s1,my_strcpy(s2,s1));
  printf("s2 = %s\n\n",s2);

  //strncpy test
  char s3[5];
  printf("STRNCPY TEST\nCopy %s (s1) to s3\n n = 3\nmy_strncpy(s3,s1,3) = %s\n",s1,my_strncpy(s3,s1,3));
  printf("s3 = %s\n\n",s3);

  //strcat test
  char s4[10] = "pine";
  printf("STRCAT TEST\nCat %s (s4) and %s (s1)\nmy_strcat(s4,s1) = %s\n",s4,s1,my_strcat(s4,s1));
  printf("s4 = %s\n\n",s4);

  //strncat test
  char s5[15] = "bubble wr";
  printf("STRNCAT TEST\nCat %s (s5) and %s (s1)\nn = 2\nmy_strncat(s5,s1,2) = %s\n",s5,s1,my_strncat(s5,s1,2));
  printf("s5 = %s\n\n",s5);

  //strcmp test
  char s6[] = "apple";
  char s7[] = "happy";
  printf("STRCMP TEST\nCompare %s (s1) and %s (s6)\nmy_strcmp(s1,s6) = %d\n",s1,s6,my_strcmp(s1,s6));
  printf("Compare %s (s1) and %s (s7)\nmy_strcmp(s1,s7) = %d\n\n",s1,s7,my_strcmp(s1,s7));

  //strchr test
  char c1 = 'p';
  printf("STRCHR TEST\nSearch for %c (c1) in %s (s1)\nmy_strchr(s1,c1) = %s\n",c1,s1,strchr(s1,c1));

  
  return 0;
}
