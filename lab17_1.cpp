//Write your code here
#include <iostream>
#include <fstream>
#include<string>

using namespace std;

string check_grade(float a,float b,float c){
    float d=a+b+c;
    string grade;
    if(d >=80){
        grade ="A";
    }else if (d>=70){
        grade = "B";
    }else if (d>=60){
        grade = "C";
    }else if (d>=50){
        grade = "D";
    }else {grade = "F";}
return grade;
}

string tolower_for_str(string x){
    string y =x;
    for (int i=0;i<x.size();i++){
        y[i]=tolower(x[i]);
    }
    return y;
}

int main(){
    ifstream score("name_score.txt");
    
    string text;
    while(getline(score,text)){
        char format[]="%[^:]: %f %f %f";
        char name[100];
        float a,b,c;
        sscanf(text.c_str(),format,name,&a,&b,&c);
        cout <<name <<" ";
        cout <<check_grade(a,b,c)<<"\n";
        
        


    }
}
