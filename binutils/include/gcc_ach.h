#define ACH_PARSE


typedef enum {
	SW_NONE,
	SW_DAD,
	SW_DAF,
	SW_DMDATA,
	SW_DMSTACK,
	SW_ERROR,
	SW_PCRTS,
	SW_PMCODE,
	SW_PMDATA,
	SW_PMSTACK,
	SW_PPINREG,
	SW_PPONSTACK,
	SW_RESERVED,
	SW_RTRTS,
	SW_SCRATCH,
	SW_ADSP21010,
	SW_ADSP21020,
	SW_ADSP210Z3,
	SW_ADSP210Z4,
	SW_ADSP21060,
	SW_ADSP21061,
      } SW_TYPE;

typedef struct 
{
    SW_TYPE	 id;
    char 	*sw_name;
} SW_TOKEN;


enum {SCRATCH=0, RESERVED};
enum {STACK_LOCATION=0, FLOAT_MODEL, CALL_MODEL, PARAMETER_MODEL};


void process_architecture_file(int *, char ***);
