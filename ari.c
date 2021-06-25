#include<math.h>
#include<ctype.h>
#include<string.h>

int letters(char *s);
int words(char *s);
int sentences(char *s);

char* ari(char *s){
  
int num_letters = letters(s);
int num_words = words(s);
int num_sentences = sentences(s);
double x = 4.71*((double)num_letters/(double)num_words) + 0.5*((double)num_words/(double)num_sentences) -21.43;
int value = round(x);
  
switch(value){
  case 1: return "Kindergarten";
  case 2: return "First/Second Grade";
  case 3: return "Third Grade";
  case 4: return "Fourth Grade";
  case 5: return "Fifth Grade";
  case 6: return "Sixth Grade";
  case 7: return "Seventh Grade";
  case 8: return "Eighth Grade";
  case 9: return "Ninth Grade"; 
  case 10: return "Tenth Grade";
  case 11: return "Eleventh Grade";
  case 12: return "Twelfth grade";
  case 13: return "College student";
  case 14: return "Professor";
}
 
return "";
}

int letters(char *s){
int len = strlen(s);
int count = 0; 
for(int i = 0;i <len;i++)
{
if(isalnum(s[i])) count++;
}
   return count;
}
   
int words(char *s){
int len = strlen(s);
int count = -1; 
for(int i = 0;i <len;i++)
{
if(isspace(s[i])) count++;
}
   return count;
}

int sentences(char *s){
int len = strlen(s);
int count = 0; 
for(int i = 0;i <len;i++)
{
if((s[i] == '.') || (s[i] == '!') || (s[i] == '?')) count++;
}
   return count;
}
