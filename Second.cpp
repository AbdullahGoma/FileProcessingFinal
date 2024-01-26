#include <iostream>
#include <cstring>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::fstream;
using std::ios;
using std::string;

class Read
{
    fstream ifile;
    fstream ofile;
    char buff[40];
    
    public:
    Read(){
        cout << "Enter input file name : " << endl;
        cin >> buff;
        ifile.open(buff,ios::in);

        cout << "Enter output file name : " << endl;
        cin >> buff;
        ofile.open(buff,ios::out);
    }
    void run(){
        int count = 0;
        string Arr[3];
        while(!ifile.eof()){
            ifile.getline(buff,41);
            cout << buff << endl;
            if(strlen(buff)){
                //ofile << buff << "\n";
                Arr[count] = buff;
                count++;
            }
        }

        for(int i = 0;i < count;i++){
            cout << Arr[i] << endl;
        }
            cout << "==========================" << endl;

        for(int i = 0;i < count;i++){
            for(int j = i+1;j < count;j++){
                if(Arr[i] > Arr[j]){
                    string temp = Arr[i];
                    Arr[i] = Arr[j];
                    Arr[j] = temp;
                }
            }
        }
        for(int i = 0;i < count;i++){
            cout << Arr[i] << endl;
            ofile << Arr[i] << "\n";

        }
    }

};

int main(){
    Read waaa;
    waaa.run();
    return 0;
}