// Function: FUN_01786270
// Address: 01786270
// Size: 723 bytes
// Class: MUBarSignature
// String references:
//   "MUBarSignature"
//   "%I/%I"
//   "GNString"

void FUN_01786270(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  uint32_t uVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  void*local_40;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  
  plVar6 = (int64_t *)*param_2;
  if ((g_026d8a28 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027ed1e8 = FUN_00d4fe50();
    g_027ed1d0 = "MUBarSignature";
    g_027ed1d8 = 0x18;
    g_027ed1e0 = FUN_00092680;
    g_027ed1f0 = 0;
    ram_00000000027ed1f8 = 0;
    g_027ed200 = 0;
    g_027ed278 = 0;
    ram_00000000027ed280 = 0;
    g_027ed288 = 0;
    g_027ed28a = 2;
    g_027ed208 = 0;
    ram_00000000027ed210 = 0;
    g_027ed218 = 0;
    ram_00000000027ed220 = 0;
    g_027ed228 = 0;
    ram_00000000027ed230 = 0;
    g_027ed238 = 0;
    ram_00000000027ed240 = 0;
    g_027ed248 = 0;
    ram_00000000027ed250 = 0;
    g_027ed258 = 0;
    ram_00000000027ed260 = 0;
    g_027ed268 = 0;
    ram_00000000027ed270 = 0;
    g_027ed293 = 0;
    g_027ed28b = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_017862bd:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar6 = param_2;
    if (cVar3 == '\0') goto LAB_017862bd;
  }
  lVar1 = plVar6[1];
  if (((char)lVar1 != '\0') && (*plVar6 != 0)) {
    FUN_00d50b00();
LAB_017862e4:
    uVar4 = FUN_0123fef0();
    local_30 = FUN_0123ff00();
    local_38 = 2;
    local_40 = &g_024c3df0;
    local_34 = uVar4;
    FUN_00d8cb40(&g_024c3df0,&local_40);
    if ((char)lVar1 != '\0') {
      FUN_00d50b20();
    }
    return;
  }
  if (*plVar6 != 0) goto LAB_017862e4;
  plVar6 = (int64_t *)*param_2;
  if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01786372;
  }
  param_2 = &g_02802688;
LAB_01786372:
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (((char)lVar2 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return;
    }
    *(void*)(this_ptr + 1) = 0;
    if ((char)lVar2 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    FUN_00d50b00();
    *(void*)(this_ptr + 1) = 0;
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

