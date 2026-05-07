// Function: FUN_00e41520
// Address: 00e41520
// Size: 823 bytes
// Class: GNLocalizationTarget
// String references:
//   "GNLocalizationTarget"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e41520(void)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar8;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar6 = *unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar2 != lVar6) {
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x40) = lVar6;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ca1380();
  local_38[0] = local_40[0];
  pcVar7 = local_40;
  if (local_40[0] == '\0') {
    pcVar7 = local_38;
  }
  *pcVar7 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  local_70 = local_48;
  uVar1 = *(uint *)(local_48 + 0xc);
  if (0 < (int)uVar1) {
    uVar8 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(local_70 + 0x10) + uVar8 * 8);
      if (DAT_026df950 == '\0') {
        iVar5 = ___cxa_guard_acquire();
        if (iVar5 != 0) {
          _DAT_026d6330 = "GNLocalizationTarget";
          DAT_026d6340 = 0;
          _DAT_026d6338 = 0;
          ___cxa_guard_release();
        }
      }
      if (plVar3 == (longlong *)0x0) {
        lVar6 = 0;
      }
      else {
        (**(code **)(*plVar3 + 0x360))();
        lVar6 = FUN_00e86120();
      }
      FUN_00c9fe20();
      local_38[0] = local_40[0];
      pcVar7 = local_40;
      if (local_40[0] == '\0') {
        pcVar7 = local_38;
      }
      *pcVar7 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = *(longlong *)(*(longlong *)(local_48 + 0x10) + uVar8 * 8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      FUN_00ca1380();
      local_38[0] = local_40[0];
      pcVar7 = local_40;
      if (local_40[0] == '\0') {
        pcVar7 = local_38;
      }
      *pcVar7 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar4 = *(longlong *)(*(longlong *)(local_48 + 0x10) + uVar8 * 8);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      FUN_00e41a10();
      if ((local_40[0] == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      local_60 = 0;
      FUN_00d50b00();
      lVar4 = local_78;
      local_60 = '\x01';
      local_98 = local_78;
      local_90 = '\0';
      local_88 = local_48;
      local_80 = '\0';
      local_68 = unaff_RDI;
      (**(code **)(*(longlong *)((longlong)plVar3 + lVar6) + 0x20))(&local_88,&local_98);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar8);
  }
  FUN_00d50b20();
  return;
}


