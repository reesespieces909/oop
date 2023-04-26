Appliance::Appliance() : powerRating_(0), isOn_(false) {}

Appliance::Appliance(int powerRating) : powerRating_(powerRating), isOn_(false) {}

int Appliance::get_powerRating() const

{

return powerRating_;

}

void Appliance::set_powerRating(int powerRating)

{

powerRating_ = powerRating;

}


bool Appliance::get_isOn() const

{

return isOn_;

}

void Appliance::set_isOn(bool isOn)

{

isOn_ = isOn;

}

void Appliance::turnOff()

{

isOn_ = false;

}

void Appliance::turnOn()

{

isOn_ = true;

}

double Appliance::getPowerConsumption()

{

return 0.0;

}