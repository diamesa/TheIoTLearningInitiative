#!/usr/bin/python
import signal
import time
import sys




def interruptHandler(signal, frame):
    sys.exit(0)


if __name__ == '__main__':

    signal.signal(signal.SIGINT, interruptHandler)

    while True:
        print "Hello Internet of Things 101"
        time.sleep(5)

# End of File















