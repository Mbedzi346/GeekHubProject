#ifndef SPACESHIP_H
#define SPACESHIP_H
class Spaceship{
private:
    double displacement;
    double power;
    double speed;
    double thrust;
    double maxSpeed;
    double stallSpeed;
    int crew;
    int passengers;
public:
    double getDisplacement();
    void setDisplacement(double);
    double getPower();
    void setPower(double);
    double getThrust();
    void setThrust(double);
    double getMaxSpeed();
    void setMaxSpeed(double);
    double getStallSpeed();
    void setStallSpeed(double);
    double getCrew();
    void setCrew(double);
    double getPassengers();
    void setPassengers(double);
        
};
#endif