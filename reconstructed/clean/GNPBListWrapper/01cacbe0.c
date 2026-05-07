// Function: FUN_01cacbe0
// Address: 01cacbe0
// Size: 608 bytes
// Class: GNPBListWrapper
// String references:
//   "GNPBListWrapper"

void FUN_01cacbe0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t local_68;
  uint8_t local_60;
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  
  local_68 = *param_2;
  if (local_68 == 0) {
LAB_01caccd6:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  local_60 = 0;
  FUN_01cac990(param_1,&local_68);
  if (local_50[0] == '\0') {
    if (local_58 == (int64_t *)0x0) goto LAB_01caccd6;
    FUN_00d50b00();
  }
  else if (local_58 == (int64_t *)0x0) goto LAB_01caccd6;
  FUN_00d23340();
  pcVar5 = local_38;
  if (local_50[0] != '\0') {
    pcVar5 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar5 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_48 = local_58;
  local_40 = '\x01';
  if ((g_026efdd0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027f89a8 = FUN_00d4fe50();
    g_027f8990 = "GNPBListWrapper";
    g_027f8998 = 0x18;
    g_027f89a0 = FUN_001e3740;
    g_027f89b0 = 0;
    ram_00000000027f89b8 = 0;
    g_027f89c0 = 0;
    ram_00000000027f89c8 = 0;
    g_027f89d0 = 0;
    ram_00000000027f89d8 = 0;
    g_027f89e0 = 0;
    ram_00000000027f89e8 = 0;
    g_027f89f0 = 0;
    ram_00000000027f89f8 = 0;
    g_027f8a00 = 0;
    ram_00000000027f8a08 = 0;
    g_027f8a10 = 0;
    ram_00000000027f8a18 = 0;
    g_027f8a20 = 0;
    ram_00000000027f8a28 = 0;
    g_027f8a30 = 0;
    ram_00000000027f8a38 = 0;
    g_027f8a40 = 0;
    ram_00000000027f8a48 = 0;
    g_027f8a50 = 0;
    ___cxa_guard_release();
  }
  if (local_58 == (int64_t *)0x0) {
LAB_01caccc1:
    plVar6 = g_02802688;
    cVar3 = g_02802690;
    if (g_02802690 == '\0') goto LAB_01cacd06;
LAB_01caccf7:
    if (plVar6 == (int64_t *)0x0) goto LAB_01cacd06;
    FUN_00d50b00();
LAB_01cacd0b:
    lVar1 = plVar6[2];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
    if (cVar3 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*local_58 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01caccc1;
    plVar6 = local_48;
    cVar3 = local_40;
    if (local_40 != '\0') goto LAB_01caccf7;
LAB_01cacd06:
    plVar2 = local_48;
    if (plVar6 != (int64_t *)0x0) goto LAB_01cacd0b;
    *(void*)(this_ptr + 1) = 0;
    if (local_40 != '\0') {
      *this_ptr = (int64_t)local_48;
      *(void*)(this_ptr + 1) = 1;
      goto LAB_01cacd5f;
    }
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *this_ptr = (int64_t)plVar2;
    *(void*)(this_ptr + 1) = 1;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01cacd5f:
  FUN_00d50b20();
  return;
}

