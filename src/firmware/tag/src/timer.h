
#ifndef _TIMER_H
#define _TIMER_H

#define TIMER1_HZ	32768
#define JIFFIES_PER_MS(x) ((uint16_t)(((x)*TIMER1_HZ)/1000))

#define SLEEPDEEP_1ms 0
#define SLEEPDEEP_2ms 1
#define SLEEPDEEP_4ms 2
#define SLEEPDEEP_8ms 3
#define SLEEPDEEP_17ms 4
#define SLEEPDEEP_33ms 5
#define SLEEPDEEP_66ms 6
#define SLEEPDEEP_132ms 7
#define SLEEPDEEP_264ms 8
#define SLEEPDEEP_529ms 9
#define SLEEPDEEP_1s 10
#define SLEEPDEEP_2s 11
#define SLEEPDEEP_4s 12
#define SLEEPDEEP_8s 13
#define SLEEPDEEP_17s 14
#define SLEEPDEEP_34s 15
#define SLEEPDEEP_68s 16
#define SLEEPDEEP_135s 17
#define SLEEPDEEP_271s 18

extern void timer_init (void);
extern void sleep_deep (uint8_t div);
extern void sleep_jiffies (uint16_t jiffies);

#endif /* _TIMER_H */
