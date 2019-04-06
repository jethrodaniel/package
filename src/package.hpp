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

  public:

  // Constructor
  explicit Package(
    std::string sender_name,
    std::string sender_address,
    std::string sender_city,
    std::string sender_state,
    std::string sender_zip,
    std::string receiver_name,
    std::string receiver_address,
    std::string receiver_city,
    std::string receiver_state,
    std::string receiver_zip
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

  // Printing
  const std::string to_s() const;
  friend std::ostream &operator<<(std::ostream &output, const Package &p);
};

} // namespace package

#endif
