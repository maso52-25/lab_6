#include <iostream>
using namespace std;
int main(){
    int rows,cols;

    cout << "Enter the number of rows(maximum 3): ";
    cin >> rows;
    cout <<"Enter the number of columns(maximum 3): ";
    cin >> cols;
    while(rows>2|| cols>3|| rows<1||cols<1){
        double **array;
         array = new double*[rows];

        for(int i=0;i<rows;i++){
            array[i]=new double[cols];
        }

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout << "Enter the value for array["<<i<<"]["<<j<<"]: ";
                cin >> array[i][j];
            }
        }

        cout<<"The values in the array are: "<<endl;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout << array[i][j] << " ";
            }
            cout << endl;
        }
        for(int i=0;i<rows;i++){
            delete[] array[i];
        }
        delete[] array;
    }


    return 0;
}