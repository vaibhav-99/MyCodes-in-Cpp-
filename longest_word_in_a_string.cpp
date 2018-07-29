#include<iostream>
#include<string>
using namespace std;

int main()
{
  string str,s;
  cout << "Enter a String : ";
  getline(cin,str);
  int size=0,maxsize=0,i,j;
  for(i=0 ; i < str.length() ; i = j+1)
  {
    size = 0;
    j=i;

  while(str[j]!=' ' && str[j]!='\0')
  {
   j++;
   size++;
  }
    if(size > maxsize)
    {
      maxsize = size;
      s.clear();
      int temp=i;
      while(str[temp] !=' ' && str[temp]!='\0')
      {
        s.push_back(str[temp]);
        temp++;
      }
    }
  }
cout << "The longest word is : " << s;
return 0;
}
