// Function: FUN_01f54830
// Address: 01f54830
// Size: 806 bytes
// Class: Unknown
// String references:
//   "format:ico type:%d reserved:%d"
//   "reading image %d faied"


/* WARNING: Removing unreachable block (ram,0x01f5486d) */
/* WARNING: Removing unreachable block (ram,0x01f54879) */

void FUN_01f54830(void)

{
  longlong lVar1;
  undefined *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong unaff_RDI;
  undefined4 uVar5;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  undefined1 local_54 [4];
  undefined *local_50;
  uint local_48;
  short local_44;
  longlong *local_40;
  short local_34;
  short local_32;
  
  FUN_01ea3610();
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar3 = (longlong)&DAT_0256d868;
  plVar3[2] = 0;
  *(undefined8 *)((longlong)plVar3 + 0x1c) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x24) = 0;
  *(undefined4 *)((longlong)plVar3 + 0x2c) = 0;
  local_40 = plVar3;
  (*DAT_0256d880)();
  lVar1 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00cccfe0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00ccce80();
  FUN_00ccd330(local_54,&local_34);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_54,&local_32);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_54,(short *)(unaff_RDI + 0x20));
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = (**(code **)(*local_40 + 0x368))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = DAT_027fe2e8;
  if ((local_32 != 1) || (local_34 != 0)) {
    if (DAT_027fe2e8 != 0) {
      FUN_00d50b00();
    }
    local_48 = 2;
    local_50 = &DAT_026bb968;
    local_44 = local_32;
    uVar5 = FUN_00cc7b40(&DAT_026bb968,&local_50);
    if (lVar1 != 0) {
      uVar5 = FUN_00d50b20();
    }
  }
  if (0 < *(short *)(unaff_RDI + 0x20)) {
    iVar4 = 0;
    do {
      uVar5 = FUN_01f54d20(uVar5,iVar4);
      puVar2 = local_50;
      lVar1 = DAT_027fe2e8;
      if ((char)local_48 == '\0') {
        if (local_50 == (undefined *)0x0) goto LAB_01f54af0;
        FUN_00d50b00();
LAB_01f54abd:
        local_48 = local_48 & 0xffffff00;
        local_50 = puVar2;
        FUN_00d21140();
        if (((char)local_48 != '\0') && (local_50 != (undefined *)0x0)) {
          FUN_00d50b20();
        }
        uVar5 = FUN_00d50b20();
      }
      else {
        if (local_50 != (undefined *)0x0) goto LAB_01f54abd;
LAB_01f54af0:
        if (DAT_027fe2e8 != 0) {
          uVar5 = FUN_00d50b00();
        }
        local_48 = 1;
        local_50 = &DAT_026bb9a0;
        local_44 = (short)iVar4;
        uVar5 = FUN_00cc7b40(uVar5,&local_50);
        if (lVar1 != 0) {
          uVar5 = FUN_00d50b20();
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(short *)(unaff_RDI + 0x20));
    if (local_40 == (longlong *)0x0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
}


