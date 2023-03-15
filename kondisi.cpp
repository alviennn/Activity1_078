#include <iostream>

using namespace std ;

double rerata(double a, double b){
    return (a+b)/2;
}

string status (double c){
    if (c >=60)
    return "lulus";
    else
    return "gagal";
} 

string status2 (double r, double n){
    if(r >=60 && n >= 70)
    return "lulus";
    else
    return "gagal";
}

string status3 (double r, double n, double m){
    if (r >=60 || n >= 70 && m >=60)
    return "lulus";
    else
    return "gagal";
}

int main(){
    double nilM,nilB;

    cout << "Masukkan Nilai Matematika = ";
    cin >> nilM;
    cout << "Masukkan Nilai Bahasa = ";
    cin >> nilB;
    cout << "Status Kelulusan : " << status(rerata(nilM,nilB));
    cout << "\nStatus Kelulusan : " << status2(rerata(nilM,nilB), nilM);
    cout << "\nStatus Kelulusan : " << status3(rerata(nilM,nilB), nilM,nilB);
    return 0;
}

