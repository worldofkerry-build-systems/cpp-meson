project('tutorial', 'c')

libfib_proj = subproject('libfib')
libfib_dep = libfib_proj.get_variable('libfib_dep')

executable('demo', 'main.c', dependencies : [libfib_dep])
