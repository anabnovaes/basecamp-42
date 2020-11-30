#!/bin/sh
find . -type f -name "*.sh" -exec basename {} \; |  sed -r 's/.{3}$//'