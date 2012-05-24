// Copyright (c) 2008-2010 Kent State University
// Copyright (c) 2011-2012 Texas A&M University
//
// This file is distributed under the MIT License. See the accompanying file
// LICENSE.txt or http://www.opensource.org/licenses/mit-license.php for terms
// and conditions.

#include <cassert>
#include <vector>
#include <iostream>

#include <origin/range/reverse_range.hpp>

using namespace std;
using namespace origin;


int main()
{
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
  
  for(auto x : reversed(v))
    cout << x << ' ';
  cout << '\n';
  
}
