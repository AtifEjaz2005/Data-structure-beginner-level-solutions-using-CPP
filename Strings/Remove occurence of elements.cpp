// romove occurence of AB and C 
//input = CBAABCAB , output = BA
#include <iostream>
#include <string>
using namespace std ;

string removeOccurence(string str){
//	 Base case 
	if (str.length() == 0 ){
		return 0 ;
	}
	
    int itr = 0 ;
	string result = "";
	
	cout<<"str length is : "<<str.length()<<endl;
	while (itr < str.length()){
		if (str[itr] == 'C'){
			itr++;
		}
		else if (str[itr] == 'A' && str[itr+1] == 'B'){
 			itr+=2;
		}
 		else {
			result += str[itr];
			itr++;
		}			
	}
 	return result;
}

int main (){

	string str = "CBAABCAB";
	string resultant_str = removeOccurence(str);
	cout<<"After removing the occurence of C and AB, the string is : "<<resultant_str<<endl;
	return 0 ;

}
