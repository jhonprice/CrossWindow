#pragma once

#include "../Common/Event.h"

#include <queue>

namespace xwin
{
  class LinuxEventQueue
  {
  public:
    bool update();

    const Event &front();

    void pop();

    bool empty();

  protected:
    void pushEvent(xcb_generic_event_t me);

    std::queue<Event> mQueue;
  };

  typedef LinuxEventQueue EventQueueDelegate;
}