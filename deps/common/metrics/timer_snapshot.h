/* Copyright (c) 2021 OceanBase and/or its affiliates. All rights reserved.
miniob is licensed under Mulan PSL v2.
You can use this software according to the terms and conditions of the Mulan PSL v2.
You may obtain a copy of Mulan PSL v2 at:
         http://license.coscl.org.cn/MulanPSL2
THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
See the Mulan PSL v2 for more details. */

#pragma once

#include "common/metrics/histogram_snapshot.h"

namespace common {
class TimerSnapshot : public HistogramSnapShot {
public:
  TimerSnapshot();
  virtual ~TimerSnapshot();

  double get_tps();
  void set_tps(double tps);

  std::string to_string();

protected:
  double tps = 1.0;
};
}  // namespace common
