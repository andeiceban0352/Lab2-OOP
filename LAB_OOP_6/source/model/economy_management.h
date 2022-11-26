#pragma once
#include "iostream"
#include "taxy_company.h"
using namespace std;

class Economy_Management:Taxi_Company
{
public:
    float income = 0;
};

class Income:public Economy_Management
{
public:
    int ride_price;
    Income(){
    	ride_price = int(rand() % 200);
    }
    
    float calculate_income(int ride_price){
        income = income + ride_price;
        cout << "rideprice : " << ride_price << "       income : " << income << endl;
        return int(income);
    }

    

};


