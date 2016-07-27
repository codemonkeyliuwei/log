#include "log.h"

int main(int argc, char **argv)
{
    log_init(INFO, "./log", false);

    log_error("It's a ERROR log.");
    log_warn("It's a WARN log.");
    log_info("It's a INFO log.");
    log_debug("There is no DEBUG log.");

    return 0;
}