// Function: FUN_00e7d230
// Address: 00e7d230
// Size: 1188 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00e7d6b0) */
/* WARNING: Removing unreachable block (ram,0x00e7d6c1) */
/* WARNING: Removing unreachable block (ram,0x00e7d6a0) */
/* WARNING: Removing unreachable block (ram,0x00e7d6d2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e7d230(undefined8 param_1,undefined4 param_2)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int unaff_ESI;
  longlong lVar6;
  longlong unaff_RDI;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar10 = _DAT_023e1680;
  auVar11 = _DAT_023e0070;
  auVar9 = _DAT_023de250;
  switch(param_2) {
  case 1:
    break;
  case 2:
    iVar3 = unaff_ESI + 3;
    if (-1 < unaff_ESI) {
      iVar3 = unaff_ESI;
    }
    if (unaff_ESI < 4) {
      return;
    }
    uVar2 = (iVar3 >> 2) - 1;
    if (uVar2 < 7) {
      uVar7 = 0;
      goto LAB_00e7d496;
    }
    uVar8 = (ulonglong)uVar2 + 1;
    uVar7 = uVar8 & 0xfffffffffffffff8;
    uVar4 = (uVar7 - 8 >> 3) + 1;
    if (uVar7 - 8 == 0) {
      lVar5 = 0;
LAB_00e7d461:
      auVar9 = pshufb(*(undefined1 (*) [16])(unaff_RDI + lVar5 * 4),_DAT_023e0070);
      auVar11 = pshufb(*(undefined1 (*) [16])(unaff_RDI + 0x10 + lVar5 * 4),_DAT_023e0070);
      *(undefined1 (*) [16])(unaff_RDI + lVar5 * 4) = auVar9;
      *(undefined1 (*) [16])(unaff_RDI + 0x10 + lVar5 * 4) = auVar11;
    }
    else {
      lVar6 = -(uVar4 & 0xfffffffffffffffe);
      lVar5 = 0;
      do {
        auVar9 = pshufb(*(undefined1 (*) [16])(unaff_RDI + lVar5 * 4),auVar11);
        auVar10 = pshufb(*(undefined1 (*) [16])(unaff_RDI + 0x10 + lVar5 * 4),auVar11);
        *(undefined1 (*) [16])(unaff_RDI + lVar5 * 4) = auVar9;
        *(undefined1 (*) [16])(unaff_RDI + 0x10 + lVar5 * 4) = auVar10;
        auVar9 = pshufb(*(undefined1 (*) [16])(unaff_RDI + 0x20 + lVar5 * 4),auVar11);
        auVar10 = pshufb(*(undefined1 (*) [16])(unaff_RDI + 0x30 + lVar5 * 4),auVar11);
        *(undefined1 (*) [16])(unaff_RDI + 0x20 + lVar5 * 4) = auVar9;
        *(undefined1 (*) [16])(unaff_RDI + 0x30 + lVar5 * 4) = auVar10;
        lVar5 = lVar5 + 0x10;
        lVar6 = lVar6 + 2;
      } while (lVar6 != 0);
      if ((uVar4 & 1) != 0) goto LAB_00e7d461;
    }
    if (uVar8 == uVar7) {
      return;
    }
    unaff_RDI = unaff_RDI + uVar7 * 4;
LAB_00e7d496:
    lVar5 = 0;
    do {
      uVar2 = *(uint *)(unaff_RDI + lVar5 * 4);
      *(uint *)(unaff_RDI + lVar5 * 4) =
           uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      lVar5 = lVar5 + 1;
    } while ((iVar3 >> 2) - (int)uVar7 != (int)lVar5);
    return;
  case 3:
    if (unaff_ESI < 2) {
      return;
    }
    uVar2 = unaff_ESI / 2 - 1;
    if (uVar2 < 0xf) {
      uVar4 = 0;
      goto LAB_00e7d587;
    }
    uVar7 = (ulonglong)uVar2 + 1;
    uVar4 = uVar7 & 0x1fffffff0;
    uVar8 = (uVar4 - 0x10 >> 4) + 1;
    if (uVar4 - 0x10 == 0) {
      lVar5 = 0;
LAB_00e7d552:
      auVar9 = pshufb(*(undefined1 (*) [16])(unaff_RDI + lVar5 * 2),_DAT_023de250);
      auVar11 = pshufb(*(undefined1 (*) [16])(unaff_RDI + 0x10 + lVar5 * 2),_DAT_023de250);
      *(undefined1 (*) [16])(unaff_RDI + lVar5 * 2) = auVar9;
      *(undefined1 (*) [16])(unaff_RDI + 0x10 + lVar5 * 2) = auVar11;
    }
    else {
      lVar6 = -(uVar8 & 0xfffffffffffffffe);
      lVar5 = 0;
      do {
        auVar11 = pshufb(*(undefined1 (*) [16])(unaff_RDI + lVar5 * 2),auVar9);
        auVar10 = pshufb(*(undefined1 (*) [16])(unaff_RDI + 0x10 + lVar5 * 2),auVar9);
        *(undefined1 (*) [16])(unaff_RDI + lVar5 * 2) = auVar11;
        *(undefined1 (*) [16])(unaff_RDI + 0x10 + lVar5 * 2) = auVar10;
        auVar11 = pshufb(*(undefined1 (*) [16])(unaff_RDI + 0x20 + lVar5 * 2),auVar9);
        auVar10 = pshufb(*(undefined1 (*) [16])(unaff_RDI + 0x30 + lVar5 * 2),auVar9);
        *(undefined1 (*) [16])(unaff_RDI + 0x20 + lVar5 * 2) = auVar11;
        *(undefined1 (*) [16])(unaff_RDI + 0x30 + lVar5 * 2) = auVar10;
        lVar5 = lVar5 + 0x20;
        lVar6 = lVar6 + 2;
      } while (lVar6 != 0);
      if ((uVar8 & 1) != 0) goto LAB_00e7d552;
    }
    if (uVar7 == uVar4) {
      return;
    }
    unaff_RDI = unaff_RDI + uVar4 * 2;
LAB_00e7d587:
    lVar5 = 0;
    do {
      puVar1 = (ushort *)(unaff_RDI + lVar5 * 2);
      *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
      lVar5 = lVar5 + 1;
    } while (unaff_ESI / 2 - (int)uVar4 != (int)lVar5);
    return;
  case 4:
    iVar3 = unaff_ESI + 7;
    if (-1 < unaff_ESI) {
      iVar3 = unaff_ESI;
    }
    if (unaff_ESI < 8) {
      return;
    }
    uVar2 = (iVar3 >> 3) - 1;
    if (uVar2 < 3) {
      uVar4 = 0;
    }
    else {
      uVar7 = (ulonglong)uVar2 + 1;
      uVar4 = uVar7 & 0x1fffffffc;
      uVar8 = (uVar4 - 4 >> 2) + 1;
      if (uVar4 - 4 == 0) {
        lVar5 = 0;
LAB_00e7d642:
        auVar9 = pshufb(*(undefined1 (*) [16])(unaff_RDI + lVar5 * 8),_DAT_023e1680);
        auVar11 = pshufb(*(undefined1 (*) [16])(unaff_RDI + 0x10 + lVar5 * 8),_DAT_023e1680);
        *(undefined1 (*) [16])(unaff_RDI + lVar5 * 8) = auVar9;
        *(undefined1 (*) [16])(unaff_RDI + 0x10 + lVar5 * 8) = auVar11;
      }
      else {
        lVar6 = -(uVar8 & 0xfffffffffffffffe);
        lVar5 = 0;
        do {
          auVar9 = pshufb(*(undefined1 (*) [16])(unaff_RDI + lVar5 * 8),auVar10);
          auVar11 = pshufb(*(undefined1 (*) [16])(unaff_RDI + 0x10 + lVar5 * 8),auVar10);
          *(undefined1 (*) [16])(unaff_RDI + lVar5 * 8) = auVar9;
          *(undefined1 (*) [16])(unaff_RDI + 0x10 + lVar5 * 8) = auVar11;
          auVar9 = pshufb(*(undefined1 (*) [16])(unaff_RDI + 0x20 + lVar5 * 8),auVar10);
          auVar11 = pshufb(*(undefined1 (*) [16])(unaff_RDI + 0x30 + lVar5 * 8),auVar10);
          *(undefined1 (*) [16])(unaff_RDI + 0x20 + lVar5 * 8) = auVar9;
          *(undefined1 (*) [16])(unaff_RDI + 0x30 + lVar5 * 8) = auVar11;
          lVar5 = lVar5 + 8;
          lVar6 = lVar6 + 2;
        } while (lVar6 != 0);
        if ((uVar8 & 1) != 0) goto LAB_00e7d642;
      }
      if (uVar7 == uVar4) {
        return;
      }
      unaff_RDI = unaff_RDI + uVar4 * 8;
    }
    lVar5 = 0;
    do {
      uVar7 = *(ulonglong *)(unaff_RDI + lVar5 * 8);
      *(ulonglong *)(unaff_RDI + lVar5 * 8) =
           uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
           (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
           (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
      lVar5 = lVar5 + 1;
    } while ((iVar3 >> 3) - (int)uVar4 != (int)lVar5);
  default:
    goto switchD_00e7d24e_default;
  }
  iVar3 = unaff_ESI + 3;
  if (-1 < unaff_ESI) {
    iVar3 = unaff_ESI;
  }
  if (unaff_ESI < 4) {
    return;
  }
  uVar2 = (iVar3 >> 2) - 1;
  if (uVar2 < 7) {
    uVar7 = 0;
  }
  else {
    uVar8 = (ulonglong)uVar2 + 1;
    uVar7 = uVar8 & 0xfffffffffffffff8;
    uVar4 = (uVar7 - 8 >> 3) + 1;
    if (uVar7 - 8 == 0) {
      lVar5 = 0;
LAB_00e7d381:
      auVar9 = pshufb(*(undefined1 (*) [16])(unaff_RDI + lVar5 * 4),_DAT_023e0070);
      auVar11 = pshufb(*(undefined1 (*) [16])(unaff_RDI + 0x10 + lVar5 * 4),_DAT_023e0070);
      *(undefined1 (*) [16])(unaff_RDI + lVar5 * 4) = auVar9;
      *(undefined1 (*) [16])(unaff_RDI + 0x10 + lVar5 * 4) = auVar11;
    }
    else {
      lVar6 = -(uVar4 & 0xfffffffffffffffe);
      lVar5 = 0;
      do {
        auVar9 = pshufb(*(undefined1 (*) [16])(unaff_RDI + lVar5 * 4),auVar11);
        auVar10 = pshufb(*(undefined1 (*) [16])(unaff_RDI + 0x10 + lVar5 * 4),auVar11);
        *(undefined1 (*) [16])(unaff_RDI + lVar5 * 4) = auVar9;
        *(undefined1 (*) [16])(unaff_RDI + 0x10 + lVar5 * 4) = auVar10;
        auVar9 = pshufb(*(undefined1 (*) [16])(unaff_RDI + 0x20 + lVar5 * 4),auVar11);
        auVar10 = pshufb(*(undefined1 (*) [16])(unaff_RDI + 0x30 + lVar5 * 4),auVar11);
        *(undefined1 (*) [16])(unaff_RDI + 0x20 + lVar5 * 4) = auVar9;
        *(undefined1 (*) [16])(unaff_RDI + 0x30 + lVar5 * 4) = auVar10;
        lVar5 = lVar5 + 0x10;
        lVar6 = lVar6 + 2;
      } while (lVar6 != 0);
      if ((uVar4 & 1) != 0) goto LAB_00e7d381;
    }
    if (uVar8 == uVar7) {
      return;
    }
    unaff_RDI = unaff_RDI + uVar7 * 4;
  }
  lVar5 = 0;
  do {
    uVar2 = *(uint *)(unaff_RDI + lVar5 * 4);
    *(uint *)(unaff_RDI + lVar5 * 4) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    lVar5 = lVar5 + 1;
  } while ((iVar3 >> 2) - (int)uVar7 != (int)lVar5);
switchD_00e7d24e_default:
  return;
}


