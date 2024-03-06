//This code 100% works... maybe
/*Rubric -
Have more than one variable and use them
Implement a if/else
Working function
Comments
*/
#include<iostream>
#include<vector>
#include<string>

string name = "The name is Jim Bob" //this is a string varible
string sad = "Jim bob only has 99 dollars :c" //this is a string varible
string happy = "Jim bob has 100 :D" //this is a string varible
int money = 99 //this is a integer variable

//function
int main(){ 

//prints the string "name"
cout << name;

//compares if the "money" variable is high or lower than 100"
if (money <= 100) {
    //prints the string "sad"
    cout << sad
} else {
    //prints the string "happy"
    cout << happy
}

return
}
//among us 