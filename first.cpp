#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //string car;
    int n;
    cout<<"!-------------------------------------------------------!"<<endl;
    cout<<"\t\t Welcome to car rental:)"<<endl;
    cout<<"!-------------------------------------------------------!"<<endl;
    // string cars[] = {"Honda", "Maruti", "Toyota", "Volkeswagen"};
    cout<< "1.Honda \n2.Maruti \n3.Toyota \n4.Renault \n5.Tata"<<endl;
    cout<<"Enter the car no. - ";
    cin >> n;
    if(n==1){
        cout<<"Honda - "<<endl;
        cout<<"1.Civic \n2.City"<<endl;
    
    int p;
    cout<<"Enter the car model : "<<endl;
    cin>>p;
    
    if(p==1){
        cout<<"Price: 15k \nEngine: 1800cc \nMilage: 12kmpl"<<endl;

    }
    else if(p==2){
        cout<<"Price: 17k \nEngine: 1499cc \nMilage: 16kmpl"<<endl;
    }
    //--------------------------->
    }
    else if(n==2){
        cout<<"Maruti - "<<endl;
        cout<<"1.Swift \n2.Baleno"<<endl;
    
    int p;
    cout<<"Enter the car model : "<<endl;
    cin>>p;
    
    if(p==1){
        cout<<"Price: 9k \nEngine: 999cc \nMilage: 20kmpl"<<endl;

    }
    else if(p==2){
        cout<<"Price: 9.5kk \nEngine: 1099cc \nMilage: 17kmpl"<<endl;
    }
    //--------------------------->
    }
    else if(n==3){
        cout<<"Toyota - "<<endl;
        cout<<"1.Glanza \n2.Corola"<<endl;
        int p;
    cout<<"Enter the car model : "<<endl;
    cin>>p;
    
    if(p==1){
        cout<<"Price: 10k \nEngine: 999cc \nMilage: 15.5kmpl"<<endl;

    }
    else if(p==2){
        cout<<"Price: 15k \nEngine: 2599cc \nMilage: 9kmpl"<<endl;
    }
    //-------------------------->
    }
    else if(n==4){
        cout<<"Renault - "<<endl;
        cout<<"1.Kwid \n2.Triber"<<endl;

    int p;
    cout<<"Enter the car model : "<<endl;
    cin>>p;
    
    if(p==1){
        cout<<"Price: 6.5k \nEngine: 899cc \nMilage: 20kmpl"<<endl;

    }
    else if(p==2){
        cout<<"Price: 7k \nEngine: 1199cc \nMilage: 16kmpl"<<endl;
    }
    //---------------------------->
    }
    else if(n==5){
        cout<<"Tata - "<<endl;
        cout<<"1.Punch \n2.Tiago"<<endl;

    int p;
    cout<<"Enter the car model : "<<endl;
    cin>>p;
    
    if(p==1){
        cout<<"Price: 8k \nEngine: 999cc \nMilage: 15.5kmpl"<<endl;

    }
    else if(p==2){
        cout<<"Price: 11k \nEngine: 1099cc \nMilage: 14kmpl"<<endl;
    }
    //---------------------------> 
    }
    cout<<"!-------------------------------------------------------!"<<endl;
    char choice;
    cout<<"Enter your choice(y/n)"<<endl;
    cin>>choice;
    if(choice=='y'){
        cout<<"Your car is booked."<<endl;
    }
    else if(choice=='n'){
        cout<<"Car not booked."<<endl;
    }
    
    //cout<<"Your Car is booked."<<endl;
    cout<<"!-------------------------------------------------------!"<<endl;
    cout<<"\t\tThank You \t\t\nDrive Safe:)"<<endl;
    cout<<"!-------------------------------------------------------!"<<endl;
    
    return 0;
}

