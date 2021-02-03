#include "common.h"

/*
   Removes every occurrence of the character c
   from the string s1, returning the new string s2.
*/
void strrem(const char* s1, const char c, char* s2)
{
  int len = strlen(s1);
  int i, j = 0;

  for(i = 0; i <= len; i++) {
    if(s1[i] != c) {
      s2[j] = s1[i];
      j++;
    }
  }
}

/*
   Toggle the case (uppercase <-> lowercase ) of every
   occurrence of the character c in the in string s.
   A lowercase character becomes uppercase & vice-versa.
   c is invariant to case ('a' is the same as 'A').
   If c is not a letter (a-Z,A-Z), nothing is changed.
*/
void strtogglealpha(char* s, const char c)
{
  int len = strlen(s);
  int i;

  if(!isalpha(c)) {
    return;
  }
  for(i = 0; i < len; i++) {
    if(isalpha(s[i])){
      if(tolower(s[i]) == tolower(c)) {
        if(islower(s[i])) {
          s[i] = toupper(s[i]);
        } else {
          s[i] = tolower(s[i]);
        }
      }
    }
  }
}

/*
   Copy s1 into s2, except that every vowel in string s1
   has an asterisk before and after it in s2,
   so "bat" becomes "b*a*t" and "Care" becomes "C*a*r*e*"
*/
void strflagvowel(const char* s1, char* s2)
{
  int len = strlen(s1);
  int i, j = 0;

  for(i = 0; i <= len; i++) {
    if(isvowel(s1[i])) {
      s2[j++] = '*';
      s2[j++] = s1[i];
      s2[j++] = '*';
    } else {
      s2[j++] = s1[i];
    }
  }
}
