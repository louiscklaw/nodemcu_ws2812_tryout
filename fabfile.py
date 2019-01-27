#
#!/usr/bin/env python
# init_py_dont_write_bytecode

#init_boilerplate

from fabric.api import *
from fabric.colors import *
from fabric.context_managers import *
from fabric.contrib.project import *


import multiprocessing
total_cpu_threads = multiprocessing.cpu_count()


def threaded_local(command):
    local(command, capture=True)


def get_cwd():
    return local('echo $PWD')

def arduino_compile():
    with lcd(get_cwd()):
        local('arduino --verify pwm_helloworld.ino')
        local('arduino --upload pwm_helloworld.ino')
