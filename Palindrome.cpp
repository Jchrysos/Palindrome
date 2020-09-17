#include <iostream>
#include <cstring>

using namespace std;

int main(){
char word0[80];
char word1[80];
char word2[80];
memset(word1, '\0', 80);
memset(word2, '\0', 80);
cout << "input a string: ";
cin.get(word0, 80);
int k = 0;
int i = 0;
 while (i < strlen(word0)+1)
        {
          if (isalnum(word0[i])){
                word1[k] = word0[i];
                k++;
                }
        i++;
        }
cout << endl;
 for (int j=0; j < strlen(word1); j++){
   word2[j] = word1[strlen(word1)-1-j];
        }
 if (strcmp(word1, word2) == 0) cout << "Palindrome!";
 else cout << "Not Palindrome!";
return 0;
}

