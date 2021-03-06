#ifndef __doloop_h__
#define __doloop_h__

static char* __ident_doloop_h__ = "@(#) doloop.h 2.1@(#)";

#define DOLOOP1_COUNTER(X)      XVECEXP(X,0,0)
#define DOLOOP1_START_LABEL(X)  XVECEXP(X,0,1)
#define DOLOOP1_END_LABEL(X)    XVECEXP(X,0,2)
#define DOLOOP1_DEPTH(X)        XVECEXP(X,0,3)
#define DOLOOP1_DEPTH_INTVAL(X) INTVAL(DOLOOP1_DEPTH(X),0)

#define DOLOOP2_END_JUMP(X)  XVECEXP(X,0,0)
#define DOLOOP2_END_LABEL(X) JUMP_LABEL(DOLOOP2_END_JUMP(X))

#define DOLOOP_END_P(X) ((GET_CODE(X) == JUMP_INSN) \
			 && GET_CODE(PATTERN(X)) == UNSPEC_VOLATILE \
			 && XINT(PATTERN(X),1) == 4)

#define DOLOOP_P(X) ((GET_CODE(X) == INSN) \
		     && GET_CODE(PATTERN(X)) == UNSPEC_VOLATILE\
		     && XINT(PATTERN(X),1) == 3)
	
#endif
