// Function: FUN_00d16be0
// Address: 00d16be0
// Size: 570 bytes
// Class: GNQualifierVariable
// String references:
//   "GNQualifierVariable"

void FUN_00d16be0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *this_ptr;
  uint32_t uVar6;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  plVar1 = (int64_t *)this_ptr[4];
  if ((g_0277ce78 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_0277cdc8 = FUN_00d4fe50();
    g_0277cdb0 = "GNQualifierVariable";
    g_0277cdb8 = 0x18;
    g_0277cdc0 = FUN_00d17140;
    g_0277cdd0 = 0;
    ram_000000000277cdd8 = 0;
    g_0277cde0 = 0;
    g_0277ce58 = 0;
    ram_000000000277ce60 = 0;
    g_0277ce68 = 0;
    g_0277ce6a = 1;
    g_0277cde8 = 0;
    ram_000000000277cdf0 = 0;
    g_0277cdf8 = 0;
    ram_000000000277ce00 = 0;
    g_0277ce08 = 0;
    ram_000000000277ce10 = 0;
    g_0277ce18 = 0;
    ram_000000000277ce20 = 0;
    g_0277ce28 = 0;
    ram_000000000277ce30 = 0;
    g_0277ce38 = 0;
    ram_000000000277ce40 = 0;
    g_0277ce48 = 0;
    ram_000000000277ce50 = 0;
    g_0277ce73 = 0;
    g_0277ce6b = 0;
    ___cxa_guard_release();
  }
  plVar2 = g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar2 = g_02802688;
    if (cVar4 != '\0') {
      plVar2 = (int64_t *)this_ptr[4];
    }
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*this_ptr + 0x3d0))();
    local_38 = local_58;
    local_30 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_30 = '\x01';
    uVar6 = (**(code **)(*plVar2 + 0x370))();
    lVar3 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        uVar6 = FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_68 = lVar3;
    local_60 = '\0';
    FUN_00ca0840(uVar6,&local_68);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

