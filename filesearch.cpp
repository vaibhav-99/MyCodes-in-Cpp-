#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class AdvFile
{
 public:
 static bool isInFile(char a[])
 {
  fstream fout("ghost.txt", ios::in);
  char word[100];
  while(fout)
  {
  fout >> word;
  if(strcmp(word,a)==0)
   return true;
  }

  return false;
 }

};

int main()
{
 if(AdvFile::isInFile("foo"))
  cout << "\nWord Exists!";
 else
  cout << "\nWord Does not Exist";
return 0;
}
