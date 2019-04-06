#ifndef package_H
#define package_H

#include <string>
#include <ostream>
#include <sstream>

namespace package {

class Package {
  private:

  std::string sender_name,
              sender_address,
              sender_city,
              sender_state,
              sender_zip,

              receiver_name,
              receiver_address,
              receiver_city,
              receiver_state,
              receiver_zip;

  long double weight,       // In ounces
              cost_to_ship; // Per ounce

  public:

  // Constructor
  explicit Package(
   const std::string sender_name,
   const std::string sender_address,
   const std::string sender_city,
   const std::string sender_state,
   const std::string sender_zip,
   const std::string receiver_name,
   const std::string receiver_address,
   const std::string receiver_city,
   const std::string receiver_state,
   const std::string receiver_zip,
   long double weight,
   long double cost_to_ship
  );

  // Getters
  const std::string get_sender_name() const;
  const std::string get_sender_address() const;
  const std::string get_sender_city() const;
  const std::string get_sender_state() const;
  const std::string get_sender_zip() const;

  const std::string get_receiver_name() const;
  const std::string get_receiver_address() const;
  const std::string get_receiver_city() const;
  const std::string get_receiver_state() const;
  const std::string get_receiver_zip() const;

  long double get_weight() const;
  long double get_cost_to_ship() const;

  // Printing
  const std::string to_s() const;
  friend std::ostream &operator<<(std::ostream &output, const Package &p);


  long double calculate_cost() const;
};

} // namespace package

#endif
