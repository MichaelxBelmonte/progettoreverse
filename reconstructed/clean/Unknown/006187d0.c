// Function: FUN_006187d0
// Address: 006187d0
// Size: 500 bytes
// Class: Unknown

uint64_t FUN_006187d0(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  byte bVar4;
  uint64_t uVar5;
  undefined7 uVar6;
  int64_t this_ptr;
  bool bVar7;
  double dVar8;
  uint64_t uVar9;
  int64_t local_58;
  char local_50;
  uint32_t local_44;
  int64_t *local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026f6fa0;
  if (cVar3 == '\0') {
    local_44 = param_2;
    if (g_026f6fa0 != 0) {
      FUN_00d50b00();
    }
    dVar8 = (double)FUN_00e7d6f0();
    uVar5 = (uint64_t)(dVar8 * g_023907c0);
    dVar8 = dVar8 * g_023907c0 - g_023907c8;
    uVar9 = FUN_0071a120();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
    }
    bVar4 = (byte)(((int64_t)dVar8 & (int64_t)uVar5 >> 0x3f | uVar5) / 3);
    local_58 = lVar1;
    local_50 = '\0';
    FUN_000175c0(uVar9,&local_58);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      local_38 = '\0';
      local_40 = plVar2;
      bVar4 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar6 = (undefined7)((uint64_t)plVar2 >> 8);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (((plVar2 != (int64_t *)0x0 & bVar4) != 0) &&
       (lVar1 = *(int64_t *)(this_ptr + 0x80), lVar1 != 0)) {
      FUN_00d50b00();
      bVar7 = *(int64_t *)(lVar1 + 0x308) == 0;
      uVar5 = CONCAT71(uVar6,bVar7);
      if ((bVar7) && ((char)local_44 != '\0')) {
        FUN_005366b0();
        uVar5 = CONCAT71(uVar6,1);
        FUN_005366c0();
      }
      FUN_00d50b20();
      goto LAB_006189b3;
    }
  }
  uVar5 = 0;
LAB_006189b3:
  return uVar5 & 0xffffffff;
}

