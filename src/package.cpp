// Name: Mark Delk
//
// Package class member functions.
//
// Also defines one non-member `<<` operator overload for printing

#include "package.hpp"

namespace package {

// Constructor
Package::Package(
  std::string sender_name,
  std::string sender_address,
  std::string sender_city,
  std::string sender_state,
  std::string sender_zip
) {
  this->sender_name = sender_name;
  this->sender_address = sender_address;
  this->sender_city = sender_city;
  this->sender_state = sender_state;
  this->sender_zip = sender_zip;
}

// Getters

const std::string Package::get_sender_name() const {
  return this->sender_name;
}

const std::string Package::get_sender_address() const {
  return this->sender_address;
}

const std::string Package::get_sender_city() const {
  return this->sender_city;
}

const std::string Package::get_sender_state() const {
  return this->sender_state;
}

const std::string Package::get_sender_zip() const {
  return this->sender_zip;
}

// Printing, and outputing as a string
const std::string Package::to_s() const {
  std::ostringstream out;

  out << "sender name: " << get_sender_name() << "\n"
      << "sender address: " << get_sender_address() << "\n"
      << "sender city: " << get_sender_city() << "\n"
      << "sender state: " << get_sender_state() << "\n"
      << "sender zip: " << get_sender_zip() << "\n";

  return out.str();
}

std::ostream &operator<<(std::ostream &output, const Package &p) {
  output << p.to_s();
  return output;
}

} // namespace package
