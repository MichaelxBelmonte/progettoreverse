// Function: FUN_00d4b8e0
// Address: 00d4b8e0
// Size: 882 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d4b8e0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  longlong local_68;
  char local_60 [8];
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  if (*param_2 == 0) {
    FUN_00d8ede0();
    return;
  }
  cVar3 = FUN_00d495a0();
  if (cVar3 != '\0') {
    local_58 = *param_2;
    local_50 = '\0';
    cVar3 = FUN_00c9ff50();
    uVar8 = extraout_XMM0_Da;
    if ((local_50 != '\0') && (local_58 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      local_48 = *param_2;
      local_40 = '\0';
      FUN_00c9fe40(uVar8,&local_48);
      pcVar7 = local_38;
      if (local_60[0] != '\0') {
        pcVar7 = local_60;
      }
      local_38[0] = local_60[0];
      *pcVar7 = '\0';
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if ((local_38[0] == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      *unaff_RDI = local_68;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (local_40 == '\0') {
        return;
      }
      if (local_48 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  plVar6 = (longlong *)*param_2;
  FUN_00053ac0();
  if (plVar6 == (longlong *)0x0) {
LAB_00d4ba08:
    plVar6 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar6 = param_2;
    if (cVar3 == '\0') goto LAB_00d4ba08;
  }
  cVar3 = (char)plVar6[1];
  if ((cVar3 != '\0') && (*plVar6 != 0)) {
    FUN_00d50b00();
LAB_00d4ba3a:
    uVar4 = FUN_00dd6e50();
    switch(uVar4) {
    case 0x49:
      uVar8 = FUN_00d45870();
      (**(code **)(*unaff_RSI + 0x368))(*unaff_RSI,uVar8);
      if (cVar3 != '\0') {
        FUN_00d50b20();
      }
      break;
    default:
      FUN_00d459e0();
      (**(code **)(*unaff_RSI + 0x378))();
      if (cVar3 != '\0') {
        FUN_00d50b20();
      }
      break;
    case 0x65:
    case 0x69:
      uVar8 = FUN_00d460c0();
      (**(code **)(*unaff_RSI + 0x368))(*unaff_RSI,uVar8);
      if (cVar3 != '\0') {
        FUN_00d50b20();
      }
      break;
    case 0x6c:
      uVar8 = FUN_00d45790();
      (**(code **)(*unaff_RSI + 0x368))(*unaff_RSI,uVar8);
      if (cVar3 != '\0') {
        FUN_00d50b20();
      }
    }
    return;
  }
  if (*plVar6 != 0) goto LAB_00d4ba3a;
  plVar6 = (longlong *)*param_2;
  if ((DAT_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00d4bacc;
  }
  param_2 = &DAT_02802688;
LAB_00d4bacc:
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (((char)lVar2 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)lVar2 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    FUN_00d50b00();
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  *unaff_RDI = lVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


