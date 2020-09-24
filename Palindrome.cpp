#include <iostream>
#include <cstring>

using namespace std;

int main(){
// We use three char arrays, one the user inputs, word0, then word1 distills it to just capital letters, word2 is then the reverse of word 1
char word0[80];
char word1[80];
char word2[80];
memset(word1, '\0', 80);
memset(word2, '\0', 80);
cout << "input a string: ";
cin.get(word0, 80);
int k = 0;
int i = 0;
// goes through each character of word0 and copies it in uppercase into word1 if it is a letter, so word1 can just be the info we care about
 while (i < strlen(word0)+1)
        {
          if (isalnum(word0[i])){
                word1[k] = toupper(word0[i]);
                k++;
                }
        i++;
        }
cout << endl;
// making word2 the reverse of word1
 for (int j=0; j < strlen(word1); j++){
   word2[j] = word1[strlen(word1)-1-j];
        }
// compare word1 and word2, if they're the same then it is a palindrome! Easy
 if (strcmp(word1, word2) == 0) cout << "Palindrome!";
 else cout << "Not Palindrome!";
return 0;
}

