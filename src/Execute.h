#ifndef	__EXECUTE_H__
#define	__EXECUTE_H__

#define WREG  0xf8b

extern char FSR[];

void execute(Bytecode *code);

#endif	// __EXECUTE_H__