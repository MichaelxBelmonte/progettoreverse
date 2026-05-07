// Function: FUN_01d6fa10
// Address: 01d6fa10
// Size: 649 bytes
// Class: GNMenuItem


/* WARNING: Removing unreachable block (ram,0x01d6fc46) */
/* WARNING: Removing unreachable block (ram,0x01d6fc1a) */
/* WARNING: Removing unreachable block (ram,0x01d6fb9d) */
/* WARNING: Removing unreachable block (ram,0x01d6fba9) */
/* WARNING: Removing unreachable block (ram,0x01d6fc11) */
/* WARNING: Removing unreachable block (ram,0x01d6fc3d) */
/* WARNING: Removing unreachable block (ram,0x01d6fc6c) */
/* WARNING: Removing unreachable block (ram,0x01d6fc75) */

void FUN_01d6fa10(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar6;
  longlong local_50;
  char local_48;
  longlong *local_40;
  
  if (*unaff_RSI != 0) goto LAB_01d6fae6;
  FUN_00d8ede0();
  lVar1 = *unaff_RSI;
  if (lVar1 == local_50) {
    if (((char)unaff_RSI[1] != '\0') || (local_50 == 0)) goto LAB_01d6fad2;
    if (local_48 == '\0') {
      FUN_00d50b00();
      goto LAB_01d6facb;
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = local_50;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01d6facb:
      local_40 = unaff_RSI + 1;
      *(undefined1 *)local_40 = 1;
LAB_01d6fad2:
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01d6fae6;
    }
    *unaff_RSI = local_50;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  local_40 = unaff_RSI + 1;
  *(undefined1 *)local_40 = 1;
LAB_01d6fae6:
  if (*(longlong *)(unaff_RDI + 0x220) != 0) {
    iVar4 = 0;
    if (-1 < param_2) {
      iVar4 = param_2;
    }
    iVar3 = FUN_01d6fde0();
    if (iVar3 < iVar4) {
      iVar4 = FUN_01d6fde0();
    }
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_026846d0;
    puVar5[2] = &DAT_02684a60;
    *(undefined1 *)(puVar5 + 3) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x3a) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x42) = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    *(undefined2 *)(puVar5 + 0xe) = 0;
    (*DAT_026846e8)();
    FUN_01d64eb0();
    lVar1 = DAT_027f0ad8;
    if (DAT_027f0ad8 != 0) {
      FUN_00d50b00();
    }
    FUN_01d65120();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_01d65190();
    uVar6 = FUN_01d651e0();
    FUN_01d5d7f0(uVar6,iVar4);
    FUN_01d6ef90();
    FUN_00d50b20();
  }
  return;
}


