new:
	g++ -std=c++11 -g -Wno-cpp main2.cpp ProgramCounter.cpp InstructionMemory.cpp Register.cpp SignExtend.cpp AluControl.cpp Alu1.cpp Alu2.cpp Alu3.cpp DataMemory.cpp ShiftLeft.cpp ControlUnit.cpp BinaryOperation.cpp Multiplexer.cpp Parser.cpp -o main2