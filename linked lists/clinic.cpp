#include <iostream>
using namespace std;

struct PatientNode{
    int pt_id;
    string pt_name;
    string prblm;
    PatientNode * next;
};

int main() {

    PatientNode * patient1 = new PatientNode();
    PatientNode * patient2 = new PatientNode();
    PatientNode * patient3 = new PatientNode();
    PatientNode * patient4 = new PatientNode();
    PatientNode * newpatient5 = new PatientNode();

    PatientNode * head = patient1;
    PatientNode * temp = head;

    patient1 -> pt_id = 11;
    patient1 -> pt_name = "Ajay Patil";
    patient1 -> prblm = "Back Pain";
    patient1 -> next = patient2;

    patient2 -> pt_id = 12;
    patient2 -> pt_name = "Dev Sagar";
    patient2 -> prblm = "Viral Flu";
    patient2 -> next = patient3;

    patient3 -> pt_id = 13;
    patient3 -> pt_name = "Ankit Prasad";
    patient3 -> prblm = "Viral Flu";
    patient3 -> next = patient4;

    patient4 -> pt_id = 14;
    patient4 -> pt_name = "Ronak Patel";
    patient4 -> prblm = "Vomiting";
    patient4 -> next = newpatient5;

    newpatient5 -> pt_id = 15;
    newpatient5 -> pt_name = "Jigar Patel";
    newpatient5 -> prblm = "Headache";
    newpatient5 -> next = NULL;

    while (temp != NULL){
        cout<<"Patient Id   : "<<temp->pt_id<<endl;
        cout<<"Patient Name : "<<temp->pt_name<<endl;
        cout<<"Problem      : "<<temp->prblm<<endl<<"\n";
        temp = temp->next;
    }

    temp = head;
    head = head -> next;
    delete temp;

    cout<<"\nAfter Consulting First Patient\n";

    temp = head;

    while(temp != NULL){
        cout<<"Patient Id   : "<<temp->pt_id<<endl;
        cout<<"Patient Name : "<<temp->pt_name<<endl;
        cout<<"Problem      : "<<temp->prblm<<endl<<"\n";
        temp = temp->next;
    }

    cout<<"Deleting Patient ID :- 14........................";

    int removeid = 14;

    temp = head;

    while(temp->next != NULL){
        if(temp->next->pt_id == removeid){
            PatientNode * deletenode = temp->next;
            temp->next = deletenode->next;
            delete deletenode;
            break;
        }
        temp = temp->next;
    }

    cout << "\nAfter deletion:\n\n";

    temp = head;

    while (temp != NULL) {
        cout << "Patient Id   : " << temp->pt_id << endl;
        cout << "Patient Name : " << temp->pt_name << endl;
        cout << "Problem      : " << temp->prblm << endl;
        cout << endl;
        temp = temp->next;
    }

    return 0;
}