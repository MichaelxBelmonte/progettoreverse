// Function: FUN_01ca93d0
// Address: 01ca93d0
// Size: 746 bytes
// Class: GNList
// String references:
//   "GNList"


/* WARNING: Removing unreachable block (ram,0x01ca95a6) */
/* WARNING: Removing unreachable block (ram,0x01ca95af) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ca93d0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  undefined4 uVar7;
  longlong local_90;
  undefined1 local_88;
  longlong *local_68;
  longlong local_48;
  char local_40;
  
  plVar6 = (longlong *)*unaff_RSI;
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  if (*param_2 == 0) {
    return;
  }
  if ((DAT_027048b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026cd478 = FUN_00d4fe50();
    DAT_026cd460 = "GNList";
    _DAT_026cd468 = 0x20;
    _DAT_026cd470 = FUN_00018210;
    _DAT_026cd480 = 0;
    uRam00000000026cd488 = 0;
    _DAT_026cd490 = 0;
    _DAT_026cd508 = 0;
    uRam00000000026cd510 = 0;
    _DAT_026cd518 = 0;
    DAT_026cd51a = 6;
    _DAT_026cd498 = 0;
    uRam00000000026cd4a0 = 0;
    _DAT_026cd4a8 = 0;
    uRam00000000026cd4b0 = 0;
    _DAT_026cd4b8 = 0;
    uRam00000000026cd4c0 = 0;
    _DAT_026cd4c8 = 0;
    uRam00000000026cd4d0 = 0;
    _DAT_026cd4d8 = 0;
    uRam00000000026cd4e0 = 0;
    _DAT_026cd4e8 = 0;
    uRam00000000026cd4f0 = 0;
    _DAT_026cd4f8 = 0;
    uRam00000000026cd500 = 0;
    DAT_026cd523 = 0;
    _DAT_026cd51b = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar6 + 0x360))();
  cVar4 = FUN_00e85ea0();
  plVar6 = unaff_RSI;
  if (cVar4 == '\0') {
    plVar6 = &DAT_02802688;
  }
  lVar1 = *plVar6;
  if (lVar1 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = (char)plVar6[1];
    if (cVar4 != '\0') {
      FUN_00d50b00();
    }
    FUN_01ca5b70();
    lVar2 = *unaff_RSI;
    if (lVar2 == local_48) {
      if (((char)unaff_RSI[1] != '\0') || (local_48 == 0)) {
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01ca9513;
      }
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      lVar3 = unaff_RSI[1];
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = local_48;
        if (((char)lVar3 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *unaff_RSI = local_48;
        if (((char)lVar3 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    local_68 = unaff_RSI + 1;
    *(undefined1 *)local_68 = 1;
  }
LAB_01ca9513:
  uVar7 = FUN_002edd50();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_90 = *param_2;
  local_88 = 0;
  FUN_01cac7f0(uVar7,&local_90);
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return;
}


