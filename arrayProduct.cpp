#include<iostream>
#include<vector>
using namespace std;

vector<int> ArrayProduct(vector<int> &v){
    vector<int> newArray(v.size()); 
    
    for(int i = 0; i < v.size(); i++){
        int n = v[i];
        int product = 1;

        while(n > 0){
            int digit = n % 10; 
            if(digit != 0) 
                product *= digit;
            n /= 10; 
        }

        newArray[i] = product; 
    }

    return newArray;
}

int main (){
    vector<int> n;
    int m;
    
    cout << "Enter number of elements in array: ";
    cin >> m;

    n.resize(m); 

    for(int i = 0; i < m; i++){
        cout << "Enter element "<< i+1<< ": ";
        cin >> n[i]; 
    }

    vector<int> arr = ArrayProduct(n);

    for(int i = 0; i < m; i++){
        cout << arr[i] << " ";
    }
   
    return 0;
}
