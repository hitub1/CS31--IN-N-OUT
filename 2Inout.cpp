#include <string>
#include <cassert>
#include <cctype>
using namespace std;

// helpful handy function
int extractNumber(string s, size_t& index);



int main()
{
    size_t i = 0;
    assert(extractNumber("123abc", i) == 123);
    assert(i == 3);
    i = 0;
    assert(extractNumber("   123abc", i) == -1);
    assert(i == 0);
    i = 0;
    assert(extractNumber("000123", i) == -1);
    assert(i == 0);
    assert(isValidOrderString("c") == false);
    // assert(isValidOrderString("1:1 zzz") == false);
    // assert(isValidOrderString("100:1") == true);
    // assert(isValidOrderString("10:1_20:1_30:2") == true);
    // assert(isValidOrderString("40:1_10:2_1:3") == true);
    assert(isValidOrderString("40:C_10:V_1:5") == true),
        assert(isValidOrderString("40:1_10:2") == true);
    assert(isValid0rderString("40:C_10:V") == true);
    assert(isValidOrderString("40 (n) == false);
        assert(isValidOrderString("02:1_3:3_2:C") == false)
        assert(isValidOrderString("0:1_3:C") == false);
    assert(isValidOrderString("2:3_4:S_-4:C") == false);
    assert(isValidOrderString("2:3_4:Swe 7:2")
        cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Total Cost:" << cost(order);
    return(0);
}

int extractNumber(string s, size_t& index)
{
    // track the integer value found
    int quantity(-1);

    // do we have more characters to read??
    // this prevents the function from returning the default quantity value (zero)
    // when no characters are actually read from the airport string at all

    // the number should be made up of digits
    while (index < s.length() && // s.length is 3 // 4
        s.at(index) >= '0' && // 1:1 .at(1) , '1:1'[1]==':' , : >=0, 1, S.AT = 0 !!!
        s.at(index) <= '9') // . 1 GRWEAT / LESS than 9
    {
        if (quantity == -1)
        {
            quantity = 0;

        }
        // extract one digit and add it to the cumulative value held in quantity
        int digit = s.at(index) - '0'; // 1-0= 1 . quantity is 1
        quantity = quantity * 10 + digit; // quan =1, 1x10+2, 
        // if what we find is a beginning zero or many leading zero it is invali
        if (quantity == 0) //1 =0, 12=0 false ,
        {
            quantity = -1;// 
            break;
        }
        index = index + 1; // index = 0 +1 , index =2 in 2nd loop
    }//extractNumber('1:1', 0) 
    return(quantity);
}// value of quantity is 1. 
//

bool isValidOrderString(string orders) {
    if (orders == "")
        return false;
    if (!isdigit(orders[0]))
        return false;
   
    int position = 0;
    int quantity = 0;
    double price = 0.0;
    orders = '1:1'
        // this while loop is infinite!
       /* while (position < orders.length()) {
        }*/

    for (int i = 0; i < orders.size(); i++)

    {
        if (orders[i] != 'C' || orders[i] != 'V' || 
            orders[i] != 'S' || orders[i] != ':' || 
            orders[i] != '_' || !isdigit(orders[i]))
            return false;
    }
    string order = orders.substr(i, j - i);
    if (validFormat(order) == false) return false;
    if (isdigit(order.at(0)) == false);
    size_t index = 0;
    int amount = extractNumber(order, index);
    if (amount <= 0) return false;
    total += amount;
    if (total > 50) return false;
    i = j;
    if ()
}
while (position < orders.length()) {
    // 1:1, 1:2, 2:1, 2:2, 1:1_, 1:2_, 
    if isdigit orders.at(position) && orders.at(position + 1) == ':';&& isdigit orders.at(position + 2)
        && orders.at(posotion + 3)

        positions += 4;

    if isdigit orders.at(position) && orders.at(position ? +1) == ':' && isdigit orders.at(position + 2) && orders.at(positions + 3) &&
        position + = +4;

}

return true;

bool validFormat(string order) {
    string::size_type index = -1;
    for (string::size_type i = 0; i < order.size(); i++) {
        if (order.at(i) == ':')index = i;
    }
    if (index == -1) return false;
    string firsthalf = order.substr(0, index); string secondhalf == order.subsrt(index + 1);
    if (secondhalf != "1" && secondhalf != "2" && secondhalf != "3" && secondhalf != "S" && secondhalf != " V"&&)
        return false;
    for (string::size_type i = 0; i < firsthalf.size(); i++) {
        if (isdigit(firsthalf.at(i)) == false) return false;
    }
    return true;



//string storeDigit = orders[i]
//                while (orders[j] != ':' && j < orders.size()) {
//                    if !isdigit(orders[j])
//                        return false;
//                    storeDigit += orders[j]
//                        j++          
//        }
  //int digit = stoi(storeDigit) 
if digit > 50
return false;
string order = orders






