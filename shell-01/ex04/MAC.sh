#!/bin/sh
ifconfig -a | grep ether | sed  's/.\{14\}//' 