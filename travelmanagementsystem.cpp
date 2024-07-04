#include<iostream>
using namespace std;
struct package{
    string dest,sDate,eDate;
    int price;
};
displayTour(Package){
    cout<<"Destination:"<<pack.dest<<endl;
    cout<<"Start Date:"<<pack.sDate<<endl;
    cout<<"Return Date:"<<pack.eDate<<endl;
    cout<<"Package Price: Rs"<<pack.price<<endl<<endl;
}
int main(){
    Package pack1{"Muree","20-05-2023","30-05-2023",30000};
    Package pack2{"Gilgit","01-06-2023","10-06-2023",40000};
    Package pack3{"Kashmir","11-06-2023","20-06-2023",50000};

    cout<<"....Tour Plans...."<<endl;
    displayTour(pack1);
    displayTour(pack2);
    displayTour(pack3);

    int choice;
    cout<<"select package No.";
    cin>>choice;
    if(choice==1){
        system("cls");
        cout<<"You selected the following package"<<endl;
        displayTour(pack1);
    }

    else if(choice==2){
        system("cls");
        cout<<"You have selected the following package"<<endl;
        displayTour(pack2);
    }
    else if(choice==3){
        system("cls");
        cout<<"You have selected the following package"<<endl;
        displayTour(pack3);
    }
    return 0;

}