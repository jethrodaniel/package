#ifndef overnight_package_H
#define overnight_package_H

#include "package.hpp"

namespace package {

class OvernightPackage : public Package {
  private:

  long double additional_fee_per_ounce;

  public:

  // Constructor
  explicit OvernightPackage(
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
    const long double cost_to_ship,
    const long double additional_fee_per_ounce
  );

  // Getters
  long double get_additional_fee_per_ounce() const;

  // Printing
  const std::string to_s() const;
  friend std::ostream &operator<<(std::ostream &output, const OvernightPackage &p);
};

} // namespace package

#endif
