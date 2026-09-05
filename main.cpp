#include <iostream>
#include <string>
using namespace std;

class ride{
protected:
    string passangername;
    double distance;
public:
 static int total_ride;

 ride( string passangername ,double distance){
    this->distance=distance;
    this->passangername=passangername;
    total_ride++;

 }

 virtual double calculate_fare() = 0;
};

class car_ride:public ride{
public:
    car_ride( string passangername ,double distance):  ride(  passangername , distance){};
    double calculate_fare(){
      cout<<"Amount = ";
        return distance*50;
    }
    void showname(){
          cout<< "Customer: " << passangername << " | distance: " << distance << endl;
    }

};

int ride::total_ride=0;
int main(){
    car_ride c1("Ali",32.32);
   cout<< c1.calculate_fare()<<endl;
    car_ride c2("moheed",53.32);
  c1.showname();
  cout<<endl;
    cout<<c2.calculate_fare()<<endl;
    car_ride c3("Mubeen",94.32);
    c2. showname();
    cout<<endl;
   cout<< c3.calculate_fare()<<endl;
   c3.showname();
   cout<<endl;

   cout<<"TOtal riders are = "<<ride::total_ride;
}
