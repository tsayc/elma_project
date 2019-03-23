#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include "gtest/gtest.h"
#include "device.h"

namespace
{
//! unit test 
using namespace elma;
using namespace device;

TEST(Device, Construction)
{
  Device sw;
  Manager m;
  m.schedule(sw, 10_ms)
      .init()
      .start();
  ASSERT_EQ("on", sw.current().name());
}

TEST(Device, BatteryOff)
{
  Device sw;
  Manager m;
  m.schedule(sw, 10_ms)
      .init()
      .start();

  m.emit(Event("battery_low"));

  ASSERT_EQ("off", sw.current().name());
}

TEST(Device, Plug)
{
  Device sw;
  Manager m;
  m.schedule(sw, 10_ms)
      .init()
      .start();

  m.emit(Event("plug"));

  ASSERT_EQ("charging", sw.current().name());
}

TEST(battery, No_change)
{
  Device sw;
  Manager m;
  Battery ba;
  m.schedule(sw, 10_ms)
  .schedule(ba, 10_ms)
      .init()
      .start();

  m.emit(Event("battery_low"));

  ASSERT_EQ("no_change", ba.current().name());
}

// More tests go here. You should aim to test every
// method of every object, either directly or indirectly,
// although testing user interfaces is notoriously
// difficult.

} // namespace