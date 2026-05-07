// Function: FUN_00490b50
// Address: 00490b50
// Size: 949 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"
//   ".%@"

void FUN_00490b50(void* param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  void* pVar9;
  int64_t *plVar10;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t **pplVar11;
  uint32_t uVar12;
  int64_t local_80;
  char local_78;
  int64_t *local_68;
  uint32_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t *local_40;
  int64_t *local_38;
  
  local_48 = *(int64_t *)(arg1 + 0x118);
  if (local_48 == 0) {
    bVar4 = false;
LAB_00490dc4:
    lVar5 = g_02708750;
    local_38 = (int64_t *)0x0;
    local_40 = (int64_t *)0x0;
    bVar1 = false;
    bVar2 = true;
    bVar3 = true;
    *(void*)(this_ptr + 1) = 0;
joined_r0x00490dd6:
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar5;
    *(void*)(this_ptr + 1) = 1;
    if (!bVar1) goto LAB_00490e26;
  }
  else {
    FUN_00d50b00();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    pplVar11 = &local_68;
    FUN_01320d00();
    plVar10 = local_68;
    if ((g_026fdd70 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
      g_026e3238 = FUN_00115af0();
      g_026e3220 = "MUAudioFileSource";
      g_026e3228 = 0xa0;
      g_026e3230 = FUN_00136df0;
      g_026e3240 = 0;
      ram_00000000026e3248 = 0;
      g_026e3250 = 0;
      ram_00000000026e3258 = 0;
      g_026e3260 = 0;
      ram_00000000026e3268 = 0;
      g_026e3270 = 0;
      ram_00000000026e3278 = 0;
      g_026e3280 = 0;
      ram_00000000026e3288 = 0;
      g_026e3290 = 0;
      ram_00000000026e3298 = 0;
      g_026e32a0 = 0;
      ram_00000000026e32a8 = 0;
      g_026e32b0 = 0;
      ram_00000000026e32b8 = 0;
      g_026e32c0 = 0;
      ram_00000000026e32c8 = 0;
      g_026e32d0 = 0;
      ram_00000000026e32d8 = 0;
      g_026e32e0 = 0;
      ___cxa_guard_release();
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_00490bf9:
      pplVar11 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      if (cVar6 == '\0') goto LAB_00490bf9;
    }
    plVar10 = *pplVar11;
    local_38 = plVar10;
    if (plVar10 == (int64_t *)0x0) {
      local_38 = (int64_t *)0x0;
      bVar4 = false;
    }
    else {
      if (*(char *)(pplVar11 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(void*)(pplVar11 + 1) = 0;
      }
      bVar4 = true;
    }
    pVar9 = (void*)plVar10;
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 == (int64_t *)0x0) goto LAB_00490dc4;
    pvVar8 = _pthread_getspecific(pVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    local_40 = local_68;
    if (local_68 == (int64_t *)0x0) {
      bVar2 = true;
      bVar1 = false;
      local_40 = (int64_t *)0x0;
LAB_00490dee:
      lVar5 = g_02708750;
      bVar3 = false;
      *(void*)(this_ptr + 1) = 0;
      goto joined_r0x00490dd6;
    }
    if ((char)local_60 == '\0') {
      FUN_00d50b00();
      if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*local_40 + 0x380))();
    plVar10 = local_68;
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (int64_t *)0x0) {
      bVar2 = false;
      bVar1 = true;
      goto LAB_00490dee;
    }
    uVar12 = (**(code **)(*local_40 + 0x380))();
    local_60 = 1;
    local_68 = &g_024c5048;
    local_50 = 0;
    if (local_80 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_58 = local_80;
    local_50 = '\x01';
    FUN_00d8cb40(uVar12,&local_68);
    local_68 = &g_024c5048;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    bVar2 = false;
    bVar3 = false;
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
LAB_00490e26:
  if (bVar4 && !bVar3) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}

