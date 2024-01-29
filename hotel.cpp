#include <iostream>
#include <vector>
#include <string>

class HotelRoom {
private:
    std::string name;
    std::string location;
    std::vector<std::pair<std::string, double>> availableRooms; 
    std::vector<std::pair<std::string, std::pair<std::string, std::string>>> bookings; 
    
    
public:
    HotelRoom(std::string hotelName, std::string hotelLocation) : name(hotelName), location(hotelLocation) {}
    
        void addRoom(std::string roomType, double price) {
      
    }


