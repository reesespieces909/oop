#ifndef CAR_H
#define CAR_H

class Car {
public:
    Car();
    Car(int price);

    int get_price() const;
    int get_emissions() const;
    void set_price(int price);
    virtual void drive(int kms); // Declare as virtual

    virtual ~Car(); // Virtual destructor for proper polymorphism support

protected: // Change to protected access
    int price;
    int emissions;
};

#endif // CAR_H
