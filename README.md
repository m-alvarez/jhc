# jhc
This is an experimental clone of the jhc haskell compiler which can be found [here]().

The purpose of this repository is to host a modified version of the jhc compiler, meeting
the demands of a research project. This is not an exact copy of the original jhc compiler, and must be considered
experimental software.

## Changes
The main change is the addition of a stub garbage collector that will use malloc to allocate memory. This
garbage collector is meant to simplify the runtime system in order to make it more amenable to static analysis. It
can be activated with the flag `-f jgc-stub`. Please keep in mind that a program compiled with this flag will never
deallocate memory.
