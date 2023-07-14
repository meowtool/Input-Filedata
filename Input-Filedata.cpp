#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
vector<double> Input(string FILE_NAME);

int main(){
    vector<double> data;
    data=Input("SAMPLE.dat");
    for(int i=0;i<data.size();i++){
        cout<<data[i]<<endl;
    }
    return 0;
}

vector<double> Input(string FILE_NAME)
{
    ifstream fin;
    fin.open(FILE_NAME);
    vector<double> x;
    double temp;
    while(!fin.eof()){
        fin>>temp;
        x.push_back(temp);
    }
    fin.close();
    return x;
}
