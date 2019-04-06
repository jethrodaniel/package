// Name: Mark Delk
//
// OvernightPackage class member functions.
//
// Also defines one non-member `<<` operator overload for printing

#include "package.hpp"
#include "overnight_package.hpp"

namespace package {

// Constructor
OvernightPackage::OvernightPackage(
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
  const long double additional_fee_per_ounce
) : Package(sender_name,
            sender_address,
            sender_city,
            sender_state,
            sender_zip,
            receiver_name,
            receiver_address,
            receiver_city,
            receiver_state,
            receiver_zip,
            weight,
            shipping_cost_per_ounce)
{
  this->additional_fee_per_ounce = additional_fee_per_ounce;
}

// Getters
long double OvernightPackage::get_additional_fee_per_ounce() const {
  return this->additional_fee_per_ounce;
}

long double OvernightPackage::calculate_cost() const {
  return this->weight * (this->shipping_cost_per_ounce + this->additional_fee_per_ounce);
}

// Printing, and outputing as a string
const std::string OvernightPackage::to_s() const {
  std::ostringstream out;

  out << "sender name: " << get_sender_name() << "\n"
      << "sender address: " << get_sender_address() << "\n"
      << "sender city: " << get_sender_city() << "\n"
      << "sender state: " << get_sender_state() << "\n"
      << "sender zip: " << get_sender_zip() << "\n"
      << "receiver name: " << get_receiver_name() << "\n"
      << "receiver address: " << get_receiver_address() << "\n"
      << "receiver city: " << get_receiver_city() << "\n"
      << "receiver state: " << get_receiver_state() << "\n"
      << "receiver zip: " << get_receiver_zip() << "\n"
      << "weight (oz): " << get_weight() << "\n"
      << "shipping per ounce ($/oz): " << get_shipping_cost_per_ounce() << "\n"
      << "additional fee per ounce ($/oz): " << get_additional_fee_per_ounce() << "\n"
      << "TOTAL ($): " << calculate_cost() << "\n";

  return out.str();
}

std::ostream &operator<<(std::ostream &output, const OvernightPackage &p) {
  output << p.to_s();
  return output;
}

} // namespace package
