#include<iostream>
#include<vector>
using namespace std;
void sayhello(){
    cout << "Hello from C++" << endl;
}

int add(int a, int b){
    int sum = a+b;
    return sum;
} 

string greetings(string name){
    return "Hello, " + name + "!";
}

int max(vector<int> num){
    int max = num[0]; // assuming the first element is the max

    for (int i = 0; i < num.size(); i++)
    {
        if (max < num[i])
        {
            max= num[i];
        }
    }
    return max;
    
}

int main(){
    
    sayhello();

    int sum = add(5, 10);
    cout << "The sum is: " << sum << endl;

    string greeting = greetings("Harsh");
    cout << greeting << endl;

    vector<int> numbers = {2,5,8,1,34,4,47,3};
    int maximum = max(numbers);
    cout << maximum << endl;
    
    return 0;
}