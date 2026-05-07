// Function: FUN_00e20d30
// Address: 00e20d30
// Size: 967 bytes
// Class: GNFileType


/* WARNING: Removing unreachable block (ram,0x00e20f5f) */
/* WARNING: Removing unreachable block (ram,0x00e20f68) */
/* WARNING: Removing unreachable block (ram,0x00e20e75) */
/* WARNING: Removing unreachable block (ram,0x00e20e82) */

void FUN_00e20d30(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar9;
  longlong local_40;
  char local_38;
  
  cVar7 = FUN_00e20b20();
  lVar6 = DAT_027859e0;
  lVar5 = DAT_027859d8;
  lVar3 = DAT_027859d0;
  if (cVar7 == '\0') {
LAB_00e20df4:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  iVar1 = *(int *)(unaff_RSI + 0x30);
  lVar8 = (longlong)iVar1;
  lVar2 = *(longlong *)(unaff_RSI + 0x20);
  bVar4 = false;
  lVar9 = 0;
  switch(*(undefined2 *)(lVar2 + lVar8 * 2)) {
  case 0x22:
    FUN_00e21390();
    if (local_40 == 0) {
LAB_00e20f97:
      bVar4 = false;
      lVar9 = 0;
    }
    else {
      bVar4 = true;
      lVar9 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    break;
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    FUN_00e22c90();
    if (local_40 == 0) goto LAB_00e20f97;
    bVar4 = true;
    lVar9 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    break;
  case 0x5b:
    FUN_00e225e0();
    if (local_40 == 0) goto LAB_00e20f97;
    bVar4 = true;
    lVar9 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    break;
  case 0x66:
    if (iVar1 + 4 <= *(int *)(unaff_RSI + 0x34)) {
      if (((*(short *)(lVar2 + 2 + lVar8 * 2) == 0x61) &&
          (*(short *)(lVar2 + 4 + lVar8 * 2) == 0x6c)) &&
         ((*(short *)(lVar2 + 6 + lVar8 * 2) == 0x73 && (*(short *)(lVar2 + 8 + lVar8 * 2) == 0x65))
         )) {
        *(int *)(unaff_RSI + 0x30) = iVar1 + 5;
        FUN_00d46300();
        if (local_40 == 0) goto LAB_00e20f97;
        bVar4 = true;
        lVar9 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        break;
      }
      if (DAT_027859d8 != 0) {
        FUN_00d50b00();
      }
      FUN_00e20940();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    goto LAB_00e21076;
  case 0x6e:
    if (iVar1 + 3 <= *(int *)(unaff_RSI + 0x34)) {
      if (((*(short *)(lVar2 + 2 + lVar8 * 2) == 0x75) &&
          (*(short *)(lVar2 + 4 + lVar8 * 2) == 0x6c)) &&
         (*(short *)(lVar2 + (longlong)(iVar1 + 3) * 2) == 0x6c)) {
        *(int *)(unaff_RSI + 0x30) = iVar1 + 4;
        goto LAB_00e20df4;
      }
      if (DAT_027859e0 != 0) {
        FUN_00d50b00();
      }
      FUN_00e20940();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    goto LAB_00e21076;
  case 0x74:
    if (iVar1 + 3 <= *(int *)(unaff_RSI + 0x34)) {
      if (((*(short *)(lVar2 + 2 + lVar8 * 2) == 0x72) &&
          (*(short *)(lVar2 + 4 + lVar8 * 2) == 0x75)) &&
         (*(short *)(lVar2 + 6 + lVar8 * 2) == 0x65)) {
        *(int *)(unaff_RSI + 0x30) = iVar1 + 4;
        FUN_00d46300();
        if (local_40 == 0) goto LAB_00e20f97;
        bVar4 = true;
        lVar9 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        break;
      }
      if (DAT_027859d0 != 0) {
        FUN_00d50b00();
      }
      FUN_00e20940();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
LAB_00e21076:
    bVar4 = false;
    lVar9 = 0;
    lVar3 = *(longlong *)(unaff_RSI + 0x10);
    lVar5 = DAT_027859e8;
    goto joined_r0x00e21081;
  case 0x7b:
    FUN_00e21c70();
    if (local_40 == 0) goto LAB_00e20f97;
    bVar4 = true;
    lVar9 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
  }
  lVar3 = *(longlong *)(unaff_RSI + 0x10);
  lVar5 = DAT_027859e8;
joined_r0x00e21081:
  DAT_027859e8 = lVar5;
  if (lVar3 == 0) {
    if (lVar9 == 0) {
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      FUN_00e20940();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar4) {
        FUN_00d50b00();
      }
    }
    *unaff_RDI = lVar9;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    if ((bVar4) && (lVar9 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


