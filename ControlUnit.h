/**
This class represents the control unit in the processor.
Input: a string of bits that represents the funct of the instruction
Output: sets the control signals based on the binary input
**/

#ifndef __CONTROLUNIT_H__
#define __CONTROLUNIT_H__

using namespace std;
#include <fstream>
#include <iostream>

class ControlUnit{
public:
	ControlUnit();
	void setControls (string bitString);

	string regDst;
	string jump;
	string branch;
	string memRead;
	string memtoReg;
	string ALUOp1;
	string ALUOp0;
	string memWrite;
	string ALUSrc;
	string regWrite;
	bool debug;
	
	void setDebug(bool debugChange){debug = debugChange;};

	string getRegDST(){return regDst;};
	string getJump(){return jump;};
	string getBranch(){return branch;};
	string getMemRead(){return memRead;};
	string getMemtoReg(){return memtoReg;};
	string getALUOp1(){return ALUOp1;};
	string getALUOp0(){return ALUOp0;};
	string getALUOp(){return ALUOp0+ALUOp1;};
	string getMemWrite(){return memWrite;};
	string getALUSrc(){return ALUSrc;};
	string getRegWrite(){return regWrite;};

	void setRegDST(string reg){regDst = reg;};
	void setJump(string j){ jump = j;};
	void setBranch(string b){ branch = b;};
	void setMemRead(string mem){ memRead = mem;};
	void setMemtoReg(string mem){ memtoReg = mem;};
	void setALUOp1(string alu){ ALUOp1 = alu;};
	void setALUOp0(string alu){ ALUOp0 = alu;};
	void setMemWrite(string mem){ memWrite = mem;};
	void setALUSrc(string alu){ ALUSrc = alu;};
	void setRegWrite(string reg){ regWrite = reg;};
	void printValues(){cout << "RegDST: " << "0x"+regDst << "\n" << "Branch: " <<"0x"+ branch << "\n" << "Jump: " << "0x"+jump << "\n" << "MemRead: " <<"0x"+ memRead << "\n" << "MemtoReg: " <<"0x"+ memtoReg << "\n" << "ALUOP0: " <<"0x"+ ALUOp0 << "\n" << "ALUOp1: " << "0x"+ALUOp1 << "\n" << "ALUSrc: " << "0x"+ALUSrc << "\n" << "MemWrite: " <<"0x"+ memWrite << "\n" << "RegWrite: " <<"0x"+ regWrite << "\n";};
	string printStringValues();


};
#endif
