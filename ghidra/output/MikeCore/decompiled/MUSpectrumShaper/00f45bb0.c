// Function: FUN_00f45bb0
// Address: 00f45bb0
// Size: 1427 bytes
// Class: MUSpectrumShaper


int FUN_00f45bb0(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  short *psVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  void *pvVar16;
  int unaff_ESI;
  uint uVar17;
  ulonglong uVar18;
  longlong *unaff_RDI;
  size_t sVar19;
  void *pvVar20;
  bool bVar21;
  
LAB_00f45bde:
  do {
    if (*(uint *)((longlong)unaff_RDI + 0xb4) < 0x106) {
      FUN_00f439b0();
      sVar19 = (size_t)param_3;
      uVar12 = *(uint *)((longlong)unaff_RDI + 0xb4);
      if ((uVar12 < 0x106) && (unaff_ESI == 0)) {
        return 0;
      }
      if (uVar12 == 0) {
        uVar13 = (ulonglong)*(uint *)((longlong)unaff_RDI + 0xac);
        uVar12 = 2;
        if (uVar13 < 2) {
          uVar12 = *(uint *)((longlong)unaff_RDI + 0xac);
        }
        *(uint *)((longlong)unaff_RDI + 0x172c) = uVar12;
        if (unaff_ESI == 4) {
          pvVar16 = (void *)((longlong)&MACH_HEADER.magic + 1);
          FUN_00f4b740(1,uVar13 - unaff_RDI[0x13]);
          unaff_RDI[0x13] = (ulonglong)*(uint *)((longlong)unaff_RDI + 0xac);
          lVar5 = *unaff_RDI;
          lVar6 = *(longlong *)(lVar5 + 0x38);
          FUN_00f4b540();
          uVar12 = *(uint *)(lVar6 + 0x28);
          if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar6 + 0x28)) {
            uVar12 = *(uint *)(lVar5 + 0x20);
          }
          if (uVar12 != 0) {
            pvVar20 = (void *)(ulonglong)uVar12;
            _memcpy(pvVar16,pvVar20,sVar19);
            *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + (longlong)pvVar20;
            *(longlong *)(lVar6 + 0x20) = *(longlong *)(lVar6 + 0x20) + (longlong)pvVar20;
            *(longlong *)(lVar5 + 0x28) = *(longlong *)(lVar5 + 0x28) + (longlong)pvVar20;
            *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) - uVar12;
            plVar1 = (longlong *)(lVar6 + 0x28);
            *plVar1 = *plVar1 - (longlong)pvVar20;
            if (*plVar1 == 0) {
              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar6 + 0x10);
            }
          }
          return 3 - (uint)(*(int *)(*unaff_RDI + 0x20) == 0);
        }
        if (*(int *)((longlong)unaff_RDI + 0x170c) != 0) {
          pvVar16 = (void *)0x0;
          FUN_00f4b740(0,uVar13 - unaff_RDI[0x13]);
          unaff_RDI[0x13] = (ulonglong)*(uint *)((longlong)unaff_RDI + 0xac);
          lVar5 = *unaff_RDI;
          lVar6 = *(longlong *)(lVar5 + 0x38);
          FUN_00f4b540();
          uVar12 = *(uint *)(lVar6 + 0x28);
          if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar6 + 0x28)) {
            uVar12 = *(uint *)(lVar5 + 0x20);
          }
          if (uVar12 != 0) {
            pvVar20 = (void *)(ulonglong)uVar12;
            _memcpy(pvVar16,pvVar20,sVar19);
            *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + (longlong)pvVar20;
            *(longlong *)(lVar6 + 0x20) = *(longlong *)(lVar6 + 0x20) + (longlong)pvVar20;
            *(longlong *)(lVar5 + 0x28) = *(longlong *)(lVar5 + 0x28) + (longlong)pvVar20;
            *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) - uVar12;
            plVar1 = (longlong *)(lVar6 + 0x28);
            *plVar1 = *plVar1 - (longlong)pvVar20;
            if (*plVar1 == 0) {
              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar6 + 0x10);
            }
          }
          if (*(int *)(*unaff_RDI + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      if (2 < uVar12) goto LAB_00f45c18;
LAB_00f45c7e:
      uVar12 = *(uint *)(unaff_RDI + 0x14);
      if (2 < uVar12) goto LAB_00f45c8e;
LAB_00f45e88:
      bVar9 = *(byte *)(unaff_RDI[0xc] + (ulonglong)*(uint *)((longlong)unaff_RDI + 0xac));
      uVar12 = *(uint *)((longlong)unaff_RDI + 0x170c);
      *(uint *)((longlong)unaff_RDI + 0x170c) = uVar12 + 1;
      *(undefined1 *)(unaff_RDI[0x2e0] + (ulonglong)uVar12) = 0;
      uVar12 = *(uint *)((longlong)unaff_RDI + 0x170c);
      *(uint *)((longlong)unaff_RDI + 0x170c) = uVar12 + 1;
      *(undefined1 *)(unaff_RDI[0x2e0] + (ulonglong)uVar12) = 0;
      uVar12 = *(uint *)((longlong)unaff_RDI + 0x170c);
      *(uint *)((longlong)unaff_RDI + 0x170c) = uVar12 + 1;
      *(byte *)(unaff_RDI[0x2e0] + (ulonglong)uVar12) = bVar9;
      psVar2 = (short *)((longlong)unaff_RDI + (ulonglong)bVar9 * 4 + 0xd4);
      *psVar2 = *psVar2 + 1;
      *(int *)((longlong)unaff_RDI + 0xb4) = *(int *)((longlong)unaff_RDI + 0xb4) + -1;
      uVar12 = *(int *)((longlong)unaff_RDI + 0xac) + 1;
      uVar13 = (ulonglong)uVar12;
      *(uint *)((longlong)unaff_RDI + 0xac) = uVar12;
      if (*(int *)((longlong)unaff_RDI + 0x170c) != (int)unaff_RDI[0x2e2]) goto LAB_00f45bde;
    }
    else {
LAB_00f45c18:
      uVar12 = *(uint *)((longlong)unaff_RDI + 0xac);
      param_3 = unaff_RDI[0xe];
      uVar14 = ((uint)*(byte *)(unaff_RDI[0xc] + (ulonglong)(uVar12 + 2)) ^
               (int)unaff_RDI[0x10] << (*(byte *)(unaff_RDI + 0x12) & 0x1f)) &
               *(uint *)((longlong)unaff_RDI + 0x8c);
      *(uint *)(unaff_RDI + 0x10) = uVar14;
      lVar5 = unaff_RDI[0xf];
      uVar3 = *(ushort *)(lVar5 + (ulonglong)uVar14 * 2);
      *(ushort *)(param_3 + (ulonglong)(*(uint *)(unaff_RDI + 0xb) & uVar12) * 2) = uVar3;
      *(short *)(lVar5 + (ulonglong)uVar14 * 2) = (short)uVar12;
      if ((uVar3 == 0) || ((int)unaff_RDI[10] - 0x106U < uVar12 - uVar3)) goto LAB_00f45c7e;
      uVar12 = FUN_00f46910();
      *(uint *)(unaff_RDI + 0x14) = uVar12;
      if (uVar12 < 3) goto LAB_00f45e88;
LAB_00f45c8e:
      bVar9 = (char)uVar12 - 3;
      iVar15 = *(int *)((longlong)unaff_RDI + 0xac) - (int)unaff_RDI[0x16];
      uVar12 = *(uint *)((longlong)unaff_RDI + 0x170c);
      *(uint *)((longlong)unaff_RDI + 0x170c) = uVar12 + 1;
      *(char *)(unaff_RDI[0x2e0] + (ulonglong)uVar12) = (char)iVar15;
      uVar12 = *(uint *)((longlong)unaff_RDI + 0x170c);
      *(uint *)((longlong)unaff_RDI + 0x170c) = uVar12 + 1;
      *(char *)(unaff_RDI[0x2e0] + (ulonglong)uVar12) = (char)((uint)iVar15 >> 8);
      uVar12 = *(uint *)((longlong)unaff_RDI + 0x170c);
      *(uint *)((longlong)unaff_RDI + 0x170c) = uVar12 + 1;
      *(byte *)(unaff_RDI[0x2e0] + (ulonglong)uVar12) = bVar9;
      psVar2 = (short *)((longlong)unaff_RDI + (ulonglong)(byte)(&DAT_023e8160)[bVar9] * 4 + 0x4d8);
      *psVar2 = *psVar2 + 1;
      uVar14 = iVar15 - 1U & 0xffff;
      uVar12 = (uVar14 >> 7) + 0x100;
      if (uVar14 < 0x100) {
        uVar12 = uVar14;
      }
      psVar2 = (short *)((longlong)unaff_RDI + (ulonglong)(byte)(&DAT_023e7f60)[uVar12] * 4 + 0x9c8)
      ;
      *psVar2 = *psVar2 + 1;
      uVar12 = *(uint *)((longlong)unaff_RDI + 0x170c);
      param_3 = (ulonglong)uVar12;
      uVar14 = *(uint *)(unaff_RDI + 0x2e2);
      uVar11 = *(uint *)(unaff_RDI + 0x14);
      uVar10 = *(int *)((longlong)unaff_RDI + 0xb4) - uVar11;
      *(uint *)((longlong)unaff_RDI + 0xb4) = uVar10;
      if ((*(uint *)(unaff_RDI + 0x18) < uVar11) || (uVar10 < 3)) {
        iVar15 = *(int *)((longlong)unaff_RDI + 0xac);
        uVar10 = iVar15 + uVar11;
        uVar13 = (ulonglong)uVar10;
        *(uint *)((longlong)unaff_RDI + 0xac) = uVar10;
        *(undefined4 *)(unaff_RDI + 0x14) = 0;
        uVar10 = (uint)*(byte *)(unaff_RDI[0xc] + uVar13);
        *(uint *)(unaff_RDI + 0x10) = uVar10;
        *(uint *)(unaff_RDI + 0x10) =
             ((uint)*(byte *)(unaff_RDI[0xc] + (ulonglong)(iVar15 + uVar11 + 1)) ^
             uVar10 << (*(byte *)(unaff_RDI + 0x12) & 0x1f)) & *(uint *)((longlong)unaff_RDI + 0x8c)
        ;
      }
      else {
        *(uint *)(unaff_RDI + 0x14) = uVar11 - 1;
        lVar8 = unaff_RDI[0x12];
        lVar5 = unaff_RDI[0xc];
        uVar10 = *(uint *)((longlong)unaff_RDI + 0x8c);
        lVar6 = unaff_RDI[0xf];
        lVar7 = unaff_RDI[0xe];
        uVar4 = *(uint *)(unaff_RDI + 0xb);
        uVar18 = (ulonglong)*(uint *)(unaff_RDI + 0x10);
        iVar15 = uVar11 - 2;
        uVar13 = (ulonglong)(*(int *)((longlong)unaff_RDI + 0xac) + 1);
        do {
          uVar11 = (uint)uVar13;
          *(uint *)((longlong)unaff_RDI + 0xac) = uVar11;
          uVar17 = uVar10 & ((uint)*(byte *)(lVar5 + (ulonglong)(uVar11 + 2)) ^
                            (int)uVar18 << ((byte)(int)lVar8 & 0x1f));
          uVar18 = (ulonglong)uVar17;
          *(uint *)(unaff_RDI + 0x10) = uVar17;
          *(undefined2 *)(lVar7 + (ulonglong)(uVar4 & uVar11) * 2) =
               *(undefined2 *)(lVar6 + uVar18 * 2);
          *(short *)(lVar6 + uVar18 * 2) = (short)uVar13;
          *(int *)(unaff_RDI + 0x14) = iVar15;
          uVar13 = (ulonglong)(uVar11 + 1);
          bVar21 = iVar15 != 0;
          iVar15 = iVar15 + -1;
        } while (bVar21);
        *(uint *)((longlong)unaff_RDI + 0xac) = uVar11 + 1;
      }
      if (uVar12 != uVar14) goto LAB_00f45bde;
    }
    pvVar16 = (void *)0x0;
    FUN_00f4b740(0,uVar13 - unaff_RDI[0x13]);
    unaff_RDI[0x13] = (ulonglong)*(uint *)((longlong)unaff_RDI + 0xac);
    lVar5 = *unaff_RDI;
    lVar6 = *(longlong *)(lVar5 + 0x38);
    FUN_00f4b540();
    uVar12 = *(uint *)(lVar6 + 0x28);
    if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar6 + 0x28)) {
      uVar12 = *(uint *)(lVar5 + 0x20);
    }
    pvVar20 = (void *)(ulonglong)uVar12;
    if (uVar12 != 0) {
      _memcpy(pvVar16,pvVar20,(size_t)param_3);
      *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + (longlong)pvVar20;
      *(longlong *)(lVar6 + 0x20) = *(longlong *)(lVar6 + 0x20) + (longlong)pvVar20;
      *(longlong *)(lVar5 + 0x28) = *(longlong *)(lVar5 + 0x28) + (longlong)pvVar20;
      *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) - uVar12;
      plVar1 = (longlong *)(lVar6 + 0x28);
      *plVar1 = *plVar1 - (longlong)pvVar20;
      if (*plVar1 == 0) {
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar6 + 0x10);
      }
    }
    if (*(int *)(*unaff_RDI + 0x20) == 0) {
      return 0;
    }
  } while( true );
}


