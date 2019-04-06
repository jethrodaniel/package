// Name: Mark Delk
//
// TwoDayPackage class member functions.
//
// Also defines one non-member `<<` operator overload for printing

#include "package.hpp"
#include "two_day_package.hpp"

namespace package {

// Constructor
TwoDayPackage::TwoDayPackage(
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
  this->flat_fee = flat_fee;
}

// Getters
long double TwoDayPackage::get_flat_fee() const {
  return this->flat_fee;
}

// Printing, and outputing as a string
const std::string TwoDayPackage::to_s() const {
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
      << "cost to ship ($/oz): " << get_shipping_cost_per_ounce() << "\n"
      << "flat fee ($): " << get_flat_fee() << "\n"
      << "TOTAL ($): " << calculate_cost() << "\n";

  return out.str();
}

std::ostream &operator<<(std::ostream &output, const TwoDayPackage &p) {
  output << p.to_s();
  return output;
}

} // namespace package
