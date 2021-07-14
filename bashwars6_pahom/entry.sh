#!/bin/sh
cat /home/banner.txt

FLASK_APP=/root/main.py flask run --host=0.0.0.0 1>/dev/null 2>&1 &

su pahom
