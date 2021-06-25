string ari(string s){
int num_letter = letters(s);
int num_words = words(s);
int num_sentences = sentences(s);

int value = 4.71*((double)num_letters/(double)num_words) + 0.5*((double)num_words/(double)num_sentences) -21.43;
  

}
