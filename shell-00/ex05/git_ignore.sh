#!/bin/sh
git status -s --ignored | sed -e 's/.\{3\}//''
