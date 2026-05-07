// Function: FUN_00dead60
// Address: 00dead60
// Size: 877 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x00deaf71) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00dead60(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong **pplVar5;
  longlong *unaff_RSI;
  longlong lVar6;
  uint7 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  local_70 = *param_2;
  local_68 = '\0';
  local_60 = *param_1;
  local_58 = '\0';
  uVar3 = FUN_00e93080(&local_60,&local_70);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  uVar8 = FUN_00e925a0();
  plVar9 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      uVar8 = FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
      goto LAB_00deae11;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_00deae11:
    lVar1 = DAT_02800b40;
    if (DAT_02800b40 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_50 = lVar1;
    local_48 = '\x01';
    pplVar5 = &local_40;
    FUN_000175c0(uVar8,&local_50,param_3,param_4,plVar9);
    plVar9 = local_40;
    if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_026d5e58 = FUN_00d4fe50();
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e60 = 0;
      uRam00000000026d5e68 = 0;
      _DAT_026d5e70 = 0;
      uRam00000000026d5e78 = 0;
      _DAT_026d5e80 = 0;
      uRam00000000026d5e88 = 0;
      _DAT_026d5e90 = 0;
      uRam00000000026d5e98 = 0;
      _DAT_026d5ea0 = 0;
      uRam00000000026d5ea8 = 0;
      _DAT_026d5eb0 = 0;
      uRam00000000026d5eb8 = 0;
      _DAT_026d5ec0 = 0;
      uRam00000000026d5ec8 = 0;
      _DAT_026d5ed0 = 0;
      uRam00000000026d5ed8 = 0;
      _DAT_026d5ee0 = 0;
      uRam00000000026d5ee8 = 0;
      _DAT_026d5ef0 = 0;
      uRam00000000026d5ef8 = 0;
      _DAT_026d5f00 = 0;
      ___cxa_guard_release();
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 != '\0') goto LAB_00deae7e;
    }
    pplVar5 = (longlong **)&DAT_02802688;
LAB_00deae7e:
    plVar9 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar5 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar9 != (longlong *)0x0) {
      local_38 = '\0';
      local_40 = plVar9;
      FUN_00d235a0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return (ulonglong)uVar3;
  }
  cVar2 = FUN_00e92f80();
  lVar1 = DAT_027844d0;
  if (cVar2 == '\0') {
    return (ulonglong)uVar3;
  }
  if ((unaff_RSI != (longlong *)0x0) && (*unaff_RSI == 0)) {
    lVar6 = 0;
    if (DAT_027844d0 != 0) {
      FUN_00d50b00();
      lVar6 = *unaff_RSI;
    }
    if (lVar6 == lVar1) {
      if (((char)unaff_RSI[1] != '\0') || (lVar1 == 0)) {
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        goto LAB_00deaf8c;
      }
    }
    else {
      *unaff_RSI = lVar1;
      if (((char)unaff_RSI[1] != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
LAB_00deaf8c:
  lVar1 = DAT_027844d8;
  uVar7 = (uint7)(uint3)(uVar3 >> 8);
  if (*(int *)(*param_2 + 0xc) == 0) {
    if (DAT_027844d8 != 0) {
      FUN_00d50b00();
    }
    FUN_00de8840();
    if (lVar1 != 0) {
      FUN_00d50b20();
      return CONCAT71(uVar7,1);
    }
  }
  return CONCAT71(uVar7,1);
}


