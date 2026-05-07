// Function: FUN_00e22c90
// Address: 00e22c90
// Size: 1060 bytes
// Class: GNFileType


/* WARNING: Removing unreachable block (ram,0x00e22f14) */
/* WARNING: Removing unreachable block (ram,0x00e22f21) */
/* WARNING: Removing unreachable block (ram,0x00e22f7f) */
/* WARNING: Removing unreachable block (ram,0x00e22f8c) */

void FUN_00e22c90(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar14;
  bool bVar15;
  undefined8 local_48;
  longlong local_40;
  char local_38;
  
  cVar12 = FUN_00e20b20();
  lVar10 = DAT_02785a18;
  lVar9 = DAT_02785a10;
  lVar8 = DAT_02785a08;
  lVar7 = DAT_02785a00;
  if (cVar12 == '\0') {
    if (DAT_02785a00 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
LAB_00e22d58:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  iVar2 = *(int *)(unaff_RSI + 0x30);
  iVar13 = (uint)(*(short *)(*(longlong *)(unaff_RSI + 0x20) + (longlong)iVar2 * 2) == 0x2d) + iVar2
  ;
  iVar3 = *(int *)(unaff_RSI + 0x34);
  if (iVar13 == iVar3) {
    if (DAT_02785a00 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00e22d58;
  }
  if (iVar13 < iVar3) {
    lVar14 = (longlong)iVar13;
    bVar15 = false;
    bVar5 = false;
    do {
      uVar1 = *(ushort *)(*(longlong *)(unaff_RSI + 0x20) + lVar14 * 2);
      bVar4 = bVar5;
      bVar11 = bVar15;
      switch(uVar1) {
      case 0x2b:
      case 0x2d:
        if (!bVar15) {
          if (DAT_02785a18 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00e22d58;
        }
        break;
      case 0x2c:
      case 0x2f:
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
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
        goto switchD_00e22dd6_caseD_2c;
      case 0x2e:
        bVar4 = true;
        if (bVar5) {
          if (DAT_02785a08 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00e22d58;
        }
        break;
      case 0x45:
switchD_00e22dd6_caseD_45:
        bVar11 = true;
        if (bVar15) {
          if (DAT_02785a10 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00e22d58;
        }
        break;
      default:
        if (uVar1 == 0x65) goto switchD_00e22dd6_caseD_45;
switchD_00e22dd6_caseD_2c:
        iVar6 = iVar13;
        if ((0xff < uVar1) ||
           ((PTR___DefaultRuneLocale_0249c238[(ulonglong)uVar1 * 4 + 0x3d] & 4) == 0))
        goto joined_r0x00e22e63;
      }
      bVar15 = bVar11;
      lVar14 = lVar14 + 1;
      iVar13 = iVar13 + 1;
      bVar5 = bVar4;
      iVar6 = iVar3;
    } while (lVar14 < iVar3);
  }
  else {
    bVar15 = false;
    iVar6 = iVar13;
    bVar4 = false;
  }
joined_r0x00e22e63:
  if (iVar6 == iVar2) {
    if (DAT_02785a00 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00e22d58;
  }
  (**(code **)(**(longlong **)(unaff_RSI + 0x28) + 0x378))();
  if (bVar4 || bVar15) {
    cVar12 = (**(code **)(**(longlong **)(unaff_RSI + 0x28) + 0x468))();
    lVar7 = DAT_02785a20;
    if (cVar12 == '\0') {
      if (DAT_02785a20 != 0) {
        FUN_00d50b00();
      }
      FUN_00e20940();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00e22d58;
    }
    FUN_00d470c0(local_48);
    if (local_40 != 0) {
      bVar4 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00e23053;
    }
  }
  else {
    cVar12 = (**(code **)(**(longlong **)(unaff_RSI + 0x28) + 0x3f8))();
    lVar7 = DAT_02785a28;
    if (cVar12 == '\0') {
      if (DAT_02785a28 != 0) {
        FUN_00d50b00();
      }
      FUN_00e20940();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00e22d58;
    }
    FUN_00d468f0();
    if (local_40 != 0) {
      bVar4 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00e23053;
    }
  }
  bVar4 = false;
LAB_00e23053:
  *(int *)(unaff_RSI + 0x30) = iVar6;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar4) && (local_40 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


