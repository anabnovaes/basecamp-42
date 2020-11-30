#!/bin/sh


sed 's/:.*//' /etc/passwd |sed -n '1~2p' | rev |sort -r | sed -n "$(FT_LINE1),$(e FT_LINE2)p" | sed ':a;$!N;s/\n/ ,/;ta;' | tr "\n" "." 