#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::vector<double> Thomas(std::vector<double> b, std::vector<double> a, std::vector<double> c, std::vector<double> d){
    int N = b.size();
    std::vector<double> beta(N);
    std::vector<double> y(N);
    std::vector<double> l(N);
    std::vector<double> x(N);
    beta[0] = b[0];
    y[0] = d[0];
    for(int j=1; j<N; j++){
        l[j] = a[j] / beta[j-1];
        beta[j] = b[j] - l[j] * c[j-1];
        y[j] = d[j] - l[j] * y[j-1];
    }
    x[N-1] = y[N-1] / beta[N-1];
    for(int j=N-2; j>-1; j--){
        x[j] = (y[j] - c[j] * x[j+1]) / beta[j];
    }
    return x;
}

int main(){
    int row = 4;
    std::string data_file = "ThomasTestData.txt";
    std::vector<double> data;

    std::ifstream infile(data_file, std::ios::in);
    double value;

    while(infile >> value){
        data.push_back(value);
    }

    int N = data.size()/4;

    std::vector<double> a;
    std::vector<double> b;
    std::vector<double> c;
    std::vector<double> d;

    for(int i=0; i<N; i++){
        a.push_back(data[N*0+i]);
        b.push_back(data[N*1+i]);
        c.push_back(data[N*2+i]);
        d.push_back(data[N*3+i]);
    }

    std::vector<double> x = Thomas(b, a, c, d);
    for(int i=0; i<N; i++){
        std::cout << x[i] << std::endl;
    }
    return 0;
}