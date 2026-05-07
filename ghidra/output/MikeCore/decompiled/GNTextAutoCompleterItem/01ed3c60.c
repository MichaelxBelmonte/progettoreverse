// Function: FUN_01ed3c60
// Address: 01ed3c60
// Size: 1541 bytes
// Class: GNTextAutoCompleterItem


/* WARNING: Removing unreachable block (ram,0x01ed3e5f) */
/* WARNING: Removing unreachable block (ram,0x01ed3e68) */
/* WARNING: Removing unreachable block (ram,0x01ed3c9f) */
/* WARNING: Removing unreachable block (ram,0x01ed3ca8) */
/* WARNING: Removing unreachable block (ram,0x01ed3e40) */
/* WARNING: Removing unreachable block (ram,0x01ed3e6d) */

void FUN_01ed3c60(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  longlong *unaff_RSI;
  ulonglong uVar13;
  int iVar14;
  longlong *unaff_RDI;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  bool bVar18;
  undefined8 uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  longlong local_e8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  int local_90;
  uint local_8c;
  
  lVar16 = *unaff_RSI;
  iVar7 = FUN_00d23d20();
  lVar2 = *(longlong *)(unaff_RDI[0x58] + 0x10);
  if (*(char *)(lVar2 + 5 + (longlong)iVar7 * 8) != '\0') {
    uVar17 = *(uint *)(unaff_RDI[0x58] + 0x18);
    uVar20 = 0;
    if (7 < (int)uVar17) {
      uVar4 = uVar17 >> 3;
      if (uVar17 < 0x48) {
        uVar10 = 0;
        uVar20 = 0;
      }
      else {
        uVar10 = 8;
        if ((ulonglong)(uVar4 & 7) != 0) {
          uVar10 = (ulonglong)(uVar4 & 7);
        }
        uVar10 = uVar4 - uVar10;
        uVar17 = 0;
        uVar20 = 0;
        uVar21 = 0;
        uVar22 = 0;
        uVar13 = 0;
        uVar23 = 0;
        uVar24 = 0;
        uVar25 = 0;
        uVar26 = 0;
        do {
          piVar1 = (int *)(lVar2 + uVar13 * 8);
          iVar15 = *piVar1;
          iVar8 = piVar1[2];
          piVar1 = (int *)(lVar2 + 0x10 + uVar13 * 8);
          iVar14 = *piVar1;
          iVar5 = piVar1[2];
          uVar17 = (uint)((int)uVar17 < iVar15) * iVar15 | ((int)uVar17 >= iVar15) * uVar17;
          uVar20 = (uint)((int)uVar20 < iVar8) * iVar8 | ((int)uVar20 >= iVar8) * uVar20;
          uVar21 = (uint)((int)uVar21 < iVar14) * iVar14 | ((int)uVar21 >= iVar14) * uVar21;
          uVar22 = (uint)((int)uVar22 < iVar5) * iVar5 | ((int)uVar22 >= iVar5) * uVar22;
          piVar1 = (int *)(lVar2 + 0x20 + uVar13 * 8);
          iVar15 = *piVar1;
          iVar8 = piVar1[2];
          piVar1 = (int *)(lVar2 + 0x30 + uVar13 * 8);
          iVar14 = *piVar1;
          iVar5 = piVar1[2];
          uVar23 = (uint)((int)uVar23 < iVar15) * iVar15 | ((int)uVar23 >= iVar15) * uVar23;
          uVar24 = (uint)((int)uVar24 < iVar8) * iVar8 | ((int)uVar24 >= iVar8) * uVar24;
          uVar25 = (uint)((int)uVar25 < iVar14) * iVar14 | ((int)uVar25 >= iVar14) * uVar25;
          uVar26 = (uint)((int)uVar26 < iVar5) * iVar5 | ((int)uVar26 >= iVar5) * uVar26;
          uVar13 = uVar13 + 8;
        } while (uVar10 != uVar13);
        uVar17 = ((int)uVar17 < (int)uVar23) * uVar23 | ((int)uVar17 >= (int)uVar23) * uVar17;
        uVar20 = ((int)uVar20 < (int)uVar24) * uVar24 | ((int)uVar20 >= (int)uVar24) * uVar20;
        uVar21 = ((int)uVar21 < (int)uVar25) * uVar25 | ((int)uVar21 >= (int)uVar25) * uVar21;
        uVar22 = ((int)uVar22 < (int)uVar26) * uVar26 | ((int)uVar22 >= (int)uVar26) * uVar22;
        uVar17 = ((int)uVar21 < (int)uVar17) * uVar17 | ((int)uVar21 >= (int)uVar17) * uVar21;
        uVar20 = ((int)uVar22 < (int)uVar20) * uVar20 | ((int)uVar22 >= (int)uVar20) * uVar22;
        uVar20 = ((int)uVar20 < (int)uVar17) * uVar17 | ((int)uVar20 >= (int)uVar17) * uVar20;
      }
      do {
        uVar17 = *(uint *)(lVar2 + uVar10 * 8);
        if ((int)uVar20 < (int)uVar17) {
          uVar20 = uVar17;
        }
        uVar10 = uVar10 + 1;
      } while (uVar4 != uVar10);
    }
    plVar3 = (longlong *)unaff_RDI[0x55];
    if (plVar3 != (longlong *)0x0) {
      uVar19 = FUN_00d50b00();
      local_c0 = *unaff_RSI;
      local_b8 = '\0';
      (**(code **)(*plVar3 + 0x20))(uVar19,&local_c0);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    plVar3 = (longlong *)unaff_RDI[0x54];
    FUN_00d50b00();
    local_b0 = *unaff_RSI;
    local_a8 = '\0';
    (**(code **)(*plVar3 + 0x18))(&local_b0);
    bVar18 = lVar16 == 0;
    if (bVar18) {
      lVar16 = 0;
    }
    else {
      FUN_00d50b00();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    local_8c = uVar20;
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (0 < *(int *)(lVar16 + 0xc)) {
      uVar17 = iVar7 + 1;
      local_90 = iVar7 * 8 + 8;
      iVar15 = 0;
      do {
        if (*(char *)(*(longlong *)(unaff_RDI[0x58] + 0x10) + 5 + (longlong)(int)uVar17 * 8) != '\0'
           ) {
          if ((iVar7 < -1) || (*(int *)(unaff_RDI[0x57] + 0xc) <= (int)uVar17)) {
            local_e8 = 0;
          }
          else {
            local_e8 = *(longlong *)(*(longlong *)(unaff_RDI[0x57] + 0x10) + (ulonglong)uVar17 * 8);
            if (local_e8 != 0) {
              FUN_00d50b00();
            }
          }
          FUN_01ed3c60();
          if (local_e8 != 0) {
            FUN_00d50b20();
          }
        }
        cVar6 = FUN_01dd3250();
        if (cVar6 != '\0') {
          cVar6 = FUN_01dd3250();
          if (cVar6 == '\0') {
            FUN_01dd3d20();
          }
          FUN_01dd4720();
        }
        FUN_00d23620();
        FUN_00e7b4e0();
        FUN_00c921e0();
        lVar2 = unaff_RDI[0x34];
        if ((lVar2 != 0) && (iVar8 = *(int *)(lVar2 + 0x18), 3 < iVar8)) {
          pvVar9 = *(void **)(lVar2 + 0x10);
          lVar11 = 0;
          bVar12 = false;
          do {
            iVar14 = *(int *)((longlong)pvVar9 + lVar11 * 4);
            if ((int)uVar17 < iVar14) {
              *(int *)((longlong)pvVar9 + lVar11 * 4) = iVar14 + -1;
              iVar8 = *(int *)(lVar2 + 0x18);
              bVar12 = true;
            }
            lVar11 = lVar11 + 1;
            iVar14 = iVar8 + 3;
            if (-1 < iVar8) {
              iVar14 = iVar8;
            }
          } while (lVar11 < iVar14 >> 2);
          if (bVar12) {
            uVar19 = FUN_00d50b00();
            FUN_00c8e340(uVar19,0);
            _memcpy(pvVar9,(void *)(longlong)*(int *)(lVar2 + 0x18),param_3);
            FUN_00d50b20();
          }
        }
        iVar8 = (int)unaff_RDI[0x36];
        if ((iVar8 != -1) && ((int)uVar17 < iVar8)) {
          *(int *)(unaff_RDI + 0x36) = iVar8 + -1;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(lVar16 + 0xc));
    }
    lVar2 = unaff_RDI[0x58];
    *(undefined4 *)(unaff_RDI + 0x30) = *(undefined4 *)(unaff_RDI[0x57] + 0xc);
    lVar11 = *(longlong *)(lVar2 + 0x10);
    *(undefined1 *)(lVar11 + 5 + (longlong)iVar7 * 8) = 0;
    uVar17 = *(uint *)(lVar2 + 0x18);
    uVar20 = 0;
    if (7 < (int)uVar17) {
      uVar4 = uVar17 >> 3;
      if (uVar17 < 0x48) {
        uVar10 = 0;
        uVar20 = 0;
      }
      else {
        uVar10 = 8;
        if ((ulonglong)(uVar4 & 7) != 0) {
          uVar10 = (ulonglong)(uVar4 & 7);
        }
        uVar10 = uVar4 - uVar10;
        uVar17 = 0;
        uVar20 = 0;
        uVar21 = 0;
        uVar22 = 0;
        uVar13 = 0;
        uVar23 = 0;
        uVar24 = 0;
        uVar25 = 0;
        uVar26 = 0;
        do {
          piVar1 = (int *)(lVar11 + uVar13 * 8);
          iVar7 = *piVar1;
          iVar15 = piVar1[2];
          piVar1 = (int *)(lVar11 + 0x10 + uVar13 * 8);
          iVar8 = *piVar1;
          iVar14 = piVar1[2];
          uVar17 = (uint)((int)uVar17 < iVar7) * iVar7 | ((int)uVar17 >= iVar7) * uVar17;
          uVar20 = (uint)((int)uVar20 < iVar15) * iVar15 | ((int)uVar20 >= iVar15) * uVar20;
          uVar21 = (uint)((int)uVar21 < iVar8) * iVar8 | ((int)uVar21 >= iVar8) * uVar21;
          uVar22 = (uint)((int)uVar22 < iVar14) * iVar14 | ((int)uVar22 >= iVar14) * uVar22;
          piVar1 = (int *)(lVar11 + 0x20 + uVar13 * 8);
          iVar7 = *piVar1;
          iVar15 = piVar1[2];
          piVar1 = (int *)(lVar11 + 0x30 + uVar13 * 8);
          iVar8 = *piVar1;
          iVar14 = piVar1[2];
          uVar23 = (uint)((int)uVar23 < iVar7) * iVar7 | ((int)uVar23 >= iVar7) * uVar23;
          uVar24 = (uint)((int)uVar24 < iVar15) * iVar15 | ((int)uVar24 >= iVar15) * uVar24;
          uVar25 = (uint)((int)uVar25 < iVar8) * iVar8 | ((int)uVar25 >= iVar8) * uVar25;
          uVar26 = (uint)((int)uVar26 < iVar14) * iVar14 | ((int)uVar26 >= iVar14) * uVar26;
          uVar13 = uVar13 + 8;
        } while (uVar10 != uVar13);
        uVar17 = ((int)uVar17 < (int)uVar23) * uVar23 | ((int)uVar17 >= (int)uVar23) * uVar17;
        uVar20 = ((int)uVar20 < (int)uVar24) * uVar24 | ((int)uVar20 >= (int)uVar24) * uVar20;
        uVar21 = ((int)uVar21 < (int)uVar25) * uVar25 | ((int)uVar21 >= (int)uVar25) * uVar21;
        uVar22 = ((int)uVar22 < (int)uVar26) * uVar26 | ((int)uVar22 >= (int)uVar26) * uVar22;
        uVar17 = ((int)uVar21 < (int)uVar17) * uVar17 | ((int)uVar21 >= (int)uVar17) * uVar21;
        uVar20 = ((int)uVar22 < (int)uVar20) * uVar20 | ((int)uVar22 >= (int)uVar20) * uVar22;
        uVar20 = ((int)uVar20 < (int)uVar17) * uVar17 | ((int)uVar20 >= (int)uVar17) * uVar20;
      }
      do {
        uVar17 = *(uint *)(lVar11 + uVar10 * 8);
        if ((int)uVar20 < (int)uVar17) {
          uVar20 = uVar17;
        }
        uVar10 = uVar10 + 1;
      } while (uVar4 != uVar10);
    }
    if (uVar20 != local_8c) {
      FUN_01dcb680();
    }
    uVar19 = FUN_01dcfdb0();
    plVar3 = (longlong *)unaff_RDI[0x55];
    if (plVar3 != (longlong *)0x0) {
      uVar19 = FUN_00d50b00();
      local_a0 = *unaff_RSI;
      local_98 = '\0';
      uVar19 = (**(code **)(*plVar3 + 0x30))(uVar19,&local_a0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        uVar19 = FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        uVar19 = FUN_00d50b20();
      }
    }
    (**(code **)(*unaff_RDI + 0xa20))(uVar19,0);
    (**(code **)(*unaff_RDI + 0x620))();
    if (!bVar18 && lVar16 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


