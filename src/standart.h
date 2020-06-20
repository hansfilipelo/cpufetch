#ifndef __01h__
#define __01h__

#define VENDOR_EMPTY   0
#define VENDOR_INTEL   1
#define VENDOR_AMD     2
#define VENDOR_INVALID 3

typedef int VENDOR;

struct cache* get_cache_info();
struct cpuInfo* get_cpu_info();
VENDOR get_cpu_vendor(struct cpuInfo* cpu);

char* get_str_peak_performance(struct cpuInfo* cpu, long freq);

char* get_str_ncores(struct cpuInfo* cpu);
char* get_str_avx(struct cpuInfo* cpu);
char* get_str_sse(struct cpuInfo* cpu);
char* get_str_fma(struct cpuInfo* cpu);
char* get_str_aes(struct cpuInfo* cpu);
char* get_str_sha(struct cpuInfo* cpu);

char* get_str_l1(struct cache* cach);
char* get_str_l2(struct cache* cach);
char* get_str_l3(struct cache* cach);

void free_cpuinfo_struct(struct cpuInfo* cpu);
void free_cache_struct(struct cache* cach);

void debug_cpu_info(struct cpuInfo* cpu);
void debugCache(struct cache* cach);

#endif
