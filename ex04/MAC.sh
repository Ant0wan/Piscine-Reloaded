#!/bin/sh
ifconfig | grep "..:..:..:..:.." | grep "ether" | cut -d " " -f 2
