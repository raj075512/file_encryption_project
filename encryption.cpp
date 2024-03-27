#include "encryption.h"
#include <fstream>  // file input and output //

#include <cctype>  // type check for upper case or lower case //
#include<string>

using namespace std;


bool performCaesarCipler(string &s, bool encrypt)
{
   

    int shift = encrypt ? 3 :-3 ;

    for(char &ch:s)
    {
        if(isalpha(ch))
        {
           char base = isupper(ch) ?'A':'a';
           ch=static_cast<char>((ch-base +shift +26 ) % 26 + base );
        } 
    }

    return true;
}

bool encryptfile(const string& filename , bool encrypt)
{
    // open the input file  //

   ifstream inFile(filename);

   if(!inFile)
   {
    return 0;
   }
   // read the content of the file //

   string content((istreambuf_iterator<char>(inFile)),{});
   inFile.close();
   
   if(performCaesarCipler(content, encrypt))
   {
      ofstream outFile(encrypt ? "encrypted_ "+ filename:"decrypted_ "+filename );
      if(!outFile)
      {
        return 0;
      }
   
     outFile<<content;

     outFile.close();
     return 1;

   }

  return 1;

}