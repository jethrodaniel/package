#include "package.hpp"

namespace package {

// Constructor
Package::Package(
  std::string sender_name,
  std::string sender_address
) {
  this->sender_name = sender_name;
  this->sender_address = sender_address;
}

const std::string Package::get_sender_name() const {
  return this->sender_name;
}

const std::string Package::get_sender_address() const {
  return this->sender_address;
}

// Printing, and outputing as a string
const std::string Package::to_s() const {
  std::ostringstream out;

  out << "sender name: " << get_sender_name() << "\n"
      << "sender address: " << get_sender_address() << "\n";

  return out.str();
}

std::ostream &operator<<(std::ostream &output, const Package &p) {
  output << p.to_s();
  return output;
}

} // namespace package
