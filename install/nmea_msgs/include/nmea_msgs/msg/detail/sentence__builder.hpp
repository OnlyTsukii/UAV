// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nmea_msgs:msg/Sentence.idl
// generated code does not contain a copyright notice

#ifndef NMEA_MSGS__MSG__DETAIL__SENTENCE__BUILDER_HPP_
#define NMEA_MSGS__MSG__DETAIL__SENTENCE__BUILDER_HPP_

#include "nmea_msgs/msg/detail/sentence__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nmea_msgs
{

namespace msg
{

namespace builder
{

class Init_Sentence_sentence
{
public:
  explicit Init_Sentence_sentence(::nmea_msgs::msg::Sentence & msg)
  : msg_(msg)
  {}
  ::nmea_msgs::msg::Sentence sentence(::nmea_msgs::msg::Sentence::_sentence_type arg)
  {
    msg_.sentence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nmea_msgs::msg::Sentence msg_;
};

class Init_Sentence_header
{
public:
  Init_Sentence_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sentence_sentence header(::nmea_msgs::msg::Sentence::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Sentence_sentence(msg_);
  }

private:
  ::nmea_msgs::msg::Sentence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nmea_msgs::msg::Sentence>()
{
  return nmea_msgs::msg::builder::Init_Sentence_header();
}

}  // namespace nmea_msgs

#endif  // NMEA_MSGS__MSG__DETAIL__SENTENCE__BUILDER_HPP_
