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
              sender_city;

  public:

  // Constructor
  explicit Package(
    std::string sender_name,
    std::string sender_address,
    std::string sender_city
  );

  // Getters
  const std::string get_sender_name() const;
  const std::string get_sender_address() const;
  const std::string get_sender_city() const;

  // Printing
  const std::string to_s() const;
  friend std::ostream &operator<<(std::ostream &output, const Package &p);
};

} // namespace package

#endif
