#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    float bb,tb; 
    float bmi; 

    cout<<"masukan berat badan anda (kg) :";
    cin>>bb;

    cout<<"masukan tinggi anda (m) :";
    cin>>tb; 

    // cout << bb << tb;

    bmi = bb / (tb*tb) ; 
    cout<<fixed<<setprecision(2);//mengatur angka di belakang koma
    cout<<"BMI anda " << bmi<<endl;

   if (bmi< 18.5 ){
    cout<<"berat badan kurang"<<endl;
   }
   else if ( bmi >= 18.5 &&  bmi < 25) {
    cout<<"berat badan normal"<<endl;
   }
   else if ( bmi >= 25 && bmi < 30){
    cout<<"berat badan berlebih"<<endl;
   }
   else if (bmi >= 30){
    cout<<"obesitas"<<endl;
   }
}