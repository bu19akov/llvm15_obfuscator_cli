void _init()
{
    if (__gmon_start__ != 0)
    {
        __gmon_start__();
    }
}

int64_t sub_1020()
{
    int64_t var_8 = data_7008;
    /* jump -> data_7010 */
}

void __cxa_finalize(void* d)
{
    /* tailcall */
    return __cxa_finalize(d);
}

void _start(int64_t arg1, int64_t arg2, void (* arg3)()) __noreturn
{
    int64_t stack_end_1;
    int64_t stack_end = stack_end_1;
    __libc_start_main(main, __return_addr, &ubp_av, __libc_csu_init, __libc_csu_fini, arg3, &stack_end);
    /* no return */
}

void deregister_tm_clones()
{
    return;
}

void register_tm_clones()
{
    return;
}

void __do_global_dtors_aux()
{
    if (__TMC_END__ != 0)
    {
        return;
    }
    if (__cxa_finalize != 0)
    {
        __cxa_finalize(__dso_handle);
    }
    deregister_tm_clones();
    __TMC_END__ = 1;
}

void frame_dummy()
{
    /* tailcall */
    return register_tm_clones();
}

int64_t fibonacci(int32_t arg1)
{
    uint64_t r13 = arg1;
    *(&data_7140 + (h6696139802538932559(0x189fde44) << 3)) = &data_1b80;
    *(&data_7140 + (h6696139802538932559(0x189fde41) << 3)) = &data_1b30;
    *(&data_7140 + (h6696139802538932559(0x189fde43) << 3)) = &data_1b10;
    *(&data_7140 + (h6696139802538932559(0x189fde42) << 3)) = &data_17b0;
    *(&data_7140 + (h6696139802538932559(0x189fde45) << 3)) = &data_1920;
    *(&data_7140 + (h6696139802538932559(0x189fde4c) << 3)) = &data_1710;
    *(&data_7140 + (h6696139802538932559(0x189fde40) << 3)) = &data_1700;
    *(&data_7140 + (h6696139802538932559(0x189fde47) << 3)) = &data_16d0;
    *(&data_7140 + (h6696139802538932559(0x189fde4d) << 3)) = &data_15b0;
    *(&data_7070 + (m3380220215096319249(0x276ce3a2fef2b199) << 3)) = fibonacci;
    int64_t r9 = r13;
    int64_t rdx = (-0x746b18aeac761b32 & r9);
    int64_t var_128 = rdx;
    int64_t rcx_1 = !(r9);
    int64_t rsi_1 = ((-0x50674c036a0468ab ^ (r9 | 0x8b94e7515389e4ce)) ^ ((r9 ^ 0x8b94e7515389e4ce) | rdx));
    int64_t var_108 = rsi_1;
    int32_t rdi_4 = (r9 & 0xca45cbf8);
    uint64_t r10_5 = ((((((-0x574e836a + r9) ^ (((r9 | 0x14cbeab3) ^ rdi_4) ^ rdi_4)) ^ ((rcx_1 & 0x14cbeab3) + r13)) ^ (r9 - 0x574e836a)) ^ 0x5ebbadfd) * (0 ^ rsi_1));
    int64_t r10_7 = ((r10_5 + 0xf) & 0xfffffffffffffff0);
    void var_1a8;
    void* var_68 = &var_1a8;
    void* rax_12 = (&var_1a8 - r10_7);
    void* var_110 = rax_12;
    int64_t rbx_4 = (r9 | 0x94987a3282f71c07);
    int64_t rax_13 = (-0x6b6785cd7d08e3f9 & r9);
    int64_t var_e8 = rax_13;
    int64_t var_100 = rbx_4;
    void* r8_2 = (&*nullptr->ident.pad[(6 + ((((((((r9 ^ 0x89237819) + ((r9 & 0x9237819) << 1)) ^ rbx_4) ^ ((r9 ^ 0x82f71c07) | rax_13)) ^ (r9 - 0x76dc87e7)) ^ 0xa715ba9f) * 0xfbd6e15f) << 3))] & 0xfffffffffffffff0);
    void* rax_23 = (rax_12 - r8_2);
    void* var_78 = rax_23;
    int64_t rdx_6 = ((0x498469b8ecf5557c & rcx_1) | (-0x498469b8ecf5557d & r9));
    int64_t var_130 = rdx_6;
    int64_t rbx_6 = (-0x4e99a1f376eb8a76 ^ rdx_6);
    int64_t var_120 = rbx_6;
    int64_t rdx_9 = (((0x1db176ffdbfcc144 + r9) ^ (r9 | 0xf8e237b465e120f6)) ^ ((-0x71dc84b9a1edf0a & r9) | rbx_6));
    int64_t var_f8 = rdx_9;
    int64_t rcx_7 = (((((r9 & 0xa7ec4b38aa615605) | (r9 ^ 0xa7ec4b38aa615605)) ^ (0x245d0a8bbf019135 + r9)) ^ (0x245d0a8bbf019135 + r9)) ^ ((0x11732a4587eb01ad ^ ((0x6fbceaae06e9d89a & rcx_1) | (-0x6fbceaae06e9d89b & r9))) | (0x7ecfc0eb8102d937 & r9)));
    int64_t var_118 = rcx_7;
    void* rax_30 = &*nullptr->ident.pad[(6 + ((((((r9 | 0xaa615605) ^ (r9 | 0x8102d937)) ^ rcx_7) ^ 0x8813dd21) * (((r9 - 0x24033ebc) ^ rdx_9) ^ 0xaffe6e1)) << 3))];
    void* rax_31 = (rax_30 & 0xfffffffffffffff0);
    void* var_88 = (rax_23 - rax_31);
    void* const var_e0 = &data_15b0;
    void* const var_d8;
    int64_t* var_70 = &var_d8;
    var_d8 = &data_16d0;
    void* const var_d0;
    int64_t* var_138 = &var_d0;
    var_d0 = &data_1700;
    void* const var_c8;
    int64_t* var_140 = &var_c8;
    var_c8 = &data_1710;
    void* const var_c0;
    *(rax_23 + -(rax_31)) = &var_c0;
    var_c0 = &data_17b0;
    void* const var_b8;
    int64_t* var_60 = &var_b8;
    var_b8 = &data_1920;
    void* const var_b0;
    *(rax_12 + -(r8_2)) = &var_b0;
    var_b0 = &data_1b10;
    void* const var_a8;
    int64_t* var_148 = &var_a8;
    var_a8 = &data_1b30;
    void* const var_a0;
    int64_t* var_150 = &var_a0;
    var_a0 = &data_1b80;
    int32_t rax_33 = r9;
    uint64_t rax_34 = (rax_33 * rax_33);
    uint64_t var_f0 = rax_34;
    int32_t rax_35 = (rax_34 + r13);
    int32_t rcx_13 = (((rax_35 >> 0x1f) + rax_35) & 0xfffffffe);
    int32_t var_50 = rax_35;
    int32_t var_94 = rcx_13;
    int32_t var_98 = (rax_35 - rcx_13);
    bool var_31 = rax_35 == rcx_13;
    *(var_68 + -(r10_7)) = 1;
    uint64_t var_68_1 = ((r9 * 2) * ((r9 * 2) + 2));
    uint64_t var_80 = r13;
    /* jump -> *var_70 */
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    *(&data_7080 + (m3380220215096319249(0x276ce3a2fef2b19d) << 3)) = clock;
    *(&data_7080 + (m3380220215096319249(0x276ce3a2fef2b19a) << 3)) = fibonacci;
    *(&data_7080 + (m3380220215096319249(0x276ce3a2fef2b19b) << 3)) = clock;
    int64_t var_40 = 0x276ce3a2fef2b199;
    *(&data_7080 + (m3380220215096319249(0x276ce3a2fef2b199) << 3)) = printf;
    *(&data_7080 + (m3380220215096319249(0x276ce3a2fef2b198) << 3)) = printf;
    int64_t var_50 = 0x276ce3a2fef2b19d;
    int64_t rax_6 = *lk6781570101095161876(&var_50)();
    var_50 = 0x276ce3a2fef2b19a;
    int32_t rax_8 = *lk6781570101095161876(&var_50)(0x28);
    var_50 = 0x276ce3a2fef2b19b;
    double zmm0 = ((((*lk6781570101095161876(&var_50)() - 0x24a9a9f8e26d65ce) - rax_6) + 0x24a9a9f8e26d65ce) / 1000000.0);
    var_50 = var_40;
    void* rax_15 = lk6781570101095161876(&var_50);
    *rax_15(&data_7028, 0x28, rax_8, rax_15);
    var_50 = 0x276ce3a2fef2b198;
    int512_t zmm0_1;
    zmm0_1 = zmm0;
    void* rax_17;
    rax_17 = 1;
    *lk6781570101095161876(&var_50)(&data_7043, zmm0_1);
    return 0;
}

int64_t decode1269181186827216205(int64_t arg1, int32_t arg2)
{
    int64_t r8;
    int64_t var_d8 = r8;
    int64_t rcx;
    int64_t var_d0 = rcx;
    int64_t rdx;
    int64_t var_c8 = rdx;
    int64_t var_108 = arg1;
    *(&data_70c0 + (h6696139802538932559(0x189fde42) << 3)) = &data_3190;
    *(&data_70c0 + (h6696139802538932559(0x189fde4a) << 3)) = &data_3010;
    *(&data_70c0 + (h6696139802538932559(0x189fde41) << 3)) = &data_2660;
    int64_t rax_3 = h6696139802538932559(0x189fde40);
    int64_t var_110 = rax_3;
    *(&data_70c0 + (rax_3 << 3)) = &data_25b0;
    *(&data_70c0 + (h6696139802538932559(0x189fde4d) << 3)) = &data_2be0;
    int64_t rax_5 = h6696139802538932559(0x189fde46);
    int64_t var_c0 = rax_5;
    *(&data_70c0 + (rax_5 << 3)) = &data_25e0;
    *(&data_70c0 + (h6696139802538932559(0x189fde45) << 3)) = &data_26a0;
    *(&data_70c0 + (h6696139802538932559(0x189fde44) << 3)) = &data_2700;
    *(&data_70c0 + (h6696139802538932559(0x189fde49) << 3)) = &data_2810;
    int64_t rax_9 = h6696139802538932559(0x189fde4e);
    int64_t var_78 = rax_9;
    *(&data_70c0 + (rax_9 << 3)) = &data_3220;
    int64_t rax_10 = h6696139802538932559(0x189fde43);
    int64_t var_100 = rax_10;
    *(&data_70c0 + (rax_10 << 3)) = &data_2840;
    int64_t rax_11 = h6696139802538932559(0x189fde4c);
    *(&data_70c0 + (rax_11 << 3)) = &data_28d0;
    *(&data_70c0 + (h6696139802538932559(0x189fde48) << 3)) = &data_2970;
    int64_t rax_13 = h6696139802538932559(0x189fde4f);
    int64_t var_b8 = rax_13;
    *(&data_70c0 + (rax_13 << 3)) = &data_3150;
    int64_t rax_14 = h6696139802538932559(0x189fde47);
    int64_t var_f8 = rax_14;
    *(&data_70c0 + (rax_14 << 3)) = &data_2e70;
    int64_t rax_15 = h6696139802538932559(0x189fde4b);
    int64_t var_f0 = rax_15;
    *(&data_70c0 + (rax_15 << 3)) = &data_2f80;
    int64_t r11 = arg2;
    int64_t r10_1 = !(r11);
    int64_t var_90 = (0x34fcc13c5d540684 + r11);
    int32_t rcx_9 = (((((((r10_1 & 0xbac09037) + arg2) ^ (0x34fcc13c5d540684 + r11)) ^ (r11 | 0xbac09037)) ^ (r11 + 0x5d540684)) ^ (r11 + 0x26c06356)) ^ ((r11 ^ 0x26c06356) + ((r11 & 0x26c06356) << 1)));
    uint64_t rcx_11 = ((rcx_9 ^ 0x7afcc8e1) * (((0xb05984de ^ ((0x7421bf38 & r11) ^ (0x650f26fb & r11))) ^ (0x23077d97 | r10_1)) ^ ((r11 & 0x7421bf38) ^ ((r11 & 0x650f26fb) ^ (r11 & 0xdcf88268)))));
    void var_138;
    void* rcx_12 = (&var_138 - (&*nullptr->ident.pad[(6 + (rcx_11 << 2))] & 0xfffffffffffffff0));
    void* var_68 = rcx_12;
    void* rsp = rcx_12;
    int32_t rax_26 = (((r11 >> 0x1f) + arg2) & 0xfffffffe);
    int32_t var_84 = rax_26;
    int64_t var_70 = r11;
    int64_t var_a8 = r10_1;
    int64_t rbx;
    int32_t var_34;
    if (r11 == rax_26)
    {
        void* var_50_2 = (rsp - 0x10);
        void* var_60_2 = (rsp - 0x20);
        __builtin_memcpy((rsp - 0x70), "\xfd\xff\xff\xff\xfe\xff\xff\xff\xff\xff\xff\xff\x00\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00", 0x1c);
        int64_t rdi_30 = (0x398d0a6985064771 | r11);
        int64_t rcx_36 = ((-0x2a47f39a35e9058c ^ rdi_30) ^ -((0x30ecf8cab6b51fdd - r11)));
        int64_t var_a0_2 = rcx_36;
        *(rsp - 0x54) = (((rdi_30 ^ (0x494ae023 + r11)) ^ rcx_36) * ((0x5e86b7b5 ^ !((-0xb8e5f7719d27507 | r10_1))) ^ (0x19d27506 & r11)));
        *(rsp - 0x50) = 5;
        int64_t rsi_21 = (-0x13643fe5f50265e5 | r11);
        int64_t rdx_37 = (((-0x59dd1e50ecd4b366 ^ ((((r10_1 ^ 0xe635b5b8fccd4358) & 0xe635b5b8fccd4358) ^ (r11 & 0xe635b5b8fccd4358)) ^ ((-0x4b951e10bff8b61b & r11) + (r11 | 0xb46ae1ef400749e5)))) ^ (r11 - 0x4b951e10bff8b61b)) * (((0x69552845eb4c078f ^ ((((-0x3f862f263bb46527 & r11) ^ (-0x16672b94ead82515 + r11)) ^ (-0x16672b94ead82515 + r11)) ^ !((0x3f862f263bb46526 | r10_1)))) ^ rsi_21) ^ rsi_21));
        int64_t var_98_2 = rdx_37;
        *(rsp - 0x4c) = rdx_37;
        __builtin_memcpy((rsp - 0x48), "\x07\x00\x00\x00\x08\x00\x00\x00\x09\x00\x00\x00\x0a\x00\x00\x00\x0b\x00\x00\x00\x0c\x00\x00\x00\x0d\x00\x00\x00", 0x1c);
        void* var_40_1 = (rsp - 0x80);
        *(rsp - 0x80) = 0;
        var_34 = 0x189fde40;
        rbx = *bf15077812547524348479(&var_34);
    }
    else
    {
        void* rax_49;
        while (true)
        {
            void* var_50_1 = (rsp - 0x10);
            void* var_60_1 = (rsp - 0x20);
            void* r12_1 = (rsp - 0x70);
            int32_t rdx_12 = (((0x5a184b10 | r11) ^ 0x356fadbd) ^ ((r11 & 0x19d27506) ^ 0x356fadbd));
            int32_t rdx_15 = (((rdx_12 | ((r11 & 0xa5e7b4ef) + 0x5a184b10)) - (rdx_12 & ((r11 & 0xa5e7b4ef) + 0x5a184b10))) ^ (!(((((r11 & 0xfbf68d86218200a4) | (r10_1 & 0x4097279de7dff5b)) ^ 0xf872d0ec7af8a5d) | !((0xb8e5f7719d27506 | r11)))) ^ 0x5e86b7b5));
            int64_t rax_35 = ((((r11 & 0x398d0a6985064771) | (r11 ^ 0x398d0a6985064771)) ^ 0xd5b80c65ca16fa74) ^ -((0x30ecf8cab6b51fdd - r11)));
            int64_t var_a0_1 = rax_35;
            int64_t rdx_17 = (r11 | 0xec9bc01a0afd9a1b);
            int64_t rsi_14 = (((r11 & 0xc079d0d9c44b9ad9) ^ (-0x16672b94ead82515 + r11)) ^ (!(((-0x16672b94ead82515 + r11) ^ (-0x16672b94ead82515 + r11))) & rdx_17));
            int64_t rdi_28 = (((((((((r11 & 0xe635b5b8fccd4358) & 0xffffffffffffffff) ^ 0x4482caff91f25750) ^ 0x4482caff91f25750) ^ ((-0x19ca4a470332bca8 ^ r10_1) & 0xe635b5b8fccd4358)) ^ ((-0x4b951e10bff8b61b & r11) + (-0x4b951e10bff8b61b | r11))) ^ 0xa622e1af132b4c9a) ^ ((r11 - 0x4b951e10bff8b61b) & 0xffffffffffffffff)) * ((rdx_17 ^ (!((0x3f862f263bb46526 | r10_1)) ^ 0x69552845eb4c078f)) ^ ((rsi_14 | (-0x16672b94ead82515 + r11)) - (rsi_14 & (-0x16672b94ead82515 + r11)))));
            int64_t rax_47 = ((rax_11 * rax_11) + rax_11);
            int64_t rdx_24 = (((rax_47 >> 0x3f) + rax_47) & 0xfffffffffffffffe);
            __builtin_memcpy((rsp - 0x70), "\xfd\xff\xff\xff\xfe\xff\xff\xff\xff\xff\xff\xff\x00\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00", 0x1c);
            *(rsp - 0x54) = ((((((((((r10_1 & 0x45582538) | (r11 & 0xbaa7dac7)) ^ 0xbaa7dac7) | 0x7af9b88e) - 0x64211622) + r11) - 0x16d8a26c) ^ (r11 + 0x494ae023)) ^ rax_35) * rdx_15);
            *(rsp - 0x50) = 5;
            int64_t var_98_1 = rdi_28;
            *(rsp - 0x4c) = rdi_28;
            int32_t r15;
            r15 = rax_47 == rdx_24;
            if (rax_47 == rdx_24)
            {
                __builtin_memcpy((r12_1 + 0x28), "\x07\x00\x00\x00\x08\x00\x00\x00\x09\x00\x00\x00\x0a\x00\x00\x00\x0b\x00\x00\x00\x0c\x00\x00\x00\x0d\x00\x00\x00", 0x1c);
                void* var_40_2 = (r12_1 - 0x10);
                *(r12_1 - 0x10) = 0;
                var_34 = 0x189fde40;
                rax_49 = bf15077812547524348479(&var_34);
                break;
            }
            __builtin_memcpy((r12_1 + 0x28), "\x07\x00\x00\x00\x08\x00\x00\x00\x09\x00\x00\x00\x0a\x00\x00\x00\x0b\x00\x00\x00\x0c\x00\x00\x00\x0d\x00\x00\x00", 0x1c);
            rsp = (r12_1 - 0x10);
            *(r12_1 - 0x10) = 0;
            var_34 = 0x189fde40;
            rax_49 = bf15077812547524348479(&var_34);
            r10_1 = var_a8;
            r11 = var_70;
            if (r15 != 0)
            {
                void* var_40 = (r12_1 - 0x10);
                break;
            }
        }
        rbx = *rax_49;
    }
    uint64_t var_e8 = (0x9b88c3aa | arg2);
    /* jump -> rbx */
}

int64_t init12029237271793693494()
{
    int64_t rax = h6696139802538932559(0x189fde41);
    int64_t var_a0 = rax;
    *(&data_7190 + (rax << 3)) = &data_3cf0;
    *(&data_7190 + (h6696139802538932559(0x189fde44) << 3)) = &data_3620;
    int64_t rax_2 = h6696139802538932559(0x189fde42);
    void* var_88 = (&data_7190 + (rax_2 << 3));
    *(&data_7190 + (rax_2 << 3)) = &data_3da9;
    *(&data_7190 + (h6696139802538932559(0x189fde45) << 3)) = &data_3640;
    int64_t rax_4 = h6696139802538932559(0x189fde40);
    int64_t var_98 = rax_4;
    *(&data_7190 + (rax_4 << 3)) = &data_400e;
    int64_t rax_5 = h6696139802538932559(0x189fde43);
    *(&data_7190 + (rax_5 << 3)) = &data_35b0;
    *(&data_7190 + (h6696139802538932559(0x189fde46) << 3)) = &data_3580;
    *(&data_70a8 + (m3380220215096319249(0x276ce3a2fef2b199) << 3)) = decode1269181186827216205;
    *(&data_70a8 + (m3380220215096319249(0x276ce3a2fef2b198) << 3)) = decode1269181186827216205;
    int64_t var_74;
    __builtin_memcpy(&var_74, "\xfd\xff\xff\xff\xfe\xff\xff\xff\xff\xff\xff\xff\x00\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x04\x00\x00\x00", 0x20);
    int64_t var_f2;
    __builtin_strncpy(&var_f2, "nFii beo\nnuacmci%n mbbor ddd\n i%sa i", 0x24);
    int16_t var_ce = 0x6400;
    int64_t var_18c;
    __builtin_memcpy(&var_18c, "\x05\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x08\x00\x00\x00\x03\x00\x00\x00\x0b\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\x05\x00\x00\x00\x09\x00\x00\x00\x06\x00\x00\x00\x07\x00\x00\x00\x0a\x00\x00\x00\x07\x00\x00\x00\x02\x00\x00\x00\x0d\x00\x00\x00\x05\x00\x00\x00\x08\x00\x00\x00\x0a\x00\x00\x00\x03\x00\x00\x00\x03\x00\x00\x00\x04\x00\x00\x00\x0c\x00\x00\x00\x08\x00\x00\x00\x0e\x00\x00\x00\x0e\x00\x00\x00\x0e\x00\x00\x00\x12\x00\x00\x00\x0f\x00\x00\x00\x10\x00\x00\x00\x0d\x00\x00\x00\x11\x00\x00\x00\x06\x00\x00\x00\x0f\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x0e\x00\x00\x00", 0x98);
    int64_t* var_a8 = &var_18c;
    int32_t var_3c = 0;
    int32_t var_34 = 0x189fde46;
    int64_t var_90 = rax_5;
    /* jump -> *bf9373716664714401988(&var_34) */
}

int64_t m3380220215096319249(int64_t arg1) __pure
{
    return (0x276ce3a2fef2b199 ^ arg1);
}

void* lk4113690334398872808(int64_t* arg1)
{
    int64_t rax;
    int64_t var_8 = rax;
    return (&data_7070 + (m3380220215096319249(*arg1) << 3));
}

void* lk6781570101095161876(int64_t* arg1)
{
    int64_t rax;
    int64_t var_8 = rax;
    return (&data_7080 + (m3380220215096319249(*arg1) << 3));
}

void* lk15023213921171077739(int64_t* arg1)
{
    int64_t rax;
    int64_t var_8 = rax;
    return (&data_70a8 + (m3380220215096319249(*arg1) << 3));
}

int64_t h6696139802538932559(int64_t arg1) __pure
{
    return (arg1 ^ 0x189fde45);
}

void* bf15077812547524348479(int32_t* arg1)
{
    int64_t rax;
    int64_t var_8 = rax;
    return (&data_70c0 + (h6696139802538932559(*arg1) << 3));
}

void* bf3488692645482866889(int32_t* arg1)
{
    int64_t rax;
    int64_t var_8 = rax;
    return (&data_7140 + (h6696139802538932559(*arg1) << 3));
}

void* bf9373716664714401988(int32_t* arg1)
{
    int64_t rax;
    int64_t var_8 = rax;
    return (&data_7190 + (h6696139802538932559(*arg1) << 3));
}

int64_t fibonacci.extracted(int64_t arg1, int64_t arg2, char* arg3)
{
    int64_t rax;
    int64_t var_8 = rax;
    int64_t rax_3 = ((arg2 * arg2) + arg2);
    rax_3 = rax_3 == (((rax_3 >> 0x3f) + rax_3) & 0xfffffffffffffffe);
    arg2 = (arg2 | rax_3);
    char rdi = arg2;
    arg2 = (arg2 & 1);
    *arg3 = arg2;
    if ((fibonacci.extracted.extracted(rdi) & 1) == 0)
    {
        return 0;
    }
    return 1;
}

int64_t fibonacci.extracted.1(int32_t* arg1, int32_t arg2, int32_t* arg3, int64_t arg4, int64_t arg5, bool* arg6)
{
    int64_t rax;
    int64_t var_8 = rax;
    *arg1 = 0;
    if ((fibonacci.extracted.1.extracted(arg2, arg3, arg4, arg5, arg6) & 1) == 0)
    {
        return 0;
    }
    return 1;
}

int64_t fibonacci.extracted.2(char arg1, int64_t* arg2, int64_t* arg3)
{
    *arg2 = 6;
    *arg3 = 0xe1;
    if ((arg1 & 1) == 0)
    {
        return 0;
    }
    int64_t rax;
    rax = 1;
    return rax;
}

int64_t fibonacci.extracted.3(int64_t* arg1, int64_t* arg2)
{
    *arg1 = 6;
    *arg2 = 0xe1;
}

int64_t fibonacci..split() __pure
{
    return;
}

int64_t fibonacci.extracted.4(int32_t arg1, int32_t arg2, int64_t* arg3, int64_t* arg4, int32_t* arg5, int64_t* arg6, bool* arg7, int64_t* arg8, int32_t* arg9, int64_t* arg10, char* arg11, int64_t* arg12, char* arg13, int64_t* arg14, int64_t* arg15, int64_t* arg16, int64_t* arg17, int64_t* arg18, int64_t* arg19)
{
    int32_t rax_3 = (((arg1 >> 0x1f) + arg1) & 0xfffffffe);
    *arg5 = (arg1 - rax_3);
    *arg6 = -0x44;
    *arg7 = arg1 == rax_3;
    rax_3 = arg1 == rax_3;
    *arg8 = 0x12;
    *arg9 = (arg2 & 1);
    *arg10 = -0x2f;
    *arg11 = (arg2 & 1);
    rax_3 = (rax_3 | arg2);
    *arg12 = 2;
    rax_3 = (rax_3 & 1);
    *arg13 = rax_3;
    *arg14 = 0x97;
    int64_t* rdi_7 = *arg3;
    *arg15 = rdi_7;
    *arg16 = 0;
    int64_t* rcx = *arg4;
    *arg17 = rcx;
    if (rax_3 != 0)
    {
        rdi_7 = rcx;
    }
    return fibonacci.extracted.4.extracted(rdi_7, arg18, arg19);
}

int64_t fibonacci.extracted.5(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    int64_t rax;
    int64_t var_8 = rax;
    int32_t rax_1 = *arg1;
    *arg3 = rax_1;
    int32_t rax_2 = (rax_1 - arg2);
    *arg4 = rax_2;
    return rax_2;
}

int64_t fibonacci.extracted.extracted(char arg1) __pure
{
    if ((arg1 & 1) == 0)
    {
        return 0;
    }
    int64_t rax;
    rax = 1;
    return rax;
}

int64_t fibonacci.extracted.1.extracted(int32_t arg1, int32_t* arg2, int64_t, int64_t arg4, bool* arg5)
{
    *arg2 = arg1;
    int64_t rax_2 = ((arg4 * arg4) + arg4);
    int64_t rcx_3 = (((rax_2 >> 0x3f) + rax_2) & 0xfffffffffffffffe);
    *arg5 = rax_2 == rcx_3;
    if (rax_2 != rcx_3)
    {
        return 0;
    }
    rax_2 = 1;
    return rax_2;
}

int64_t fibonacci.extracted.4.extracted(int64_t* arg1, int64_t* arg2, int64_t* arg3)
{
    *arg2 = arg1;
    int64_t rax = *arg1;
    *arg3 = rax;
    return rax;
}

int64_t fibonacci.extracted.5.extracted() __pure
{
    return;
}

int64_t decode1269181186827216205..split() __pure
{
    return;
}

int64_t decode1269181186827216205.extracted(int64_t arg1, int32_t arg2, bool* arg3)
{
    int64_t rax;
    int64_t var_8 = rax;
    if ((decode1269181186827216205.extracted.extracted(arg2, arg3) & 1) == 0)
    {
        return 0;
    }
    return 1;
}

int64_t decode1269181186827216205.extracted.6(char arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4, int64_t* arg5, int64_t* arg6)
{
    int64_t rax;
    int64_t var_8 = rax;
    *arg2 = 0;
    *arg3 = 0x2ed;
    *arg4 = 0xc9;
    *arg5 = 0x57;
    if ((decode1269181186827216205.extracted.6.extracted(2, arg6, arg1) & 1) == 0)
    {
        return 0;
    }
    return 1;
}

int64_t decode1269181186827216205..split.7() __pure
{
    return;
}

int64_t decode1269181186827216205.extracted.extracted(int32_t arg1, bool* arg2)
{
    int32_t rax_1 = ((arg1 * arg1) + arg1);
    int32_t rcx_3 = (((rax_1 >> 0x1f) + rax_1) & 0xfffffffe);
    *arg2 = rax_1 == rcx_3;
    if (rax_1 != rcx_3)
    {
        return 0;
    }
    rax_1 = 1;
    return rax_1;
}

int64_t decode1269181186827216205.extracted.6.extracted(int64_t arg1, int64_t* arg2, char arg3)
{
    *arg2 = arg1;
    if ((arg3 & 1) == 0)
    {
        return 0;
    }
    int64_t rax;
    rax = 1;
    return rax;
}

int64_t init12029237271793693494.extracted(int64_t arg1, int32_t arg2, int64_t arg3, int64_t arg4, int32_t* arg5, int32_t* arg6, int32_t* arg7, int64_t* arg8, int64_t arg9, bool* arg10, int64_t* arg11, int64_t* arg12, int64_t* arg13, int64_t* arg14, int64_t* arg15, int64_t* arg16, int64_t* arg17, int64_t* arg18, int64_t* arg19, int64_t* arg20, int64_t* arg21, int64_t* arg22, int64_t* arg23, int64_t* arg24, int64_t* arg25, int64_t* arg26, int64_t* arg27, int64_t* arg28, int64_t* arg29, int32_t* arg30, int64_t* arg31, int32_t* arg32, int64_t* arg33, char* arg34, char* arg35, char* arg36, char* arg37, bool* arg38, char* arg39, char* arg40, char* arg41, char* arg42, char* arg43, char* arg44, char* arg45, int32_t* arg46, int32_t* arg47, int64_t arg48)
{
    int64_t rax_1 = !(arg1);
    *arg11 = rax_1;
    *arg12 = rax_1;
    int64_t rbp_1 = arg2;
    *arg13 = rbp_1;
    int64_t r12_1 = ((-0x52420b6fdaa68611 & rbp_1) + (rbp_1 | 0xadbdf490255979ef));
    *arg14 = r12_1;
    *arg15 = (-0x60428da426ec4cb9 + rbp_1);
    int64_t var_58 = arg48;
    char rax_2 = init12029237271793693494.extracted.extracted((-0x60428da426ec4cb9 + rbp_1), arg16, arg2, arg17, arg18, arg19, arg20, arg21, arg22, r12_1, arg23, arg24, arg25, arg3, arg26, rax_1, arg27, arg28, arg4, arg29, arg30, arg5, arg6, arg31, arg32, arg7, arg8, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg9, arg10);
    if ((rax_2 & 1) == 0)
    {
        rax_2 = 0;
    }
    else
    {
        rax_2 = 1;
    }
    return rax_2;
}

bool* init12029237271793693494.extracted.extracted(int64_t arg1, int64_t* arg2, int32_t arg3, int64_t* arg4, int64_t* arg5, int64_t* arg6, int64_t* arg7, int64_t* arg8, int64_t* arg9, int64_t arg10, int64_t* arg11, int64_t* arg12, int64_t* arg13, int64_t arg14, int64_t* arg15, int64_t arg16, int64_t* arg17, int64_t* arg18, int64_t arg19, int64_t* arg20, int32_t* arg21, int32_t* arg22, int32_t* arg23, int64_t* arg24, int32_t* arg25, int32_t* arg26, int64_t* arg27, int64_t* arg28, char* arg29, char* arg30, char* arg31, char* arg32, bool* arg33, char* arg34, char* arg35, char* arg36, char* arg37, char* arg38, char* arg39, char* arg40, int32_t* arg41, int32_t* arg42, int64_t arg43, bool* arg44)
{
    *arg2 = (0xe0082344c45c6a8 + arg1);
    int64_t rdx = arg3;
    *arg4 = rdx;
    *arg5 = (rdx - 0x96773ebef4030c5);
    int64_t rdi_1 = (rdx & 0xf6988c1410bfcf3b);
    *arg6 = rdi_1;
    *arg7 = (rdi_1 * 2);
    int64_t rdx_1 = (rdx ^ 0xf6988c1410bfcf3b);
    *arg8 = rdx_1;
    int64_t rdx_2 = (rdx_1 + (rdi_1 << 1));
    *arg9 = rdx_2;
    int64_t rcx_3 = ((arg10 | 0xde1ae5bd1b831889) - (arg10 & 0xde1ae5bd1b831889));
    *arg11 = rcx_3;
    int64_t rcx_4 = (rcx_3 ^ rdx_2);
    *arg12 = rcx_4;
    int64_t rcx_5 = (rcx_4 ^ (0xe0082344c45c6a8 + arg1));
    *arg13 = rcx_5;
    int64_t rdx_5 = (0 ^ (rcx_5 ^ arg14));
    *arg15 = rdx_5;
    int64_t rdx_6 = (rdx_5 ^ arg16);
    *arg17 = rdx_6;
    int64_t rdx_7 = (rdx_6 ^ (rdx - 0x96773ebef4030c5));
    *arg18 = rdx_7;
    int64_t rdx_8 = (rdx_7 * arg19);
    *arg20 = rdx_8;
    *arg21 = rdx_8;
    *arg22 = rdx_8;
    *arg24 = arg23;
    int32_t rax_9 = *arg23;
    *arg25 = rax_9;
    *arg26 = rax_9;
    char* rcx_13 = *arg27;
    *arg28 = rcx_13;
    uint8_t rcx_14 = *rcx_13;
    *arg29 = rcx_14;
    uint8_t rax_12 = (rcx_14 * rcx_14);
    *arg30 = rax_12;
    rax_12 = (rax_12 + rcx_14);
    *arg31 = rax_12;
    uint8_t rdx_10 = (((rax_12 >> 7) + rax_12) & 0xfe);
    *arg32 = (rax_12 - rdx_10);
    *arg33 = rax_12 == rdx_10;
    rcx_14 = (rcx_14 * 2);
    *arg34 = rcx_14;
    *arg35 = (rcx_14 + 2);
    *arg36 = rcx_14;
    int64_t rcx_18 = (((arg43 * arg43) * arg43) + arg43);
    int64_t rdx_17 = (((rcx_18 >> 0x3f) + rcx_18) & 0xfffffffffffffffe);
    *arg37 = (rcx_14 * (rcx_14 + 2));
    *arg38 = 0;
    *arg39 = 1;
    *arg40 = 1;
    *arg41 = 0x189fde45;
    *arg42 = 0x189fde43;
    *arg44 = rcx_18 == rdx_17;
    if (rcx_18 != rdx_17)
    {
        return 0;
    }
    bool* rax_21;
    rax_21 = 1;
    return rax_21;
}

void __libc_csu_init()
{
    _init();
    int64_t i = 0;
    do
    {
        int64_t rdx;
        int64_t rsi;
        int32_t rdi;
        __frame_dummy_init_array_entry[i](rdi, rsi, rdx);
        i = (i + 1);
    } while (2 != i);
}

void __libc_csu_fini() __pure
{
    return;
}

int64_t _fini() __pure
{
    return;
}
