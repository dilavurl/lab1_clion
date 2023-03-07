#include <iostream>
#include <string>
using namespace std;


int main() {

    //1

    string name;
    int studentID;

    cout<<"What is your name? ";
    cin>>name;
    cout<<"hello "<<name<<endl;

    cout<<"What is your student id? ";
    cin>>studentID;
    cout<<"student ID: "<<studentID<<endl;

    //2

    int var1;
    int var2;
    int sum;
    int diff;
    int prod;

    cout<<"var1: ";
    cin>>var1;
    cout<<"var2: ";
    cin>>var2;

    sum=var1+var2;
    diff=var1-var2;
    prod=var1*var2;

    cout<<"var1: "<<var1<<endl;
    cout<<"var2: "<<var2<<endl;
    cout<<"sum: "<<sum<<endl;
    cout<<"diff: "<< diff<<endl;
    cout<<"prod: "<<prod<<endl;

    //3

    string name1;
    double labGrade;
    double midGrade;
    double finalGrade;
    double lastScore;


    cout<<"your name: ";
    cin>>name1;
    cout<<"your lab grade: ";
    cin>>labGrade;
    cout<<"your midterm grade: ";
    cin>>midGrade;
    cout<<"your final grade: ";
    cin>>finalGrade;

    lastScore=labGrade*0.25+midGrade*0.35+finalGrade*0.60;

    cout<<"name: "<<name1<<endl;
    cout<<"lab grade: "<<labGrade<<endl;
    cout<<"midterm grade: "<<midGrade<<endl;
    cout<<"final grade: "<<finalGrade<<endl;
    cout<<"last score: "<<lastScore<<endl;

    //4

    cout << "*\n**\n***\n**\n*\n";























    return 0;
}

