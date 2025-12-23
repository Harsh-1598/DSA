#include<iostream>
#include<vector>
using namespace std;

string gradeCalculator(int score){
        if (score >= 90) return "A"; //single line needs no brackets
        else if (score >= 80) return "B";
        else if (score >= 70) return "C";
        else if (score >= 60) return "D";
        else return "F";
    }

int max(vector<int> nums){
    int max = nums[0];
    for (int i = 0; i < nums.size(); i++){
        if (max < nums[i]) max = nums[i];
    }
    return max;
}

int min(vector<int> nums){
    int min = nums[0];
    for (int i = 0; i < nums.size(); i++){
        if (min > nums[i]) min = nums[i];
    }
    return min;
}

int sum(vector<int> nums){
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) sum += nums[i];
    return sum;
}

int count(vector<int> nums){
    int count = 0;
    for (int i = 0; i < nums.size(); i++) if (nums[i]>5) count++;
    return count;
}

vector<int> reverseVector(vector<int> vector1){
    vector<int> revVector(vector1.size()); // we have to declare the size before hand to initialise the 0th index or have to add the element using the push_back() function dynamically.
    for (int i=0; i < vector1.size(); i++ ){
        for (int j = vector1.size()-1-i; j>=0 ; j--) revVector[j] = vector1[i];     
    }
    return revVector;
}

bool isPalindrome(vector<int> vector1){
    vector<int> revVector = reverseVector(vector1);
    bool isPalindrom = false;
    if (vector1 == revVector) isPalindrom = true;                
    return isPalindrom;
}

int main(){

    // // Question-1:
    // int age = 22, birth_year =2003;
    // int curr_year = age + birth_year;
    // cout << "Your age is " << age << " and you born in " << birth_year << " The current year is: " << curr_year << endl;

    // // Question-2:
    // string word = "programming";
    // cout << "length: " << word.length() << endl;
    // cout << "first: " << word[0] << endl;
    // cout << "last: " << word[word.length()-1] << endl;
    // word[0] = 'P'; // write in the SINGLE QUOTES 
    // cout << "string after correction: " << word << endl;

    // // Question-3:
    // for (int i = 1; i < 11; i++){
    //     if (i%2==0) cout << " Even:" << i ;
    //     else cout << " Odd:" << i ;
    // }
    
    // // Question-4:
    // vector<int> num = {5,10,15,20,25};
    // for (int i = 0; i < num.size(); i++)  // Traditional Loop 
    // {
    //     cout << num[i] << " ";
    // }
    // cout << endl;
    
    // for (int i : num)  // Ranged Loop
    // {
    //     cout << i << " ";
    // }
    // cout << endl;  
    
    // num.push_back(30);
    // cout << num.size() << " " << num[num.size()-1] << endl;    
    // return 0;
    
    // // Question-5:    
    // vector<int> scores = {95, 82, 76, 65, 45};
    // for (int score : scores) {
    //     cout << "Score " << score << ": Grade " << gradeCalculator(score) << endl;
    // }
    
    // // Question-6:    
    // vector<int> numbers = {3,7,1,9,2,8,5};
    // int maxElement= max(numbers);
    // int minElement= min(numbers);
    // int sumElement= sum(numbers);
    // int countElement= count(numbers);
    
    // cout << maxElement << " " << minElement << " " << sumElement << " " << countElement << endl;
    
    // // Question-7:    
    // string mess = "Hello World Programming";
    // cout << "The total chars: " << mess.length() << endl;
    
    // // For the total Letters:
    // int count =0;
    // for (int i = 0; i < mess.length(); i++)
    // {
    //     if(mess[i]!= ' '){
    //         count++;
    //     }    
    // }
    // cout << "The total letters: " << count << endl;
    
    // // For the total Words:
    // count =1;
    // for (int i = 0; i < mess.length(); i++)
    // {
    //     if(mess[i]== ' '){
    //         count++;
    //     }    
    // }
    // cout << "The total words: " << count << endl;
    
    // // For the replacement word:
    // for (int i = 0; i < mess.length(); i++)
    // {
    //     if(mess[i]== ' '){
    //         mess[i] = '_';
    //     }    
    // }
    // cout << "The replacement word: " << mess << endl;
    
    // // For the lowercase string:
    // for (char& i: mess)  //here '&' is taken as the refrence to the original address without that loop will work but the modification will not work. And took char since we have to modify the char present in the word not the index.
    // {
    //     if (i >='A' && i <= 'Z' ) i+=32;
    // }
    // cout << "The lowercase string: " << mess << endl;
    
    // // Practicing Concept: 
    // numbers = {3,7,1,9,2,8,5};
    // for (int& i: numbers) // Again & is required after the int.
    // {
    //     if (i>5 )
    //     {
    //         i+= 2;
    //     }
    // }
    // for (int i : numbers) {
    //     cout << " " << i << endl;
    // }

    // // Question-8:
    // vector<vector<int>> matrix = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };  // for writing the 2D matrix you have to declare the vector in this way.
    
    // // print the matrix
    // for (int i = 0; i < matrix.size(); i++)
    // {
    //     for (int j = 0; j < matrix.size(); j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    // // sum of the diagonal elements
    // int sum = 0;
    // for (int i = 0; i < matrix.size(); i++)
    // {
    //     for (int j = i; j <= i; j++)
    //     {
    //         sum += matrix[i][j];
    //     }
    // }
    // cout << sum << endl;
    
    // // max elements
    // maxElement = matrix[0][0];
    // for (int i = 0; i < matrix.size(); i++)
    // {
    //     for (int j = 0; j < matrix.size(); j++)
    //     {
    //         if (maxElement < matrix[i][j])
    //         {
    //             maxElement= matrix[i][j];
    //         }
            
    //     }
    // }
    // cout << maxElement << endl;
    
    // // Question-9:

    // // reverseVector
    // vector<int> Vector = {1,2,3,3,2,1};
    // vector<int> revVector = reverseVector(Vector);
    // for (int i = 0; i < revVector.size(); i++)
    // {
    //     cout << revVector[i] << " ";
    // }
    // cout << endl;
    
    // // isPalindrome
    // bool isPalindrom = isPalindrome(Vector);
    // if (isPalindrom)
    // {
    //     cout << "The vector is Palindrome" << endl;
    // } else {
    //     cout << "The vector is not a Palindrome" << endl;
    // }
        
    
    // // Question-10:
    // vector<string> student_names= {"Alice", "Bob", "Charlie", "harsh", "vismay", "Aryan"};
    // vector<int> scores= {85, 92, 78, 95, 88, 99};
    // // 1.
    // for (int i = 0; i < student_names.size(); i++)
    // {
    //     cout << student_names[i] << " : " << scores[i] << " ,";
    // }
    // cout << endl;
    
    // // 2.
    // int max_index=-1;
    // int max_value =scores[0];
    // for (int i = 0; i < scores.size(); i++)
    // {
    //     if (max_value < scores[i] )
    //     {
    //         max_value = scores[i];
    //     }
    // }

    // for (int i = 0; i < scores.size(); i++)
    // {
    //     if (max_value == scores[i])
    //     {
    //         max_index= i;
    //     }
    // }
    
    // cout << student_names[max_index];
    // cout << endl;
    
    // // 3.
    // int sum=0;
    // for (int i = 0; i < scores.size(); i++)
    // {
    //     sum += scores[i];
    // }
    // int avg = sum /scores.size();
    // cout << avg << endl;
    
    // // 4.
    // int count=0;
    // for (int i = 0; i < scores.size(); i++)
    // {
    //     if (scores[i]>= 80)
    //     {
    //         count++;
    //     }
    // }
    // cout << count;
    
    return 0;
}

    
