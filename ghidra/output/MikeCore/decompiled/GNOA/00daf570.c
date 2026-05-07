// Function: FUN_00daf570
// Address: 00daf570
// Size: 951 bytes
// Class: GNOA
// String references:
//   "Cannot open stream"


/* WARNING: Removing unreachable block (ram,0x00daf5c9) */
/* WARNING: Removing unreachable block (ram,0x00daf5d5) */
/* WARNING: Removing unreachable block (ram,0x00daf658) */
/* WARNING: Removing unreachable block (ram,0x00daf664) */
/* WARNING: Removing unreachable block (ram,0x00daf6e6) */
/* WARNING: Removing unreachable block (ram,0x00daf6f2) */

void FUN_00daf570(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar6;
  longlong local_f0;
  char local_e8;
  longlong local_90;
  char local_88;
  longlong local_48;
  char local_40;
  
  FUN_00c8e830();
  lVar3 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if (lVar3 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00c92170();
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar5 = (longlong)&DAT_0256d868;
    plVar5[2] = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x24) = 0;
    *(undefined4 *)((longlong)plVar5 + 0x2c) = 0;
    (*DAT_0256d880)();
    FUN_00cccfe0();
    FUN_00d50b20();
    iVar4 = FUN_00daed40();
    lVar3 = DAT_02782eb0;
    if (iVar4 == -1) {
      if (DAT_02782eb0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    uVar6 = FUN_00daa940();
    lVar3 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != 0) && (uVar6 = FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        uVar6 = FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    lVar2 = DAT_027815a8;
    if (lVar3 == 0) {
      if (DAT_027815a8 != 0) {
        uVar6 = FUN_00d50b00();
      }
      uVar6 = FUN_00cc7b40(uVar6,DAT_025908a0);
      if (lVar2 != 0) {
        uVar6 = FUN_00d50b20();
      }
    }
    local_90 = lVar3;
    local_88 = '\0';
    (**(code **)(*unaff_RSI + 0x618))(uVar6,&local_90);
    lVar2 = local_48;
    if (local_48 == 0) {
      bVar1 = false;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
      bVar1 = true;
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar5 + 0x368))();
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((!bVar1) && (lVar2 != 0)) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  return;
}


