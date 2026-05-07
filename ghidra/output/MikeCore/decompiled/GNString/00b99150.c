// Function: FUN_00b99150
// Address: 00b99150
// Size: 1543 bytes
// Class: GNString
// String references:
//   "regn"


/* WARNING: Removing unreachable block (ram,0x00b994b0) */
/* WARNING: Removing unreachable block (ram,0x00b994bc) */
/* WARNING: Removing unreachable block (ram,0x00b995ab) */
/* WARNING: Removing unreachable block (ram,0x00b995b4) */
/* WARNING: Removing unreachable block (ram,0x00b9928f) */
/* WARNING: Removing unreachable block (ram,0x00b9929b) */

void FUN_00b99150(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong unaff_RDI;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_c0;
  char local_b8;
  longlong local_58;
  char local_50;
  longlong local_48;
  int local_40;
  longlong local_38;
  
  FUN_00ae7ec0();
  lVar1 = DAT_02765240;
  if (*(longlong *)(unaff_RDI + 0x48) == 0) goto LAB_00b995d8;
  if (DAT_02765240 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  lVar2 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_38 = lVar2;
  if (lVar2 != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_48 = *(longlong *)(lVar2 + 0x10);
    local_40 = 0;
    lVar1 = DAT_02764940;
    if (0 < *(int *)(local_48 + 0xc)) {
      do {
        local_58 = *(longlong *)(*(longlong *)(local_48 + 0x10) + (longlong)local_40 * 8);
        FUN_00e6fcd0((longlong)local_40,&local_58);
        if ((local_b8 == '\0') && (local_c0 != 0)) {
          FUN_00d50b00();
        }
        lVar1 = DAT_02764950;
        if (DAT_02764950 != 0) {
          FUN_00d50b00();
        }
        cVar4 = FUN_00d50f90();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          lVar1 = *(longlong *)(unaff_RDI + 0x18);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00bc0a20();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        if (local_c0 != 0) {
          FUN_00d50b20();
        }
        local_40 = local_40 + 1;
      } while (local_40 < *(int *)(local_48 + 0xc));
      lVar1 = DAT_02764940;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
        lVar1 = DAT_02764940;
      }
    }
    DAT_02764940 = lVar1;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    lVar3 = local_38;
    FUN_000175c0();
    lVar2 = local_58;
    if (lVar3 == local_58) {
LAB_00b9943c:
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        local_38 = lVar2;
        FUN_00d50b20();
        goto LAB_00b9943c;
      }
      local_38 = local_58;
      FUN_00d50b20();
      local_50 = '\0';
      local_38 = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  uVar5 = FUN_00ccce90();
  FUN_00bb2c20(*(undefined8 *)(unaff_RDI + 0x38),uVar5);
  lVar1 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0x18)) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x398))();
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x388))(4,"regn");
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      FUN_00ccdf50();
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      FUN_00ccdbb0();
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
LAB_00b995d8:
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x3a0))();
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccdf50();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x3a0))();
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccdf50();
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x3a0))();
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccdf50();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  return;
}


