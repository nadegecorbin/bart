
struct operator_p_s;
struct linop_s;

#ifndef DIMS
#define DIMS 16u
#endif

#ifndef NUM_REGS
#define NUM_REGS 10
#endif


struct opt_reg_s;


extern void help_reg_moba(void);

extern _Bool opt_reg_moba(void* ptr, char c, const char* optarg);

extern void opt_reg_moba_configure(unsigned int N, const long dims[__VLA(N)], struct opt_reg_s* ropts, const struct operator_p_s* prox_ops[NUM_REGS], const struct linop_s* trafos[NUM_REGS], unsigned int model);
