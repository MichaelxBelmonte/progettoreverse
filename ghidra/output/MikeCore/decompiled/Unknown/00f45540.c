// Function: FUN_00f45540
// Address: 00f45540
// Size: 1634 bytes
// Class: Unknown


int FUN_00f45540(void)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  void *pvVar9;
  uint uVar10;
  ulonglong uVar11;
  void *pvVar12;
  size_t unaff_ESI;
  uint uVar13;
  longlong *unaff_RDI;
  size_t sVar14;
  longlong *plVar15;
  uint uVar16;
  
  lVar5 = *unaff_RDI;
  uVar7 = (uint)(unaff_RDI[3] - 5U);
  if ((ulonglong)*(uint *)(unaff_RDI + 10) < unaff_RDI[3] - 5U) {
    uVar7 = *(uint *)(unaff_RDI + 10);
  }
  iVar1 = *(int *)(lVar5 + 8);
  do {
    uVar6 = *(int *)((longlong)unaff_RDI + 0x1734) + 0x2a >> 3;
    bVar3 = true;
    bVar4 = true;
    uVar10 = *(uint *)(lVar5 + 0x20) - uVar6;
    if (*(uint *)(lVar5 + 0x20) < uVar6) goto LAB_00f457ca;
    uVar16 = *(int *)((longlong)unaff_RDI + 0xac) - (int)unaff_RDI[0x13];
    pvVar9 = (void *)(ulonglong)uVar16;
    uVar13 = *(uint *)(lVar5 + 8) + uVar16;
    uVar6 = 0xffff;
    if ((ulonglong)*(uint *)(lVar5 + 8) + (longlong)pvVar9 < 0xffff) {
      uVar6 = uVar13;
    }
    if (uVar10 < uVar6) {
      uVar6 = uVar10;
    }
    if ((uVar6 < uVar7) &&
       (((bVar3 = bVar4, uVar6 == 0 && unaff_ESI != 4 || (unaff_ESI == 0)) || (uVar6 != uVar13))))
    goto LAB_00f457ca;
    bVar3 = uVar13 == uVar6;
    sVar14 = unaff_ESI;
    FUN_00f4b3c0(bVar3 && unaff_ESI == 4,0);
    *(char *)(unaff_RDI[5] + -4 + unaff_RDI[2]) = (char)uVar6;
    *(char *)(unaff_RDI[5] + -3 + unaff_RDI[2]) = (char)(uVar6 >> 8);
    *(char *)(unaff_RDI[5] + -2 + unaff_RDI[2]) = (char)~uVar6;
    pvVar8 = (void *)unaff_RDI[2];
    *(char *)(unaff_RDI[5] + -1 + (longlong)pvVar8) = (char)(~uVar6 >> 8);
    lVar5 = *unaff_RDI;
    lVar2 = *(longlong *)(lVar5 + 0x38);
    FUN_00f4b540();
    uVar10 = *(uint *)(lVar2 + 0x28);
    if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar2 + 0x28)) {
      uVar10 = *(uint *)(lVar5 + 0x20);
    }
    if (uVar10 != 0) {
      pvVar12 = (void *)(ulonglong)uVar10;
      _memcpy(pvVar8,pvVar12,sVar14);
      *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + (longlong)pvVar12;
      *(longlong *)(lVar2 + 0x20) = *(longlong *)(lVar2 + 0x20) + (longlong)pvVar12;
      *(longlong *)(lVar5 + 0x28) = *(longlong *)(lVar5 + 0x28) + (longlong)pvVar12;
      *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) - uVar10;
      plVar15 = (longlong *)(lVar2 + 0x28);
      *plVar15 = *plVar15 - (longlong)pvVar12;
      if (*plVar15 == 0) {
        *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar2 + 0x10);
      }
    }
    if (uVar16 != 0) {
      if (uVar6 < uVar16) {
        pvVar9 = (void *)(ulonglong)uVar6;
      }
      _memcpy(pvVar8,pvVar9,sVar14);
      lVar5 = *unaff_RDI;
      *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + (longlong)pvVar9;
      *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) - (int)pvVar9;
      *(longlong *)(lVar5 + 0x28) = *(longlong *)(lVar5 + 0x28) + (longlong)pvVar9;
      unaff_RDI[0x13] = unaff_RDI[0x13] + (longlong)pvVar9;
      uVar6 = uVar6 - (int)pvVar9;
    }
    if (uVar6 != 0) {
      pvVar8 = (void *)(ulonglong)uVar6;
      plVar15 = (longlong *)*unaff_RDI;
      lVar5 = plVar15[3];
      uVar10 = *(uint *)(plVar15 + 1);
      pvVar9 = (void *)(ulonglong)uVar10;
      if (uVar6 < uVar10) {
        pvVar9 = pvVar8;
      }
      if ((int)pvVar9 != 0) {
        *(uint *)(plVar15 + 1) = uVar10 - (int)pvVar9;
        _memcpy(pvVar8,pvVar9,sVar14);
        if (*(int *)(plVar15[7] + 0x30) == 2) {
          lVar5 = FUN_00f43510();
LAB_00f4558a:
          plVar15[0xc] = lVar5;
        }
        else if (*(int *)(plVar15[7] + 0x30) == 1) {
          lVar5 = FUN_00f42bd0();
          goto LAB_00f4558a;
        }
        *plVar15 = *plVar15 + (longlong)pvVar9;
        plVar15[2] = plVar15[2] + (longlong)pvVar9;
        plVar15 = (longlong *)*unaff_RDI;
        lVar5 = plVar15[3];
      }
      plVar15[3] = lVar5 + (longlong)pvVar8;
      *(uint *)(plVar15 + 4) = (int)plVar15[4] - uVar6;
      plVar15[5] = plVar15[5] + (longlong)pvVar8;
    }
    lVar5 = *unaff_RDI;
  } while (!bVar3 || unaff_ESI != 4);
  bVar3 = false;
LAB_00f457ca:
  uVar7 = iVar1 - *(int *)(lVar5 + 8);
  if (uVar7 == 0) {
    uVar6 = *(uint *)((longlong)unaff_RDI + 0xac);
    uVar11 = (ulonglong)uVar6;
    if ((ulonglong)unaff_RDI[0x2e7] < uVar11) goto LAB_00f458fc;
  }
  else {
    uVar6 = *(uint *)(unaff_RDI + 10);
    if (uVar7 < uVar6) {
      pvVar9 = (void *)(unaff_RDI[0xd] - (ulonglong)*(uint *)((longlong)unaff_RDI + 0xac));
      sVar14 = unaff_ESI;
      if (pvVar9 <= (void *)(ulonglong)uVar7) {
        uVar6 = *(uint *)((longlong)unaff_RDI + 0xac) - uVar6;
        *(uint *)((longlong)unaff_RDI + 0xac) = uVar6;
        _memcpy(pvVar9,(void *)(ulonglong)uVar6,unaff_ESI);
        if (*(uint *)(unaff_RDI + 0x2e5) < 2) {
          *(uint *)(unaff_RDI + 0x2e5) = *(uint *)(unaff_RDI + 0x2e5) + 1;
        }
        if (*(uint *)((longlong)unaff_RDI + 0xac) < *(uint *)((longlong)unaff_RDI + 0x172c)) {
          *(uint *)((longlong)unaff_RDI + 0x172c) = *(uint *)((longlong)unaff_RDI + 0xac);
        }
      }
      _memcpy(pvVar9,(void *)(ulonglong)uVar7,sVar14);
      uVar6 = *(int *)((longlong)unaff_RDI + 0xac) + uVar7;
      *(uint *)((longlong)unaff_RDI + 0xac) = uVar6;
      uVar10 = (int)unaff_RDI[10] - *(int *)((longlong)unaff_RDI + 0x172c);
      if (uVar7 <= uVar10) {
        uVar10 = uVar7;
      }
      *(uint *)((longlong)unaff_RDI + 0x172c) = uVar10 + *(int *)((longlong)unaff_RDI + 0x172c);
    }
    else {
      *(undefined4 *)(unaff_RDI + 0x2e5) = 2;
      _memcpy((void *)(ulonglong)uVar7,(void *)(ulonglong)uVar6,unaff_ESI);
      uVar6 = *(uint *)(unaff_RDI + 10);
      *(uint *)((longlong)unaff_RDI + 0xac) = uVar6;
      *(uint *)((longlong)unaff_RDI + 0x172c) = uVar6;
    }
    uVar11 = (ulonglong)uVar6;
    unaff_RDI[0x13] = uVar11;
    if ((ulonglong)unaff_RDI[0x2e7] < uVar11) {
LAB_00f458fc:
      unaff_RDI[0x2e7] = uVar11;
    }
  }
  if (!bVar3) {
    return 3;
  }
  uVar7 = *(uint *)(*unaff_RDI + 8);
  pvVar9 = (void *)(ulonglong)uVar7;
  if (((unaff_ESI & 0xfffffffb) == 0) || (uVar7 != 0)) {
    uVar10 = (int)unaff_RDI[0xd] - uVar6;
    if (uVar10 < uVar7) {
      uVar7 = *(uint *)(unaff_RDI + 10);
      if ((longlong)(ulonglong)uVar7 <= unaff_RDI[0x13]) {
        unaff_RDI[0x13] = unaff_RDI[0x13] - (ulonglong)uVar7;
        *(uint *)((longlong)unaff_RDI + 0xac) = uVar6 - uVar7;
        _memcpy(pvVar9,(void *)(ulonglong)(uVar6 - uVar7),unaff_ESI);
        if (*(uint *)(unaff_RDI + 0x2e5) < 2) {
          *(uint *)(unaff_RDI + 0x2e5) = *(uint *)(unaff_RDI + 0x2e5) + 1;
        }
        uVar10 = uVar10 + (int)unaff_RDI[10];
        uVar6 = *(uint *)((longlong)unaff_RDI + 0xac);
        if (uVar6 < *(uint *)((longlong)unaff_RDI + 0x172c)) {
          *(uint *)((longlong)unaff_RDI + 0x172c) = uVar6;
        }
      }
    }
  }
  else {
    if (unaff_RDI[0x13] == uVar11) {
      return 1;
    }
    uVar10 = (int)unaff_RDI[0xd] - uVar6;
  }
  plVar15 = (longlong *)*unaff_RDI;
  uVar7 = *(uint *)(plVar15 + 1);
  if (uVar7 < uVar10) {
    uVar10 = uVar7;
  }
  if (uVar10 == 0) goto LAB_00f45a67;
  *(uint *)(plVar15 + 1) = uVar7 - uVar10;
  pvVar8 = (void *)(ulonglong)uVar10;
  _memcpy(pvVar9,pvVar8,unaff_ESI);
  if (*(int *)(plVar15[7] + 0x30) == 2) {
    lVar5 = FUN_00f43510();
LAB_00f45a25:
    plVar15[0xc] = lVar5;
  }
  else if (*(int *)(plVar15[7] + 0x30) == 1) {
    lVar5 = FUN_00f42bd0();
    goto LAB_00f45a25;
  }
  *plVar15 = *plVar15 + (longlong)pvVar8;
  plVar15[2] = plVar15[2] + (longlong)pvVar8;
  uVar6 = *(int *)((longlong)unaff_RDI + 0xac) + uVar10;
  *(uint *)((longlong)unaff_RDI + 0xac) = uVar6;
  uVar7 = (int)unaff_RDI[10] - *(int *)((longlong)unaff_RDI + 0x172c);
  if (uVar10 <= uVar7) {
    uVar7 = uVar10;
  }
  *(uint *)((longlong)unaff_RDI + 0x172c) = uVar7 + *(int *)((longlong)unaff_RDI + 0x172c);
LAB_00f45a67:
  if ((ulonglong)unaff_RDI[0x2e7] < (ulonglong)uVar6) {
    unaff_RDI[0x2e7] = (ulonglong)uVar6;
  }
  uVar11 = unaff_RDI[3] - (ulonglong)(uint)(*(int *)((longlong)unaff_RDI + 0x1734) + 0x2a >> 3);
  uVar7 = 0xffff;
  if (uVar11 < 0xffff) {
    uVar7 = (uint)uVar11;
  }
  uVar10 = *(uint *)(unaff_RDI + 10);
  if (uVar7 <= *(uint *)(unaff_RDI + 10)) {
    uVar10 = uVar7;
  }
  uVar6 = uVar6 - (int)unaff_RDI[0x13];
  if (uVar6 < uVar10) {
    if (uVar6 == 0 && unaff_ESI != 4) {
      return 0;
    }
    if (unaff_ESI == 0) {
      return 0;
    }
    if (*(int *)(*unaff_RDI + 8) != 0) {
      return 0;
    }
    if (uVar7 < uVar6) {
      return 0;
    }
  }
  uVar10 = uVar6;
  if (uVar7 < uVar6) {
    uVar10 = uVar7;
  }
  if (unaff_ESI == 4) {
    uVar7 = (uint)(uVar6 <= uVar7 && *(int *)(*unaff_RDI + 8) == 0);
  }
  else {
    uVar7 = 0;
  }
  pvVar9 = (void *)(ulonglong)uVar7;
  FUN_00f4b3c0(pvVar9,(ulonglong)uVar10);
  unaff_RDI[0x13] = unaff_RDI[0x13] + (ulonglong)uVar10;
  lVar5 = *unaff_RDI;
  lVar2 = *(longlong *)(lVar5 + 0x38);
  FUN_00f4b540();
  uVar6 = *(uint *)(lVar2 + 0x28);
  if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar2 + 0x28)) {
    uVar6 = *(uint *)(lVar5 + 0x20);
  }
  if (uVar6 != 0) {
    pvVar8 = (void *)(ulonglong)uVar6;
    _memcpy(pvVar9,pvVar8,unaff_ESI);
    *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + (longlong)pvVar8;
    *(longlong *)(lVar2 + 0x20) = *(longlong *)(lVar2 + 0x20) + (longlong)pvVar8;
    *(longlong *)(lVar5 + 0x28) = *(longlong *)(lVar5 + 0x28) + (longlong)pvVar8;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) - uVar6;
    plVar15 = (longlong *)(lVar2 + 0x28);
    *plVar15 = *plVar15 - (longlong)pvVar8;
    if (*plVar15 == 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar2 + 0x10);
    }
  }
  return uVar7 * 2;
}


