#/bin/bash

sed '\:* Declarations *:r'<(cat ./src/*.h) src/template \
	| sed '\:* Implementation *:r'<(cat ./src/*.c) - \
	> chiron.h
