#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers {};
    char selection {};

    do{
        cout<<"P - Print numbers"<<endl;
        cout<<"A - Add a number"<<endl;
        cout<<"M - Display mean of the numbers"<<endl;
        cout<<"S - Display the smallest number"<<endl;
        cout<<"L - Display the largest number"<<endl;
        cout<<"Q - Quit"<<endl;
        cout<<"Enter option: ";
        cin>>selection;

        if(selection =='P' || selection =='p'){
            if (numbers.size() == 0)
            {
                cout<<"[] - empty :<"<<endl;
            }else{
                cout<<"[ ";
                for (int i = 0; i < numbers.size(); i++){
                    cout<< numbers[i]<< " ";
                }
                cout<<"]"<<endl;
            }
        }
        
        else if(selection =='A' || selection =='a'){
            int num {};
            cout<<"Type a number: ";
            cin>>num;
            numbers.push_back(num);
            cout<< "Your array is currently: [ ";
            for (int i = 0; i < numbers.size(); i++){
                cout<< numbers[i]<< " ";
            }
            cout<<"]"<<endl;
        }
        
        else if(selection =='M' || selection =='m'){
            if(numbers.size() == 0){
                cout<<"Is empty"<<endl;
            }else{
                int sum {};
                for (int i = 0; i < numbers.size(); i++){
                    sum += numbers[i];
                }
                cout<<"sum: "<<sum<<endl;
                cout<<"size: "<<numbers.size()<<endl;
                cout<<"mod: "<<static_cast<double>(sum) / numbers.size()<<endl;
            }
        }

        else if(selection =='S' || selection =='s'){
            int smallest = numbers[0];
            for (int i = 1; i < numbers.size(); i++){
                if (numbers[i]<smallest){
                    smallest = numbers[i];
                }
            }
            cout<<"smallest: "<<smallest<<endl;
        }
        else if(selection =='L' || selection =='l'){
            int largest = numbers[0];
            for (int i = 1; i < numbers.size(); i++){
                if (numbers[i]>largest){
                    largest = numbers[i];
                }
            }
            cout<<"largest: "<<largest<<endl;
        }
        else if(selection =='Q' || selection =='q'){
            cout<<endl;
        }
    }while(selection !='q' && selection !='Q');

    cout<<endl;
    return 0;
}
