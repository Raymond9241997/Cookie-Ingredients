#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	float butter = .5;
	float sugar = 1.5;
	float flour = 2.75;
	
	
	float amount;
	float amount_ofsugar;
	float amount_ofbutter;
	float amount_offlour;
	
	
	cout<<" How MAny Cookies You Want?"<<endl;
	cin>> amount ;
	cout<<"BET!";
	
	amount_ofsugar = (amount * sugar)/amount;
	amount_ofbutter = (amount * butter)/amount;
	amount_offlour = (amount * flour)/amount;
	
	cout<< setprecision(2) << fixed;
	cout<<"you need "<< amount_ofsugar <<" grams sugar"<<endl;
		cout<<"you need "<< amount_offlour <<" tb spoons flour"<<endl;
			cout<<"you need "<< amount_ofbutter <<" stick of butter"<<endl;
	
	
	
	return 0;
	
	
	
}
