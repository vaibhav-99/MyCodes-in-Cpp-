#include<iostream>
using namespace std;
class Student
{

  private:
  int scores[5];
  public:
  void input()
  {
    for(int i=0;i<5;i++)
     cin>>scores[i];
  }

  int calculateTotalScore()
  {
    int totalScore=0;
    for(int i=0;i<5;i++)
     totalScore+=scores[i];

    return totalScore;
  }
  static int a;
};

main()
{
 Student s;
 cout << Student::a;
}
