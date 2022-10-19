#include <iostream>
#include <string>

int main()
{
    // Модель автомобіля
    std::string carBrandName = "Deo Lanos";
    // Об'єм двигуна 
    unsigned int EngineCapacity = 1300;
    // Рік випуска
    unsigned int YearOfManufacture = 2012;
    // Кінські сили
    unsigned short int HorsePower = 43;
    // Чи ще випускається?
     bool produced = false;
    // Країна виробник автомобіля
    std::string producingCountry = "Incheon, Korea";
    // Тип кузова
    std::string degree = "Sedan";
    
  
   
    unsigned int totalMemoryInBytes = sizeof(carBrandName) +
        sizeof(EngineCapacity) +
        sizeof(YearOfManufacture) +
        sizeof(HorsePower) +
        sizeof(produced) +
        sizeof(producingCountry) +
        sizeof(degree); 

    
    
    std::cout << "Car brand:\t\t" << carBrandName << std::endl;
    std::cout << "Engine capacity:\t" << EngineCapacity << std::endl;
    std::cout << "Year of manufacture:\t\t" << YearOfManufacture << std::endl;
    std::cout << "Horse power:\t\t" << HorsePower << std::endl;
    std::cout << "produced:\t" << ((produced) ? "Yes" : "No") << std::endl;
    std::cout << "Producing country:\t\t\t" << producingCountry << std::endl;
    std::cout << "Body type:\t" << degree << std::endl;
    std::cout << "Zagalniy ob`em vukorustannoi pam`ati (v baitax):\t" <<
        totalMemoryInBytes << std::endl;
}