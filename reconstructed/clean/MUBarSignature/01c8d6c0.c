// Function: FUN_01c8d6c0
// Address: 01c8d6c0
// Size: 714 bytes
// Class: MUBarSignature
// String references:
//   "MUBarSignature"

uint64_t FUN_01c8d6c0(void* param_1,char param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t this_ptr;
  int64_t **pplVar6;
  uint64_t unaff_R14;
  uint64_t uVar7;
  bool bVar9;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  undefined7 uVar8;
  
  if (*(int64_t *)(this_ptr + 0x180) == 0) {
    uVar7 = 0;
    goto LAB_01c8d8b2;
  }
  bVar9 = *(int *)(this_ptr + 0x18c) == 0;
  uVar8 = (undefined7)((uint64_t)unaff_R14 >> 8);
  uVar7 = CONCAT71(uVar8,!bVar9);
  if (((bVar9) || (param_2 == '\0')) ||
     (uVar7 = CONCAT71(uVar8,1), *(int64_t *)(this_ptr + 0x158) == 0)) goto LAB_01c8d8b2;
  FUN_00d50b00();
  FUN_00d50b20();
  pplVar6 = &local_60;
  (**(code **)(**(int64_t **)(this_ptr + 0x180) + 0x980))();
  plVar1 = local_60;
  if ((g_026d8a28 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027ed1e8 = FUN_00d4fe50();
    g_027ed1d0 = "MUBarSignature";
    g_027ed1d8 = 0x18;
    param_1 = 0x92680;
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
  if (plVar1 == (int64_t *)0x0) {
LAB_01c8d76d:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01c8d76d;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    lVar2 = *(int64_t *)(this_ptr + 0x158);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = '\0';
    local_50 = plVar1;
    FUN_01703b00(&local_50,*(void*)(this_ptr + 0x188));
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x1a8) != 0) {
      FUN_01c4e030();
    }
    lVar2 = *(int64_t *)(this_ptr + 0x158);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar2;
    FUN_01c453b0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01c886d0();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01c8d8b2:
  return uVar7 & 0xffffffff;
}

