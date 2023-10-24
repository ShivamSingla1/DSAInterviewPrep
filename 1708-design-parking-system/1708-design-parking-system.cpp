class ParkingSystem {
    vector<int> carSlots= vector<int>(3,0);
public:
    ParkingSystem(int big, int medium, int small) {
        carSlots[0]= big ,
        carSlots[1]= medium,
        carSlots[2]= small;
    }
    
    bool addCar(int carType) {
        return carSlots[carType-1]-- <= 0 ? false : true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */