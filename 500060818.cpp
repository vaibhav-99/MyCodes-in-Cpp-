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

 static void getMarks(char *subject, char *name)
 {
  fstream fout("ghost.txt", ios::in);
  char maths[10], ads[4], dbms[4], name_ent[10];
  while(fout)
  {
    fout >> name_ent >> maths >> ads >> dbms;
    if(strcmp(name_ent,name)==0 && strcmp(subject,"maths")==0)
     cout << maths;
    else if(strcmp(name_ent,name)==0 && strcmp(subject,"ads")==0)
     cout << ads;
    else if(strcmp(name_ent,name)==0 && strcmp(subject,"dbms")==0)
     cout << dbms;
  }
 }

};

int main()
{
 if(AdvFile::isInFile("foo"))
  cout << "\nWord Exists!\n";
 else
  cout << "\nWord Does not Exist\n";

 AdvFile::getMarks("maths","ajay");

return 0;
}
