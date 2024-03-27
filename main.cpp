#include<iostream>
#include<fstream>
#include<string>
#include "encryption.h"

using namespace std;

int main()
{
    
    string filename;
    char mode;
    
    cout<<"enter the filename: \n";
    std::getline(cin>> ws , filename);
 
    std::cout<<"Encrypt(e) or Decrypt(d) ? \n";
    std::cin>>mode;

   if(mode=='e'|| mode =='E' )
   {
      if(encryptfile(filename, true))
      {
       std:: cout<< " Encrption process successfully, completed ! \n";

      }else{
        cerr<< "error :  unable to perform encryption \n";

      }
 
   }else if(mode=='d' || mode =='D') {
        
        if(encryptfile(filename, false))
        {
        std::   cout<<" Decryption successfully , completed !\n";
        }else
        {
         std::   cerr<<"unable to perform decryption\n";
        }

   }else{

    std::  cerr<<"enter the correct action : Use 'e' for encrption or 'd' for decryption \n";

   }


    return 0;
}