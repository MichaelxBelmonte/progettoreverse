// Function: FUN_009df20a
// Address: 009df20a
// Size: 580 bytes
// Class: Unknown

uint64_t * FUN_009df20a(string *param_1,string *param_2)

{
  uint uVar1;
  string *psVar2;
  string *psVar3;
  int64_t lVar4;
  char *pcVar5;
  string *psVar6;
  void*puVar7;
  string sVar8;
  undefined7 uVar9;
  void*puVar10;
  int64_t arg1;
  uint64_t *this_ptr;
  uint64_t uVar11;
  uint64_t local_68;
  void*local_60;
  int64_t local_58;
  uint64_t local_48;
  uint64_t local_40;
  string *local_38;
  
  uVar9 = (undefined7)((uint64_t)param_2 >> 8);
  sVar8 = SUB81(param_2,0);
  psVar6 = param_1;
  if (*(int64_t *)(arg1 + 0x160) == 0) {
    uVar11 = (int64_t)param_1 - (int64_t)param_2;
  }
  else {
    uVar11 = (int64_t)param_1 - (int64_t)param_2;
    if (0xffffffffffffffef < uVar11) goto LAB_009df43c;
    psVar2 = param_2;
    if (uVar11 < 0x17) {
      uVar1 = (int)uVar11 * 2;
      psVar6 = (string *)(uint64_t)uVar1;
      psVar3 = (string *)((int64_t)&local_48 + 1);
      local_48 = CONCAT71(local_48._1_7_,(char)uVar1);
    }
    else {
      psVar3 = operator_new((ulong)param_1);
      local_48 = uVar11 + 0x10 & 0xfffffffffffffff0 | 1;
      local_40 = uVar11;
      local_38 = psVar3;
    }
    while (psVar2 != param_1) {
      sVar8 = *psVar2;
      *psVar3 = sVar8;
      psVar3 = psVar3 + 1;
      psVar6 = psVar2 + 1;
      psVar2 = psVar6;
    }
    *psVar3 = (string)0x0;
    lVar4 = FUN_009df470();
    if ((local_48 & 1) != 0) {
      operator_delete(psVar6);
    }
    if (lVar4 != arg1 + 0x158) {
      std::string::string(psVar6,(string *)CONCAT71(uVar9,sVar8));
      return this_ptr;
    }
  }
  if (uVar11 < 0xfffffffffffffff0) {
    psVar2 = param_2;
    if (uVar11 < 0x17) {
      uVar1 = (int)uVar11 * 2;
      psVar6 = (string *)(uint64_t)uVar1;
      psVar3 = (string *)((int64_t)&local_48 + 1);
      local_48 = CONCAT71(local_48._1_7_,(char)uVar1);
    }
    else {
      psVar3 = operator_new((ulong)psVar6);
      local_48 = uVar11 + 0x10 & 0xfffffffffffffff0 | 1;
      local_40 = uVar11;
      local_38 = psVar3;
    }
    while (psVar2 != param_1) {
      *psVar3 = *psVar2;
      psVar3 = psVar3 + 1;
      psVar6 = psVar2 + 1;
      psVar2 = psVar6;
    }
    *psVar3 = (string)0x0;
    FUN_00acf710();
    if ((local_48 & 1) != 0) {
      operator_delete(psVar6);
    }
    puVar7 = (void*)CONCAT71((int7)((uint64_t)psVar6 >> 8),1);
    puVar10 = (void*)((local_68 & 0xff) >> 1);
    if ((local_68 & 1) != 0) {
      puVar10 = local_60;
    }
    if (puVar10 == (void*)0x0) {
      if (uVar11 == 1) {
        sVar8 = *param_2;
        *(char *)this_ptr = '\x02';
        *(string *)((int64_t)this_ptr + 1) = sVar8;
        *(char *)((int64_t)this_ptr + 2) = '\0';
      }
      else {
        this_ptr[2] = 0;
        this_ptr[1] = 0;
        *this_ptr = 0;
      }
    }
    else {
      if ((local_68 & 1) == 0) {
        local_58 = (int64_t)&local_48 + 1;
      }
      if ((void*)0xffffffffffffffef < puVar10) {
                            std::__basic_string_common<true>::__throw_length_error();
      }
      if ((void*)((int64_t)&MACH_HEADER.sizeofcmds + 2) < puVar10) {
        pcVar5 = operator_new((ulong)puVar7);
        this_ptr[2] = (uint64_t)pcVar5;
        *this_ptr = (uint64_t)(puVar10 + 0x10) & 0xfffffffffffffff0 | 1;
        this_ptr[1] = (uint64_t)puVar10;
      }
      else {
        *(char *)this_ptr = (char)puVar10 * '\x02';
        pcVar5 = (char *)((int64_t)this_ptr + 1);
      }
      puVar7 = (void*)0x0;
      do {
        pcVar5[(int64_t)puVar7] = puVar7[local_58];
        puVar7 = puVar7 + 1;
      } while (puVar10 != puVar7);
      pcVar5[(int64_t)puVar7] = '\0';
    }
    if ((local_68 & 1) != 0) {
      operator_delete(puVar7);
    }
    return this_ptr;
  }
LAB_009df43c:
                      std::__basic_string_common<true>::__throw_length_error();
}

