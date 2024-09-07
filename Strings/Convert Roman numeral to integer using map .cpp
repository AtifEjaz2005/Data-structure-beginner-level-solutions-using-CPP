#include <iostream>
#include <string>
#include <map>
using namespace std ;

int convertRomanToInt(string str1){
	
	int sum = 0 ;
//	Base Case
	if (str1.length() == 0 ){
		cout<<"No Roman numeral string found."<<endl;
	}
//	Roman Numeral Map Creation 
	map < char , int > romanNumeralMap ; 
	romanNumeralMap['I'] = 1 ; 
	romanNumeralMap['V'] = 5 ;
	romanNumeralMap['X'] = 10 ;
	romanNumeralMap['L'] = 50 ;
	romanNumeralMap['C'] = 100 ;
	romanNumeralMap['D'] = 500 ;
	romanNumeralMap['M'] = 1000 ;
	
	for (int itr = 0 ; itr < str1.length() ; itr++){
		char ch = str1[itr];
		if (romanNumeralMap.find(ch) != romanNumeralMap.end()){
			if (romanNumeralMap[ch] < romanNumeralMap[str1[itr+1]]){
				sum = sum + (romanNumeralMap[str1[itr+1]] - romanNumeralMap[ch]);
				itr++;
			}else {
				sum += romanNumeralMap[ch];
			}
		} 		
	}
	return sum ; 	
}
int main (){
	
	string str1 = "LXLVI";
	int sum = convertRomanToInt(str1);
	cout<<"Sum of Roman Numeral Numbers is : "<<sum;
	
	return 0 ;

}
