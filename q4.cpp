#include<iostream>
using namespace std;
int main() {
    int seatchoice;
    float distance,fare;
    cout<<"---Railway Ticket Fare System---"<<endl;
    cout << "Seat Types: "<<endl;
    cout << "1. Economy (Rs. 5 per km) "<<endl;
    cout << "2. Business (Rs. 8 per km) "<<endl;
    cout << "3. First Class (Rs. 12 per km) "<<endl;

    cout<<"--Enter your seat choice--(1-3): "<<endl;
    cin>>seatchoice;

    cout<<"Enter the distance in km: "<<endl;
    cin>>distance;

    switch (seatchoice) {
        case 1:
            fare = distance * 5;
            cout<<"Economy class fare = Rs. "<<fare<<endl;
            break;
        case 2:
            fare = distance * 8;
            cout<<"buisness class fare = Rs. "<<fare<<endl;
            break;
        case 3:
            fare = distance * 12;
            cout<<"First class fare = Rs. "<<fare<<endl;
            break;
        default:
            cout<<"---Invalid seat choice!---";
    }
    return 0;

}