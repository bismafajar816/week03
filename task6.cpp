#include <iostream>
using namespace std;
main()
{
string name;
double matricMarks;
double intermediateMarks;
double ecatMarks;
float matricpercentage;
float interpercentage;
float ecatpercentage;
float totalAggregate;

cout <<"name: " ;
cin >>name;

cout <<"matricMarks:  ";
cin >> matricMarks;

cout <<"intermediateMarks:  ";
cin>> intermediateMarks;


cout <<"ecatMarks: ";
cin >> ecatMarks;

matricpercentage = matricMarks*10/1100;
cout <<"matricpercentage: "<<matricpercentage <<endl;

interpercentage = intermediateMarks*40/550;
cout <<"interpercentage: "<<interpercentage <<endl;

ecatpercentage = ecatMarks*50/400;
cout <<"ecatpercentage: " <<ecatpercentage <<endl;

totalAggregate = matricpercentage + interpercentage + ecatpercentage ;
cout <<"totalAggregate: " <<totalAggregate;














}