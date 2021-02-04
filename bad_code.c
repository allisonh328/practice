#include "common.h"

/*
   Removes every occurrence of the character c
   from the string a, returning the new string b.
*/
void strrem(const char* a, const char c, char* b)
{
  int len = strlen(a);
  int i, j = 0;

  for(i = 0; i <= len; i++) {
    if(a[i] != c) {
      b[j] = a[i];
      j++;
    }
  }
}

/*
   Toggle the case (uppercase <-> lowercase ) of every
   occurrence of the character b in the in string a.
   A lowercase character becomes uppercase & vice-versa.
   b is invariant to case ('a' is the same as 'A').
   If b is not a letter (a-Z,A-Z), nothing is changed.
*/
void strtogglealpha(char* a, const char b)
{
  int l = strlen(a);
  int i;

  if(!isalpha(b)) {
    return;
  }
  for(i = 0; i < l; i++) {
    if(isalpha(a[i])){
      if(tolower(a[i]) == tolower(b)) {
        if(islower(a[i])) {
          a[i] = toupper(a[i]);
        } else {
          a[i] = tolower(a[i]);
        }
      }
    }
  }
}

/*
   Copy a into b, except that every vowel in string a
   has an asterisk before and after it in b,
   so "bat" becomes "b*a*t" and "Care" becomes "C*a*r*e*"
*/
void strflagvowel(const char* a, char* a)
{
  int l = strlen(a);
  int i, j = 0;

  for(i = 0; i <= l; i++) {
    if(isvowel(a[i])) {
      b[j++] = '*';
      b[j++] = a[i];
      b[j++] = '*';
    } else {
      b[j++] = a[i];
    }
  }
}
