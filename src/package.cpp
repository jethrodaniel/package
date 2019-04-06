// Name: Mark Delk
//
// Package class member functions.
//
// Also defines one non-member `<<` operator overload for printing

#include "package.hpp"

namespace package {

// Constructor
Package::Package(
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
  const long double shipping_cost_per_ounce
) {
  this->sender_name = sender_name;
  this->sender_address = sender_address;
  this->sender_city = sender_city;
  this->sender_state = sender_state;
  this->sender_zip = sender_zip;
  this->receiver_name = receiver_name;
  this->receiver_address = receiver_address;
  this->receiver_city = receiver_city;
  this->receiver_state = receiver_state;
  this->receiver_zip = receiver_zip;
  this->weight = weight;
  this->shipping_cost_per_ounce = shipping_cost_per_ounce;
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

const std::string Package::get_receiver_name() const {
  return this->receiver_name;
}

const std::string Package::get_receiver_address() const {
  return this->receiver_address;
}

const std::string Package::get_receiver_city() const {
  return this->receiver_city;
}

const std::string Package::get_receiver_state() const {
  return this->receiver_state;
}

const std::string Package::get_receiver_zip() const {
  return this->receiver_zip;
}

long double Package::get_weight() const {
  return this->weight;
}

long double Package::get_shipping_cost_per_ounce() const {
  return this->shipping_cost_per_ounce;
}

// Printing, and outputing as a string
const std::string Package::to_s() const {
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
      << "shipping cost per ounce ($/oz): " << get_shipping_cost_per_ounce() << "\n"
      << "TOTAL ($): " << calculate_cost() << "\n";

  return out.str();
}

std::ostream &operator<<(std::ostream &output, const Package &p) {
  output << p.to_s();
  return output;
}

long double Package::calculate_cost() const {
  return this->weight * this->shipping_cost_per_ounce;
}

} // namespace package
