#include <iostream>
#include <cctype>


//TASK A
std::string printRange(int left, int right, std::string& count){
    //std::string count;  //string ??
    if (left < right){
        if (count == ""){
            count += std::to_string(left) + ' ';
        }else{
            //std::cout << count;
            std::cout << left << ' ' << printRange(left+1, right, count);
        }
    }
    return count;
}

//TASK B
int sumRange(int left, int right){
    if (left < right){
        return left + sumRange(left+1,right);
    }else{
        return right;
    }
}

//HELPER
//TASK C
int sumArray(int* arr, int size){
    if (size <= 0){
        return 0;
    }
    return (sumArray(arr, size - 1) + arr[size - 1]);
}


//TASK D
bool loop(std::string t, int num){
    bool static result = true;  // against
    if (num < t.size()){
        if (!isalpha(t[num]) && !isdigit(t[num])){
            //std::cout << "false " << std::endl;
            result = false;
            return false;
        }
        else{
            result = true;
            //std::cout << "true " << std::endl;
            loop(t, num+1);
        }
    }
    return result;
}

bool isAlphanumeric(std::string s){
    int num = 0;
    if (s == "") return true;
    return loop(s,num);
}

//TASK E
bool openended(std::string pair, int count){
    bool static result = true; int static many = 0; // against
    if (count < pair.size()){
        if (pair[count] == '('){
            many += 1;
            openended(pair, count+1);
        }
        else if (pair[count] == ')'){
            many -= 1;
            openended(pair, count+1);
        }
        else{
            result = false;
            return false;
        }
    }
    if (many == 0){
        result = true;
        return true;
    }
    else{
        result = false;
        return false;
    }
    return result;
}

bool nestedParens(std::string s){
    return openended(s, 0);
}