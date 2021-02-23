
#ifndef ВЕНТИЛЯТОР_H
#define ВЕНТИЛЯТОР_H

#include <vector>



/**
  * class Вентилятор
  * 
  */

class Вентилятор
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Вентилятор();

  /**
   * Empty Destructor
   */
  virtual ~Вентилятор();

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

  float мощность;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of мощность
   * @param value the new value of мощность
   */
  void setМощность(float value)
  {
    мощность = value;
  }

  /**
   * Get the value of мощность
   * @return the value of мощность
   */
  float getМощность()
  {
    return мощность;
  }

  void initAttributes();

};

#endif // ВЕНТИЛЯТОР_H
