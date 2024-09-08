#include <iostream>
#include <string>
using namespace std ;

bool isanagram(string unordered_string , string ordered_string){
	
	string anagram_string = "";
	// Base case 
	if (unordered_string.length() != ordered_string.length()){
		return false ;
	}
	
	for (int i = 0 ; i < ordered_string.length(); i++){
		for (int j = 0 ; j < unordered_string.length() ; j++){
			if (ordered_string[i] == unordered_string[j]){
				anagram_string += ordered_string[i];
				break ;
			}
		}
	}
	
	if (ordered_string == anagram_string){
		return true;
	}else{
		return false;
	}
}

int main (){
	
	string unordered_string = "bored";
	string ordered_string = "robed";
	
	int anagram = isanagram(unordered_string,ordered_string);
	if (anagram == true){
		cout<<unordered_string<<" and "<<ordered_string<<" are Anagram."<<endl;
	}else 
		cout<<unordered_string<<" and "<<ordered_string<<" are not Anagram."<<endl;
	
	
	return 0 ;

}
