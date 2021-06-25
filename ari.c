#include<math.h>
#include<ctype.h>

int letters(string s);
int words(string s);
int sentences(string s);

string ari(string s){
  
int num_letter = letters(s);
int num_words = words(s);
int num_sentences = sentences(s);

int value = (round)(4.71*((double)num_letters/(double)num_words) + 0.5*((double)num_words/(double)num_sentences) -21.43);
  
switch(value){
  case 1: return "Kindergarten";
  case 2: return "First/Second Grade";
  case 3: return "Third Grade";
  case 4: return "Fourth Grade ":
  case 5: return "Fifth Grade";
  case 6: return "Sixth Grade":
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

int letters(string s){
int len = strlen(s);
int count = 0; 
for(int i = 0;i <len;i++)
{
if(isalnum(s[i])) count++;
}
   return count;
}
   
int words(string s){
int len = strlen(s);
int count = 1; 
for(int i = 0;i <len;i++)
{
if(isspace(s[i])) count++;
}
   return count;
}

int sentences(string s){
int len = strlen(s);
int count = 0; 
for(int i = 0;i <len;i++)
{
if((s[i] == '.') || (s[i] == '!') || (s[i] == '?')) count++;
}
   return count;
}
