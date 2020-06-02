#!/bin/bash

set -e

init()
{
	echo "Init..."

}

compile()
{
	echo "Compiling..."
}

link()
{
	echo "Linking..."
}

build()
{
	mkdir -p bin
	mkdir -p obj
	mkdir -p lib

	clear
	echo "Building..."

	g++ -o stringtest ../src/main.cpp ../src/string_narrow.cpp ../src/string_wide.cpp
	cp -rf stringtest bin
}

clean()
{
	echo "Cleaning..."
	rm -rf bin/* obj/*
}

run()
{
	echo "Running..."
	clear
	bin/stringtest
}

debug()
{
	gdb bin/stringtest
}

val()
{
	valgrind bin/stringtest
}

case $1 in
	init)
	init
	;;
	compile)
	compile
	;;
	link)
	link
	;;
	build)
	build
	;;
	rebuild)
	clean
	build
	;;
	clean)
	clean
	;;
	run)
	run
	;;
	build_run)
	build
	run
	;;
	debug)
	debug
	;;
	val)
	val
	;;
	*)
	echo "?SYNTAX ERROR"
	;;
esac
