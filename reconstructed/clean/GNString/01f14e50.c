// Function: FUN_01f14e50
// Address: 01f14e50
// Size: 766 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01f14e50(int64_t *param_1)

{
  int64_t *plVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  int iVar6;
  int64_t *arg1;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  uint8_t local_60;
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  int64_t local_40;
  char local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  uVar7 = (*g_02572370)();
  if (*arg1 != 0) {
    local_60 = 0;
    local_68 = (int64_t *)0x0;
    local_58 = *arg1;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar6 = 0;
    while( true ) {
      if (iVar6 != 0) {
        if (iVar6 < 1) {
          iVar6 = -iVar6;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - iVar6);
          uVar7 = FUN_00d23690(uVar7,iVar6);
          local_48 = local_48 + iVar6;
          iVar6 = 0;
        }
        local_50 = CONCAT44(iVar6,(int)local_50);
      }
      lVar4 = (int64_t)(int)local_50;
      iVar6 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar6);
      if (*(int *)(local_58 + 0xc) <= iVar6) break;
      plVar1 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + 8 + lVar4 * 8);
      local_68 = plVar1;
      if ((g_026fd0c0 == '\0') &&
         (iVar6 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_00, iVar6 != 0)) {
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
        uVar7 = ___cxa_guard_release();
      }
      pplVar5 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar5 = &local_68;
        uVar7 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          pplVar5 = (int64_t **)&g_02802688;
        }
      }
      if (*(char *)(pplVar5 + 1) == '\0') {
        if (*pplVar5 != (int64_t *)0x0) {
          uVar7 = FUN_00d50b00();
          goto LAB_01f14fa1;
        }
      }
      else {
        *(void*)(pplVar5 + 1) = 0;
        if (*pplVar5 != (int64_t *)0x0) {
LAB_01f14fa1:
          FUN_00d8cbf0(uVar7,6);
          lVar4 = local_40;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d21140();
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          uVar7 = FUN_00d50b20();
        }
      }
      iVar6 = local_50._4_4_;
    }
    uVar7 = FUN_00083b20();
  }
  if (*(int *)((int64_t)puVar3 + 0xc) != 0) {
    local_78 = *param_1;
    local_70 = '\0';
    FUN_01ca71c0(uVar7,&local_78);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}

