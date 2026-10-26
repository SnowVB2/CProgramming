#include <iostream>
using namespace std;

//def namespaces
namespace student{
    int id;
}

namespace course{
    int id;
}


//uhhh
int main()
{
    //get student id
      cout << "Enter Student ID: ";
      cin >> student::id;
     //get course id
      cout << "Enter Course ID: ";
      cin >> course::id;
     //show registration information
      cout << "---Registration Information--- \n" << "Student ID: " << student::id << "\n" << "Course ID: " << course::id <<"\n";
    return 0;

}