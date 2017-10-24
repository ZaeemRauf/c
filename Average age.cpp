#include <iostream>
using namespace std;
main()
{
 int age1,age2,age3,age4,age5,age6,age7,age8;
 int TotalAge;
 int AverageAge;
  cout <<"please enter the age of student 1:";
 cin >> age1;
  cout <<"please enter the age of student 2:";
 cin >> age2;
  cout <<"please enter the age of student 3:";
 cin >> age3;
  cout <<"please enter the age of student 4:";
 cin >> age4;
  cout <<"please enter the age of student 5:";
 cin >> age5;
  cout <<"please enter the age of student 6:";
 cin >> age6;
  cout <<"please enter the age of student 7:";
 cin >> age7;
  cout <<"please enter the age of student 8:";
 cin >> age8;
 TotalAge = age1+age2+age3+age4+age5+age6+age7+age8;
 AverageAge= TotalAge/8;
 cout <<"The average age of the class is:"
 <<AverageAge;
}
