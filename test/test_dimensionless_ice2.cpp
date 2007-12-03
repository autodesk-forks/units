// mcs::units - A C++ library for zero-overhead dimensional analysis and 
// unit/quantity manipulation and conversion
//
// Copyright (C) 2003-2007 Matthias Christian Schabel
// Copyright (C) 2007 Steven Watanabe
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <boost/units/systems/si/length.hpp>
#include <boost/units/systems/cgs/length.hpp>

void foo()
{
    boost::units::quantity<boost::units::SI::dimensionless> d(1.0 * boost::units::SI::meters / boost::units::CGS::centimeters);
}

#include <boost/test/test_tools.hpp>

int main()
{
  BOOST_CHECK( 1 == 2 );
}
