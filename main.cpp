#include <iostream>
#include <vector>
#include <string>

int main() {
  
  // whale, whale, whale
  // what have we got here?
  
  std::string input = "Turpentine and turtles."; // sample input

  std::vector<char> vowels;

  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');
  
// whales don't consider 'y' a vowel
  
  std::vector<char> whale_talk;

  // check if each of the characters is a vowel
  for (int i = 0; i < input.size(); i++) {
    
    for (int j = 0; j < vowels.size(); j++) {
// double the e's and u's
      if (input[i] == vowels[j]) {

        whale_talk.push_back(input[i]);
       
        if (input[i] == 'e' || input [i] == 'u') {

        whale_talk.push_back(input[i]); 
        
        }
      
      }
      
    }
  
  }
  
  for (int k = 0; k < whale_talk.size(); k++) {
    
    std::cout << whale_talk[k];
    
  }
  
  std::cout << "\n";
  
}

// the output for this one, (using turpentine and turtles as input), the result should be 'uueeieeauuee'
