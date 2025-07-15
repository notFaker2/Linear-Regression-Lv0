#include<bits/stdc++.h>
#include<fstream>
#include<random>
using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>distrib(1,1000);
    ofstream file("data.csv");
    file<<"X,Y\n";
    for(int i=1;i<=1000;i++){
        int x=distrib(gen),y;
        y=2*x+2;
        file<<x<<","<<y<<"\n";
    }
    file.close();
    return 0;
}
