// Copyright (c) 2008-2010 Kent State University
// Copyright (c) 2011-2012 Texas A&M University
//
// This file is distributed under the MIT License. See the accompanying file
// LICENSE.txt or http://www.opensource.org/licenses/mit-license.php for terms
// and conditions.

#include <cassert>
#include <vector>

#include <origin/algorithm.hpp>

using namespace std;
using namespace origin;

struct positive
{
  bool operator()(int n) const { return n > 0; }
};

int main()
{
  vector<int> v1 = {0, 0, 1};
  assert(some_of(v1.begin(), v1.end(), positive{}));
  assert(some_of(v1, positive{}));
  assert(some_of({0, 0, 1}, positive{}));

  vector<bool> v2 = {false, false, true};
  assert(some_of(v2.begin(), v2.end()));
  assert(some_of(v2));
  assert(some_of({false, false, true}));
}
