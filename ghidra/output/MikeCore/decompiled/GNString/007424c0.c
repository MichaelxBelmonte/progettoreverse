// Function: FUN_007424c0
// Address: 007424c0
// Size: 720 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00742553) */
/* WARNING: Removing unreachable block (ram,0x0074256b) */
/* WARNING: Removing unreachable block (ram,0x00742570) */
/* WARNING: Removing unreachable block (ram,0x00742578) */
/* WARNING: Removing unreachable block (ram,0x00742581) */
/* WARNING: Removing unreachable block (ram,0x007426fd) */
/* WARNING: Removing unreachable block (ram,0x0074270a) */
/* WARNING: Removing unreachable block (ram,0x00742559) */
/* WARNING: Removing unreachable block (ram,0x007425a2) */
/* WARNING: Removing unreachable block (ram,0x0074255e) */
/* WARNING: Removing unreachable block (ram,0x0074250c) */
/* WARNING: Removing unreachable block (ram,0x00742515) */
/* WARNING: Removing unreachable block (ram,0x00742685) */
/* WARNING: Removing unreachable block (ram,0x00742692) */

undefined8 FUN_007424c0(undefined8 param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *unaff_RSI;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  *unaff_RSI = 0;
  *param_2 = 1;
  FUN_00d99300();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  iVar2 = FUN_00d90c90();
  if (iVar2 != -1) {
    FUN_00d90c90();
    FUN_00d97ce0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_02704060;
  if (DAT_02704060 != 0) {
    FUN_00d50b00();
  }
  local_58 = lVar1;
  local_50 = '\x01';
  FUN_00d91000(1,&local_58);
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) {
    uVar10 = 0;
    goto LAB_0074271f;
  }
  if (*(int *)(local_40 + 0xc) < 1) {
LAB_00742714:
    uVar10 = 0;
  }
  else {
    uVar3 = FUN_00d8d560();
    uVar4 = uVar3;
    if (1 < *(int *)(local_40 + 0xc)) {
      uVar4 = FUN_00d8d560();
    }
    uVar10 = 0;
    if ((0 < (int)uVar3) && (0 < (int)uVar4)) {
      if ((uVar4 != 1) || (uVar4 = uVar3, uVar6 = uVar3, uVar9 = uVar3, 0x80 < (int)uVar3)) {
        iVar8 = 0;
        uVar7 = (ulonglong)uVar4;
        do {
          uVar6 = (uint)uVar7;
          iVar8 = iVar8 + (uVar6 & 1);
          uVar7 = uVar7 >> 1;
        } while (1 < uVar6);
        uVar6 = 3;
        uVar9 = uVar4;
        if ((((iVar2 != -1) || (uVar3 != 3)) || (iVar8 != 1)) &&
           (((iVar2 == -1 || (uVar3 != 1)) || (iVar8 != 1)))) {
          if (iVar2 != -1) goto LAB_00742714;
          if (((0x80 < (int)uVar3) || (uVar6 = uVar3, uVar9 = uVar3, uVar3 != uVar4)) &&
             ((uVar3 != 1 || (uVar6 = 1, uVar9 = uVar4, iVar8 != 1)))) {
            uVar5 = FUN_00e7bcc0();
            uVar10 = 0;
            if (((int)uVar5 != 1) || (uVar10 = 0, iVar8 != 1)) goto LAB_00742717;
            uVar6 = 1;
            uVar9 = (uint)((ulonglong)uVar5 >> 0x20);
          }
        }
      }
      *unaff_RSI = uVar6;
      *param_2 = uVar9;
      uVar10 = 1;
    }
  }
LAB_00742717:
  FUN_00d50b20();
LAB_0074271f:
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return uVar10;
}


