
#ifndef ПУХ_H
#define ПУХ_H

#include <vector>



/**
  * class Пух
  * 
  */

class Пух
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Пух();

  /**
   * Empty Destructor
   */
  virtual ~Пух();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //

protected:
  // Static Protected attributes
  //  

  // Protected attributes
  //  


  // Protected attribute accessor methods
  //  


  // Protected attribute accessor methods
  //

private:
  // Static Private attributes
  //  

  // Private attributes
  //  

  float высота;
  float масса;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of высота
   * @param value the new value of высота
   */
  void setВысота(float value)
  {
    высота = value;
  }

  /**
   * Get the value of высота
   * @return the value of высота
   */
  float getВысота()
  {
    return высота;
  }

  /**
   * Set the value of масса
   * @param value the new value of масса
   */
  void setМасса(float value)
  {
    масса = value;
  }

  /**
   * Get the value of масса
   * @return the value of масса
   */
  float getМасса()
  {
    return масса;
  }

  void initAttributes();

};

#endif // ПУХ_H
