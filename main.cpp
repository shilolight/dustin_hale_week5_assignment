#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    std::string choice;
    std::string passenger[5];
    cout<<"AIRLINE REGISTRATION"<<std::endl;
    do {
        cout<<"a - Add Entry"<<endl;
        cout<<"l - List Entries"<<endl;
        cout<<"q - Quit"<<endl<<endl;
        cout<<"Choice: ";
        cin>>std::ws;
        std::getline(cin, choice);
        if(choice == "a") {
            std::string fname, lname, boarding_date, card_number, destination;
            cout<<"First Name: ";
            cin>>std::ws;
            std::getline(cin,fname);
            passenger[0] = fname;
            cout<<"Last Name: ";
            cin>>std::ws;
            std::getline(cin,lname);
            passenger[1]=lname;
            cout<<"Boarding Date: ";
            cin>>std::ws;
            std::getline(cin,boarding_date);
            passenger[2]=boarding_date;
            cout<<"Card Number: ";
            cin>>std::ws;
            std::getline(cin,card_number);
            passenger[3]=card_number;
            cout<<"Destination: ";
            cin>>std::ws;
            std::getline(cin,destination);
            passenger[4]=destination;
        }
        else if (choice == "l") {
            for(int i = 0; i  < 5; i ++)
                cout<<passenger[i]<<endl;
            
        }
    }
    while (true);
}
