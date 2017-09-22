/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agonzalez
 *
 * Created on September 22, 2017, 1:57 PM
 */

#include <string> 
#include <iostream>
int main() {
std::string sentence; 
std::getline(std::cin, sentence);
// manipulate the sentence here
/*the for loops checks each character if it;s a space. if so it will check if the next one is 
 * a space. If so it will delete the extra space*/
for(int i =0; i < sentence.size(); i++)
{
    if(sentence.at(i) == ' ' && sentence.at(i + 1) == ' ')
    {
        sentence.erase(i, 1);
        i--;
    }
    
    
}
std::cout << sentence << "\n"; 


}


