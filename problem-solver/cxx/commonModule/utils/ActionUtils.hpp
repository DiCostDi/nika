/*
* Copyright (c) 2020 Intelligent Semantic Systems LLC, All rights reserved.
*/

#pragma once

#include <sc-memory/sc_addr.hpp>

using namespace std;

class ActionUtils
{
public:
  static bool waitAction(ScMemoryContext * context, ScAddr const & actionAddr, int const & waitTime);
  static bool isActionDeactivated(ScMemoryContext * context, ScAddr const & actionAddr);
};