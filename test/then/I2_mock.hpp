#ifndef I2_MOCK_HPP
#define I2_MOCK_HPP

#include <gmock/gmock.h>
#include "I2.hpp"

namespace n1 {

class I2_mock : public I2
{
public:
    I2_mock();
    virtual ~I2_mock();

    MOCK_METHOD((void), f0, (), (const, override));
    MOCK_METHOD((void), f1, (int), (override));
    MOCK_METHOD((void), f2, (double), (override));
    MOCK_METHOD((void), f3, (int, double), (override));
    MOCK_METHOD((void), f4, (int, double, const std::string &), (override));
    MOCK_METHOD((int), f5, (const std::string &), (override));
    MOCK_METHOD((boost::shared_ptr<int>), f6, (const boost::shared_ptr<int> &), (const, override));
    MOCK_METHOD((const int&), f7, (), (const, override));
    MOCK_METHOD((boost::function<void(int)>), f8, (), (override));
    MOCK_METHOD((boost::non_type<int,0>), f9, (const boost::non_type<int, 1> &, const boost::non_type<int, 2> &), (const, override));
    MOCK_METHOD((const int*const ), f10, (), (override));
    MOCK_METHOD((const void), f11, (), (override));
    MOCK_METHOD((const void), f12, (), (override));
    MOCK_METHOD((const void), f13, (), (override));
    MOCK_METHOD((const void), f14, (), (override));
    MOCK_METHOD(( const void), f15, (), (override));
    MOCK_METHOD((const  void), f16, (), (override));
    MOCK_METHOD((const  void), f17, (), (override));
    virtual int operator()() { return function_call_or_cast_operator(); }
    MOCK_METHOD((int), function_call_or_cast_operator, (), (override));
    virtual void operator()(int arg0, double arg1, boost::function<void (int, double)> arg2, const boost::non_type<int, 1> & arg3, const std::string & arg4) {  function_call_or_cast_operator(arg0, arg1, arg2, arg3, arg4); }
    MOCK_METHOD((void), function_call_or_cast_operator, (int, double, boost::function<void (int, double)>, const boost::non_type<int, 1> &, const std::string &), (override));
    virtual double operator[](int arg0) { return array_subscript_operator(arg0); }
    MOCK_METHOD((double), array_subscript_operator, (int), (override));
    virtual void* operator->() const { return member_selection_operator(); }
    MOCK_METHOD((void*), member_selection_operator, (), (const, override));
};

} // namespace n1

#endif // I2_MOCK_HPP

