class Solution {
public:
string roman(int n){
    string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
    string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string hund[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string tho[]={"","M","MM","MMM"};
    return tho[n/1000]+hund[(n%1000)/100]+tens[(n%100)/10]+ones[n%10];
}
    string intToRoman(int n) {
        return roman(n);
        
    }
};