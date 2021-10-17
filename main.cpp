#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout<<fixed<<setprecision(2);
    double Eu_amount,Eu_rate,Us_amount;
    cout<<"How many euros are you exchanging?";
    cin>>Eu_amount;
    cout<<"What is the exchange rate?";
    cin>>Eu_rate;
    Us_amount = (Eu_amount * Eu_rate)/100;
    cout<<Eu_amount<<" euros at an exchange rate of "<<Eu_rate<<" is "<<Us_amount<<
    " U.S dollar.";
}
