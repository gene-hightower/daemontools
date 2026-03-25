/* Public domain. */

#include <signal.h>
#include "sig.h"
#include "hassgprm.h"

void sig_pause(void)
{
  sigset_t ss;
  sigemptyset(&ss);
  sigsuspend(&ss);
}
