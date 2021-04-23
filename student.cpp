#include<iostream>
using namespace std;

struct Student{
    struct Person{
        char*name;
        int age;
    }p;
    float marks[10];
    float avgmarks;
};


void readValues(Student *stu){
    cin>>stu->p.name;
    cin>>stu->p.age;
    float sum=0;
    for(int i=0;i<10;i++){
        cin>>stu->marks[i];
        sum+=stu->marks[i];
    }
    stu->avgmarks=sum/10;
}

float computeClassAverage(Student *stu,int size){
    float avg=0;
    for(int i=0;i<size;i++){
        avg+=stu->avgmarks;
        stu++;
    }
    return avg;
}

void printRecords(float classAvg,Student *stu,int size){
    for(int i=0;i<size;i++){
        if(stu->avgmarks>classAvg){
            cout<<"name"<<stu->p.name;
            cout<<"age"<<stu->p.age;
            cout<<"avgmarks"<<stu->avgmarks;
        }
        stu++;
    }
}

int main(){
    Student students[50];
    Student* sptr;
    sptr=students;
    for(int i=0;i<50;i++){
        readValues(sptr);
        sptr++;
    }
    readValues(sptr);

    float classavg;
    classavg=computeClassAverage(sptr,50);
    cout<<"Class Average"<<classavg;
    printRecords(classavg,sptr,50);
    return 0; 
}

