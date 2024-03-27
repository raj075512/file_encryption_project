#include<iostream>
#include "encryption.h"

using namespace std;

int main()
{
    
    string filename;
    char mode;
    
    cout<<"enter the filename: \n";
    getline(cin >>ws, filename);
 
    cout<<"Encrypt(e) or Decrypt(d) ? \n";
    cin>>mode;

   if(mode=='e'|| mode =='E' )
   {
      if(encryptFile(filename, true))
      {
        cout<< " Encrption process successfully, completed ! \n";
      }else{
        cerr<< "error :  unable to perform encryption \n";
      }
 
   }else if(mode=='D' || mode =='D') {
        
        if(encryptFile(filename, false))
        {
           cout<<" Decryption successfully , completed !\n";
        }else
        {
            cerr<<"unable to perform decryption\n";
        }

   }else{

      cerr<<"enter the correct action : Use 'e' for encrption or 'd' for decryption \n";

   }


    return 0;
}