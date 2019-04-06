// Name: Mark Delk
//
// TwoDayPackage class definition.

#ifndef two_day_package_H
#define two_day_package_H

#include "package.hpp"

namespace package {

class TwoDayPackage : public Package {
  protected:

  long double flat_fee;

  public:

  // Constructor
  explicit TwoDayPackage(
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
    const long double weight,
    const long double shipping_cost_per_ounce,
    const long double flat_fee
  );

  // Getters
  long double get_flat_fee() const;

  // Printing
  const std::string to_s() const;
  friend std::ostream &operator<<(std::ostream &output, const TwoDayPackage &p);

  long double calculate_cost() const;
};

} // namespace package

#endif
