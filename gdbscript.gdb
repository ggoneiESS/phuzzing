b fp.c:5
# lines should be swapped for gdb
# commands 1
br com add 1
	expr integer="STARTING"
	expr string="STARTING"
# set variable integer="STARTING"
# set variable characters="STARTING"
#	continue
#end
DONE
b fp.c:20
#commands 2
br com add 2
	expr l="STARTING"
#	expr nb="STARTING"
#	expr f="STARTING"
#	expr somechars="STARTING"
# set variable l="STARTING"
# set variable nb="STARTING"
# set variable f="STARTING"
# set variable somechars="STARTING"
#	continue
#end	
DONE
b fp.c:43
#commands 3
br com add 3
	expr pointProving="STARTING"
# set variable pointProving="STARTING"
#	continue
#end
DONE
settings set target.input-path fp.c
r 0.7 1
# r 0.7 1 < fp.c
#if !$_isvoid($_exitsignal)
#	quit
#else
#	shell echo ERRORERRORERROR
#	bt
#end

