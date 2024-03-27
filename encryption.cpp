#include "encryption.h"
#include <fstream>  // file input and output //

#include<cctype>  // type check for upper case or lower case //
using namespace std;

bool encryptFile(const string& filename , bool encryptFlag)
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



}