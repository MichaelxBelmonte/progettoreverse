// Function: FUN_00aca130
// Address: 00aca130
// Size: 500 bytes
// Class: OsSignatureMac

void FUN_00aca130(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  int iVar1;
  size_t sVar2;
  int64_t lVar3;
  uint32_t extraout_var;
  char *pcVar5;
  ulong uVar6;
  uint32_t uVar7;
  uint64_t *this_ptr;
  byte local_48;
  void*puVar4;
  
  uVar7 = (uint32_t)((uint64_t)param_1 >> 0x20);
  uVar6 = (ulong)param_1;
  FUN_00aca7e0();
  if ((g_028a0bb8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_028a0ba0 = 0x2e02;
    g_028a0ba2 = 0;
    ___cxa_atexit();
    ___cxa_guard_release();
  }
  iVar1 = FUN_00ac9910();
  if (iVar1 != 0) {
    if ((g_028a0bd8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      g_028a0bc0 = 4;
      g_028a0bc1 = 0x2e2e;
      g_028a0bc3 = 0;
      ___cxa_atexit();
      ___cxa_guard_release();
    }
    iVar1 = FUN_00ac9910();
    if ((iVar1 != 0) && (lVar3 = std::string::rfind((char)uVar6,0xffffffff), lVar3 != -1)) {
      sVar2 = _strlen((char *)CONCAT44(uVar7,uVar6));
      puVar4 = (void*)CONCAT44(extraout_var,sVar2);
      if ((void*)0xffffffffffffffef < puVar4) {
                            std::__basic_string_common<true>::__throw_length_error();
      }
      if ((void*)((int64_t)&MACH_HEADER.sizeofcmds + 2) < puVar4) {
        pcVar5 = operator_new(uVar6);
        this_ptr[2] = (uint64_t)pcVar5;
        *this_ptr = (uint64_t)(puVar4 + 0x10) & 0xfffffffffffffff0 | 1;
        this_ptr[1] = (uint64_t)puVar4;
      }
      else {
        *(char *)this_ptr = (char)sVar2 * '\x02';
        pcVar5 = (char *)((int64_t)this_ptr + 1);
        if (puVar4 == (void*)0x0) {
          *pcVar5 = '\0';
          goto joined_r0x00aca26c;
        }
      }
      _memcpy((void *)CONCAT44(uVar7,uVar6),puVar4,param_3);
      pcVar5[(int64_t)puVar4] = '\0';
      goto joined_r0x00aca26c;
    }
  }
  this_ptr[2] = 0;
  this_ptr[1] = 0;
  *this_ptr = 0;
joined_r0x00aca26c:
  if ((local_48 & 1) != 0) {
    operator_delete((void *)CONCAT44(uVar7,uVar6));
  }
  return;
}

