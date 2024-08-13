#include <iostream>

int main(){

    int int_data{33};
    double Data_double{55};

    //References
    int& ref_int_data{int_data};
    double& ref_double_data{Data_double};

    //Print stuff out
    std::cout << "int_data : " << int_data << std::endl;
    std::cout << "&int_data(Address)  : " << &int_data << std::endl;
    std::cout << "Data_double : " << Data_double << std::endl;
    std::cout << "&Data_double(Address) : " << &Data_double << std::endl;

    std::cout << "=======================" << std::endl;

    std::cout << "ref_int_data : " << ref_int_data << std::endl;
    std::cout << "&ref_int_data(Address) : " << &ref_int_data << std::endl;
    std::cout << "ref_double_data : " << ref_double_data << std::endl;
    std::cout << "&ref_double_data(Address) : " << &ref_double_data << std::endl;

    int_data = 111;
    Data_double = 67.2;


    //Print stuff out
    std::cout << std::endl;
    std::cout << "int_data : " << int_data << std::endl;
    std::cout << "&int_data(Address): " << &int_data << std::endl;
    std::cout << "Data_double : " << Data_double << std::endl;
    std::cout << "&Data_double(Address) : " << &Data_double << std::endl;

    std::cout << "=======================" << std::endl;

    std::cout << "ref_int_data : " << ref_int_data << std::endl;
    std::cout << "&ref_int_data(Address) : " << &ref_int_data << std::endl;
    std::cout << "ref_double_data : " << ref_double_data << std::endl;
    std::cout << "&ref_double_data (Address): " << &ref_double_data << std::endl;


    ref_int_data = 1012;
    ref_double_data = 1000.45;


   //Print stuff out
    std::cout << std::endl;
    std::cout << "int_data : " << int_data << std::endl;
    std::cout << "&int_data(Address) : " << &int_data << std::endl;
    std::cout << "Data_double : " << Data_double << std::endl;
    std::cout << "&Data_double(Address) : " << &Data_double << std::endl;

    std::cout << "=======================" << std::endl;

    std::cout << "ref_int_data : " << ref_int_data << std::endl;
    std::cout << "&ref_int_data(Address) : " << &ref_int_data << std::endl;
    std::cout << "ref_double_data : " << ref_double_data << std::endl;
    std::cout << "&ref_double_data(Address) : " << &ref_double_data << std::endl;
    
    return 0;
}