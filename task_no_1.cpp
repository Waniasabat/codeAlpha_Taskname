#include <iostream>
using namespace std;
int main() {
    int no_course; 
    float grade,  credithours, total_credithours=0.0, total_gradePoints=0.0;
    cout <<"enter no of courses: ";
    cin>>no_course;
    float grades[no_course], credits[no_course];
    for(int i=0; i<no_course; i++ ){
        cout<<"enter the grade or each course "<<(i+1);
        cin>>grade ;
        cout << "Enter credit hours for course " << (i + 1);
        cin >> credithours;
        
grades[i] = grade;
        credits[i] = credithours;
         total_credithours+= credithours;
        total_gradePoints += grade * credithours;

    }
float cgpa = total_gradePoints /total_credithours;

 cout << "total credit hours are"<<total_credithours<<endl;
 cout << "total grade points are"<<total_gradePoints<<endl;
 cout << "final cgpa is"<<cgpa;
    return 0;
}
