
#ifndef ДУПЛО_H
#define ДУПЛО_H

#include <vector>



/**
  * class Дупло
  * 
  */

class Дупло
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Дупло();

  /**
   * Empty Destructor
   */
  virtual ~Дупло();

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

  void initAttributes();

};

#endif // ДУПЛО_H
