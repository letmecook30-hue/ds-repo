#include <iostream>
using namespace std;

struct PatientNode{
    int pt_id;
    string pt_name;
    string prblm;
    PatientNode * next;
};

int main() {
    PatientNode * pateint1 = new PatientNode();
    PatientNode * pateint2 = new PatientNode();
    PatientNode * pateint3 = new PatientNode();
    PatientNode * pateint4 = new PatientNode();

    PatientNode * head = pateint1;
    PatientNode * temp = head;

    pateint1 -> pt_id = 11;
    pateint1 -> pt_name = "Ajay Patil";
    pateint1 -> prblm = "Back Pain";
    pateint1 -> next = pateint2;

    pateint2 -> pt_id = 12;
    pateint2 -> pt_name = "Dev Sagar";
    pateint2 -> prblm = "Viral Flu";
    pateint2 -> next = pateint3;

    pateint3 -> pt_id = 13;
    pateint3 -> pt_name = "Ankit Prasad";
    pateint3 -> prblm = "Viral Flu";
    pateint3 -> next = pateint4;

    pateint4 -> pt_id = 14;
    pateint4 -> pt_name = "Ronak Patel";
    pateint4 -> prblm = "Vomiting";
    pateint4 -> next = NULL;

    while (temp != NULL){
        cout<<"Patient Id   : "<<temp->pt_id<<endl;
        cout<<"Patient Name : "<<temp->pt_name<<endl;
        cout<<"Problem      : "<<temp->prblm<<endl<<"\n";
        temp = temp->next;
    }
}