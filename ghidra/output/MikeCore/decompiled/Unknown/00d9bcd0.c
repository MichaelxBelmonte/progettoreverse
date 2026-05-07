// Function: FUN_00d9bcd0
// Address: 00d9bcd0
// Size: 1542 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00d9bcd0(void)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  short *psVar5;
  short *psVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  longlong *plVar38;
  longlong lVar39;
  ulonglong uVar40;
  int *piVar41;
  int iVar42;
  ulonglong uVar43;
  uint *puVar44;
  int iVar45;
  ulonglong uVar46;
  ushort uVar47;
  longlong *unaff_RSI;
  ulonglong uVar48;
  longlong lVar49;
  ushort uVar50;
  int iVar51;
  longlong *unaff_RDI;
  longlong lVar52;
  ulonglong uVar53;
  int iVar54;
  uint uVar55;
  ushort uVar56;
  uint uVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int local_38;
  
  lVar39 = *unaff_RDI;
  if (*(int *)(lVar39 + 0x20) == -1) {
    FUN_00d931c0();
  }
  psVar5 = *(short **)(lVar39 + 0x18);
  lVar39 = *unaff_RSI;
  if (*(int *)(lVar39 + 0x20) == -1) {
    FUN_00d931c0();
  }
  psVar6 = *(short **)(lVar39 + 0x18);
  local_38 = *(int *)(*unaff_RDI + 0x20);
  if (local_38 == -1) {
    if (*(longlong *)(*unaff_RDI + 0x10) == 0) {
      local_38 = 0;
    }
    else {
      local_38 = FUN_00e7dde0();
    }
  }
  iVar36 = *(int *)(*unaff_RSI + 0x20);
  if (iVar36 == -1) {
    if (*(longlong *)(*unaff_RSI + 0x10) == 0) {
      iVar36 = 0;
    }
    else {
      iVar36 = FUN_00e7dde0();
    }
  }
  uVar55 = local_38 + 1;
  plVar38 = (longlong *)FUN_00e83010();
  uVar57 = iVar36 + 1;
  lVar39 = FUN_00e83010();
  *plVar38 = lVar39;
  uVar53 = (ulonglong)uVar55;
  if (-1 < local_38) {
    *plVar38 = lVar39;
    if (local_38 != 0) {
      uVar40 = (ulonglong)((uint)(uVar53 - 1) & 3);
      lVar39 = 1;
      if (2 < uVar53 - 2) {
        iVar54 = iVar36 * 4 + 4;
        iVar51 = iVar36 * 3 + 3;
        iVar45 = iVar36 * 2 + 2;
        uVar43 = 0;
        uVar37 = uVar57;
        iVar42 = iVar54;
        do {
          uVar46 = uVar43;
          plVar38[uVar46 + 1] = (longlong)(int)uVar37 * 4 + *plVar38;
          plVar38[uVar46 + 2] = (longlong)iVar45 * 4 + *plVar38;
          plVar38[uVar46 + 3] = (longlong)iVar51 * 4 + *plVar38;
          plVar38[uVar46 + 4] = (longlong)iVar42 * 4 + *plVar38;
          iVar42 = iVar42 + iVar54;
          iVar51 = iVar51 + iVar54;
          iVar45 = iVar45 + iVar54;
          uVar37 = uVar37 + iVar54;
          uVar43 = uVar46 + 4;
        } while ((uVar53 - 1 & 0xfffffffffffffffc) != uVar46 + 4);
        lVar39 = uVar46 + 5;
      }
      if (uVar40 != 0) {
        iVar42 = (int)lVar39 * uVar57;
        uVar43 = 0;
        do {
          plVar38[lVar39 + uVar43] = (longlong)iVar42 * 4 + *plVar38;
          uVar43 = uVar43 + 1;
          iVar42 = iVar42 + uVar57;
        } while (uVar40 != uVar43);
      }
    }
    uVar40 = (ulonglong)(uVar55 & 7);
    if (uVar53 - 1 < 7) {
      uVar43 = 0;
    }
    else {
      uVar43 = 0;
      do {
        iVar42 = (int)uVar43;
        *(int *)plVar38[uVar43] = iVar42;
        *(int *)plVar38[uVar43 + 1] = iVar42 + 1;
        *(int *)plVar38[uVar43 + 2] = iVar42 + 2;
        *(int *)plVar38[uVar43 + 3] = iVar42 + 3;
        *(int *)plVar38[uVar43 + 4] = iVar42 + 4;
        *(int *)plVar38[uVar43 + 5] = iVar42 + 5;
        *(int *)plVar38[uVar43 + 6] = iVar42 + 6;
        *(int *)plVar38[uVar43 + 7] = iVar42 + 7;
        uVar43 = uVar43 + 8;
      } while ((uVar55 & 0xfffffff8) != uVar43);
    }
    for (; uVar40 != 0; uVar40 = uVar40 - 1) {
      *(int *)plVar38[uVar43] = (int)uVar43;
      uVar43 = uVar43 + 1;
    }
  }
  iVar35 = _UNK_023de31c;
  iVar34 = _UNK_023de318;
  iVar33 = _UNK_023de314;
  iVar32 = _DAT_023de310;
  iVar31 = _UNK_023de30c;
  iVar30 = _UNK_023de308;
  iVar29 = _UNK_023de304;
  iVar28 = _DAT_023de300;
  iVar27 = _UNK_023de2fc;
  iVar26 = _UNK_023de2f8;
  iVar25 = _UNK_023de2f4;
  iVar24 = _DAT_023de2f0;
  iVar23 = _UNK_023de2ec;
  iVar22 = _UNK_023de2e8;
  iVar21 = _UNK_023de2e4;
  iVar20 = _DAT_023de2e0;
  iVar19 = _UNK_023de2dc;
  iVar18 = _UNK_023de2d8;
  iVar17 = _UNK_023de2d4;
  iVar16 = _DAT_023de2d0;
  iVar15 = _UNK_023de2cc;
  iVar14 = _UNK_023de2c8;
  iVar13 = _UNK_023de2c4;
  iVar12 = _DAT_023de2c0;
  iVar11 = _UNK_023de2bc;
  iVar10 = _UNK_023de2b8;
  iVar9 = _UNK_023de2b4;
  iVar8 = _DAT_023de2b0;
  iVar54 = _UNK_0239418c;
  iVar51 = _UNK_02394188;
  iVar45 = _UNK_02394184;
  iVar42 = _DAT_02394180;
  uVar40 = (ulonglong)uVar57;
  if (-1 < iVar36) {
    lVar39 = *plVar38;
    if (uVar57 < 8) {
      uVar43 = 0;
    }
    else {
      uVar43 = (ulonglong)(uVar57 & 0xfffffff8);
      uVar48 = (uVar43 - 8 >> 3) + 1;
      uVar46 = (ulonglong)((uint)uVar48 & 3);
      iVar58 = _DAT_0238fcc0;
      iVar59 = _UNK_0238fcc4;
      iVar60 = _UNK_0238fcc8;
      iVar61 = _UNK_0238fccc;
      if (uVar43 - 8 < 0x18) {
        lVar52 = 0;
      }
      else {
        lVar49 = -(uVar48 & 0xfffffffffffffffc);
        lVar52 = 0;
        do {
          piVar41 = (int *)(lVar39 + lVar52 * 4);
          *piVar41 = iVar58;
          piVar41[1] = iVar59;
          piVar41[2] = iVar60;
          piVar41[3] = iVar61;
          piVar41 = (int *)(lVar39 + 0x10 + lVar52 * 4);
          *piVar41 = iVar58 + iVar42;
          piVar41[1] = iVar59 + iVar45;
          piVar41[2] = iVar60 + iVar51;
          piVar41[3] = iVar61 + iVar54;
          piVar41 = (int *)(lVar39 + 0x20 + lVar52 * 4);
          *piVar41 = iVar58 + iVar8;
          piVar41[1] = iVar59 + iVar9;
          piVar41[2] = iVar60 + iVar10;
          piVar41[3] = iVar61 + iVar11;
          piVar41 = (int *)(lVar39 + 0x30 + lVar52 * 4);
          *piVar41 = iVar58 + iVar12;
          piVar41[1] = iVar59 + iVar13;
          piVar41[2] = iVar60 + iVar14;
          piVar41[3] = iVar61 + iVar15;
          piVar41 = (int *)(lVar39 + 0x40 + lVar52 * 4);
          *piVar41 = iVar58 + iVar16;
          piVar41[1] = iVar59 + iVar17;
          piVar41[2] = iVar60 + iVar18;
          piVar41[3] = iVar61 + iVar19;
          piVar41 = (int *)(lVar39 + 0x50 + lVar52 * 4);
          *piVar41 = iVar58 + iVar20;
          piVar41[1] = iVar59 + iVar21;
          piVar41[2] = iVar60 + iVar22;
          piVar41[3] = iVar61 + iVar23;
          piVar41 = (int *)(lVar39 + 0x60 + lVar52 * 4);
          *piVar41 = iVar58 + iVar24;
          piVar41[1] = iVar59 + iVar25;
          piVar41[2] = iVar60 + iVar26;
          piVar41[3] = iVar61 + iVar27;
          piVar41 = (int *)(lVar39 + 0x70 + lVar52 * 4);
          *piVar41 = iVar58 + iVar28;
          piVar41[1] = iVar59 + iVar29;
          piVar41[2] = iVar60 + iVar30;
          piVar41[3] = iVar61 + iVar31;
          lVar52 = lVar52 + 0x20;
          iVar58 = iVar58 + iVar32;
          iVar59 = iVar59 + iVar33;
          iVar60 = iVar60 + iVar34;
          iVar61 = iVar61 + iVar35;
          lVar49 = lVar49 + 4;
        } while (lVar49 != 0);
      }
      iVar11 = _UNK_023de2bc;
      iVar10 = _UNK_023de2b8;
      iVar9 = _UNK_023de2b4;
      iVar8 = _DAT_023de2b0;
      iVar54 = _UNK_0239418c;
      iVar51 = _UNK_02394188;
      iVar45 = _UNK_02394184;
      iVar42 = _DAT_02394180;
      if (uVar46 != 0) {
        lVar49 = lVar39 + lVar52 * 4;
        lVar52 = 0;
        do {
          piVar41 = (int *)(lVar49 + lVar52);
          *piVar41 = iVar58;
          piVar41[1] = iVar59;
          piVar41[2] = iVar60;
          piVar41[3] = iVar61;
          piVar41 = (int *)(lVar49 + 0x10 + lVar52);
          *piVar41 = iVar58 + iVar42;
          piVar41[1] = iVar59 + iVar45;
          piVar41[2] = iVar60 + iVar51;
          piVar41[3] = iVar61 + iVar54;
          iVar58 = iVar58 + iVar8;
          iVar59 = iVar59 + iVar9;
          iVar60 = iVar60 + iVar10;
          iVar61 = iVar61 + iVar11;
          lVar52 = lVar52 + 0x20;
        } while (uVar46 << 5 != lVar52);
      }
      if (uVar43 == uVar40) goto LAB_00d9c0bc;
    }
    do {
      *(int *)(lVar39 + uVar43 * 4) = (int)uVar43;
      uVar43 = uVar43 + 1;
    } while (uVar40 != uVar43);
  }
LAB_00d9c0bc:
  if ((0 < local_38) && (0 < iVar36)) {
    puVar44 = (uint *)*plVar38;
    if (uVar57 == 2) {
      piVar41 = (int *)plVar38[1];
      uVar57 = (uint)(*psVar5 != *psVar6) + *puVar44;
      if ((ushort)(*piVar41 + 1U) <= (ushort)uVar57) {
        uVar57 = *piVar41 + 1U;
      }
      if ((ushort)(puVar44[1] + 1) <= (ushort)uVar57) {
        uVar57 = puVar44[1] + 1;
      }
      piVar41[1] = uVar57 & 0xffff;
      if (uVar55 != 2) {
        lVar39 = 0;
        do {
          piVar1 = piVar41 + 1;
          uVar55 = (uint)(psVar5[lVar39 + 1] != *psVar6) + *piVar41;
          piVar41 = (int *)plVar38[lVar39 + 2];
          if ((ushort)(*piVar41 + 1U) <= (ushort)uVar55) {
            uVar55 = *piVar41 + 1U;
          }
          if ((ushort)(*piVar1 + 1U) <= (ushort)uVar55) {
            uVar55 = *piVar1 + 1U;
          }
          piVar41[1] = uVar55 & 0xffff;
          lVar39 = lVar39 + 1;
        } while (uVar53 - 2 != lVar39);
      }
    }
    else {
      uVar43 = 1;
      do {
        sVar2 = psVar5[uVar43 - 1];
        puVar7 = (uint *)plVar38[uVar43];
        if (uVar43 < 2) {
          uVar55 = *puVar7;
          lVar39 = 0;
          do {
            uVar56 = (short)puVar44[lVar39 + 1] + 1;
            uVar50 = (short)uVar55 + 1;
            uVar47 = (ushort)(sVar2 != psVar6[lVar39]) + (short)puVar44[lVar39];
            if (uVar50 <= uVar47) {
              uVar47 = uVar50;
            }
            if (uVar56 <= uVar47) {
              uVar47 = uVar56;
            }
            uVar55 = (uint)uVar47;
            puVar7[lVar39 + 1] = uVar55;
            lVar39 = lVar39 + 1;
          } while (uVar40 - 1 != lVar39);
        }
        else {
          uVar55 = (uint)(sVar2 != *psVar6) + *puVar44;
          if ((ushort)(*puVar7 + 1) <= (ushort)uVar55) {
            uVar55 = *puVar7 + 1;
          }
          if ((ushort)(puVar44[1] + 1) <= (ushort)uVar55) {
            uVar55 = puVar44[1] + 1;
          }
          uVar57 = (int)uVar43 - 2;
          uVar37 = uVar55 & 0xffff;
          puVar7[1] = uVar55 & 0xffff;
          uVar46 = 0;
          do {
            sVar3 = psVar6[uVar46 + 1];
            uVar50 = (short)puVar44[uVar46 + 2] + 1;
            uVar56 = (short)uVar37 + 1;
            uVar47 = (short)puVar44[uVar46 + 1] + (ushort)(sVar2 != sVar3);
            if (uVar56 <= uVar47) {
              uVar47 = uVar56;
            }
            if (uVar50 <= uVar47) {
              uVar47 = uVar50;
            }
            uVar37 = (uint)uVar47;
            puVar7[uVar46 + 2] = (uint)uVar47;
            if ((sVar2 == psVar6[uVar46 & 0xffffffff]) && (psVar5[uVar57] == sVar3)) {
              uVar37 = (uint)(sVar2 != sVar3) +
                       *(int *)(plVar38[uVar57] + (uVar46 & 0xffffffff) * 4);
              if ((int)(uint)uVar47 <= (int)uVar37) {
                uVar37 = (uint)uVar47;
              }
              puVar7[uVar46 + 2] = uVar37;
            }
            uVar46 = uVar46 + 1;
          } while (uVar40 - 2 != uVar46);
        }
        uVar43 = uVar43 + 1;
        puVar44 = puVar7;
      } while (uVar43 != uVar53);
    }
  }
  uVar4 = *(undefined4 *)(plVar38[local_38] + (longlong)iVar36 * 4);
  FUN_00e83070();
  *plVar38 = 0;
  FUN_00e83070();
  return uVar4;
}


