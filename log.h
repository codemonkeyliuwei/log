#ifndef __LOG_H__
#define __LOG_H__

#define LOG_ENABLE

typedef enum 
{
    DEBUG = 0,
    INFO,
    WARN,
    ERROR
}log_level_e;

#ifdef LOG_ENABLE

int init_log(log_level_e level, const char* file, int use_console);

void log(log_level_e lvl, const char *file, const int line, const char *fmt, ...);

#define log_init(level, file, use_console)  init_log((level), (file), (use_console))

#define log_debug(fmt, ...) log(DEBUG, __FILE__, __LINE__, fmt, ##__VA_ARGS__)
#define log_info(fmt, ...)  log(INFO, __FILE__, __LINE__, fmt, ##__VA_ARGS__)
#define log_warn(fmt, ...)  log(WARN, __FILE__, __LINE__, fmt, ##__VA_ARGS__)
#define log_error(fmt, ...) log(ERROR, __FILE__, __LINE__, fmt, ##__VA_ARGS__)

#else

#define log_init(level, file, use_console)
#define log_debug(fmt, ...)
#define log_info(fmt, ...)
#define log_warn(fmt, ...) 
#define log_error(fmt, ...)
#endif

#endif /* __LOG_H__ */

