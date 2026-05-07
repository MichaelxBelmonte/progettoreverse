// Function: FUN_00f46160
// Address: 00f46160
// Size: 1923 bytes
// Class: MUSpectrumShaper


int FUN_00f46160(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  short *psVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  void *pvVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  int unaff_ESI;
  longlong *unaff_RDI;
  size_t sVar16;
  void *pvVar17;
  bool bVar18;
  
LAB_00f4619d:
  do {
    if (*(uint *)((longlong)unaff_RDI + 0xb4) < 0x106) {
      FUN_00f439b0();
      sVar16 = (size_t)param_3;
      uVar9 = *(uint *)((longlong)unaff_RDI + 0xb4);
      if ((uVar9 < 0x106) && (unaff_ESI == 0)) {
        return 0;
      }
      if (uVar9 == 0) {
        if ((int)unaff_RDI[0x15] != 0) {
          bVar10 = *(byte *)(unaff_RDI[0xc] + (ulonglong)(*(int *)((longlong)unaff_RDI + 0xac) - 1))
          ;
          uVar9 = *(uint *)((longlong)unaff_RDI + 0x170c);
          *(uint *)((longlong)unaff_RDI + 0x170c) = uVar9 + 1;
          *(undefined1 *)(unaff_RDI[0x2e0] + (ulonglong)uVar9) = 0;
          uVar9 = *(uint *)((longlong)unaff_RDI + 0x170c);
          *(uint *)((longlong)unaff_RDI + 0x170c) = uVar9 + 1;
          *(undefined1 *)(unaff_RDI[0x2e0] + (ulonglong)uVar9) = 0;
          uVar9 = *(uint *)((longlong)unaff_RDI + 0x170c);
          *(uint *)((longlong)unaff_RDI + 0x170c) = uVar9 + 1;
          *(byte *)(unaff_RDI[0x2e0] + (ulonglong)uVar9) = bVar10;
          psVar2 = (short *)((longlong)unaff_RDI + (ulonglong)bVar10 * 4 + 0xd4);
          *psVar2 = *psVar2 + 1;
          *(undefined4 *)(unaff_RDI + 0x15) = 0;
        }
        uVar15 = (ulonglong)*(uint *)((longlong)unaff_RDI + 0xac);
        uVar9 = 2;
        if (uVar15 < 2) {
          uVar9 = *(uint *)((longlong)unaff_RDI + 0xac);
        }
        *(uint *)((longlong)unaff_RDI + 0x172c) = uVar9;
        if (unaff_ESI == 4) {
          pvVar12 = (void *)((longlong)&MACH_HEADER.magic + 1);
          FUN_00f4b740(1,uVar15 - unaff_RDI[0x13]);
          unaff_RDI[0x13] = (ulonglong)*(uint *)((longlong)unaff_RDI + 0xac);
          lVar6 = *unaff_RDI;
          lVar7 = *(longlong *)(lVar6 + 0x38);
          FUN_00f4b540();
          uVar9 = *(uint *)(lVar7 + 0x28);
          if (*(uint *)(lVar6 + 0x20) < *(uint *)(lVar7 + 0x28)) {
            uVar9 = *(uint *)(lVar6 + 0x20);
          }
          if (uVar9 != 0) {
            pvVar17 = (void *)(ulonglong)uVar9;
            _memcpy(pvVar12,pvVar17,sVar16);
            *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + (longlong)pvVar17;
            *(longlong *)(lVar7 + 0x20) = *(longlong *)(lVar7 + 0x20) + (longlong)pvVar17;
            *(longlong *)(lVar6 + 0x28) = *(longlong *)(lVar6 + 0x28) + (longlong)pvVar17;
            *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) - uVar9;
            plVar1 = (longlong *)(lVar7 + 0x28);
            *plVar1 = *plVar1 - (longlong)pvVar17;
            if (*plVar1 == 0) {
              *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar7 + 0x10);
            }
          }
          return 3 - (uint)(*(int *)(*unaff_RDI + 0x20) == 0);
        }
        if (*(int *)((longlong)unaff_RDI + 0x170c) != 0) {
          pvVar12 = (void *)0x0;
          FUN_00f4b740(0,uVar15 - unaff_RDI[0x13]);
          unaff_RDI[0x13] = (ulonglong)*(uint *)((longlong)unaff_RDI + 0xac);
          lVar6 = *unaff_RDI;
          lVar7 = *(longlong *)(lVar6 + 0x38);
          FUN_00f4b540();
          uVar9 = *(uint *)(lVar7 + 0x28);
          if (*(uint *)(lVar6 + 0x20) < *(uint *)(lVar7 + 0x28)) {
            uVar9 = *(uint *)(lVar6 + 0x20);
          }
          if (uVar9 != 0) {
            pvVar17 = (void *)(ulonglong)uVar9;
            _memcpy(pvVar12,pvVar17,sVar16);
            *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + (longlong)pvVar17;
            *(longlong *)(lVar7 + 0x20) = *(longlong *)(lVar7 + 0x20) + (longlong)pvVar17;
            *(longlong *)(lVar6 + 0x28) = *(longlong *)(lVar6 + 0x28) + (longlong)pvVar17;
            *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) - uVar9;
            plVar1 = (longlong *)(lVar7 + 0x28);
            *plVar1 = *plVar1 - (longlong)pvVar17;
            if (*plVar1 == 0) {
              *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar7 + 0x10);
            }
          }
          if (*(int *)(*unaff_RDI + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      if (2 < uVar9) goto LAB_00f461db;
      uVar9 = *(uint *)(unaff_RDI + 0x14);
      *(uint *)(unaff_RDI + 0x17) = uVar9;
      *(int *)((longlong)unaff_RDI + 0xa4) = (int)unaff_RDI[0x16];
      *(undefined4 *)(unaff_RDI + 0x14) = 2;
LAB_00f462ec:
      uVar13 = 2;
      if (uVar9 < 3) goto LAB_00f464b0;
LAB_00f46330:
      if (uVar9 < uVar13) goto LAB_00f464b0;
      uVar13 = *(uint *)((longlong)unaff_RDI + 0xa4);
      iVar4 = *(int *)((longlong)unaff_RDI + 0xac);
      iVar5 = *(int *)((longlong)unaff_RDI + 0xb4);
      bVar10 = (char)uVar9 - 3;
      iVar14 = iVar4 + ~uVar13;
      uVar9 = *(uint *)((longlong)unaff_RDI + 0x170c);
      *(uint *)((longlong)unaff_RDI + 0x170c) = uVar9 + 1;
      *(char *)(unaff_RDI[0x2e0] + (ulonglong)uVar9) = (char)iVar14;
      uVar9 = *(uint *)((longlong)unaff_RDI + 0x170c);
      *(uint *)((longlong)unaff_RDI + 0x170c) = uVar9 + 1;
      *(char *)(unaff_RDI[0x2e0] + (ulonglong)uVar9) = (char)((uint)iVar14 >> 8);
      uVar9 = *(uint *)((longlong)unaff_RDI + 0x170c);
      *(uint *)((longlong)unaff_RDI + 0x170c) = uVar9 + 1;
      *(byte *)(unaff_RDI[0x2e0] + (ulonglong)uVar9) = bVar10;
      psVar2 = (short *)((longlong)unaff_RDI + (ulonglong)(byte)(&DAT_023e8160)[bVar10] * 4 + 0x4d8)
      ;
      *psVar2 = *psVar2 + 1;
      uVar13 = (~uVar13 + iVar4) - 1 & 0xffff;
      uVar9 = (uVar13 >> 7) + 0x100;
      if (uVar13 < 0x100) {
        uVar9 = uVar13;
      }
      psVar2 = (short *)((longlong)unaff_RDI + (ulonglong)(byte)(&DAT_023e7f60)[uVar9] * 4 + 0x9c8);
      *psVar2 = *psVar2 + 1;
      uVar9 = *(uint *)((longlong)unaff_RDI + 0x170c);
      param_3 = (ulonglong)uVar9;
      uVar13 = *(uint *)(unaff_RDI + 0x2e2);
      iVar14 = (int)unaff_RDI[0x17];
      *(int *)((longlong)unaff_RDI + 0xb4) = (*(int *)((longlong)unaff_RDI + 0xb4) - iVar14) + 1;
      *(int *)(unaff_RDI + 0x17) = iVar14 + -2;
      iVar14 = iVar14 + -3;
      uVar8 = *(int *)((longlong)unaff_RDI + 0xac) + 1;
      do {
        *(uint *)((longlong)unaff_RDI + 0xac) = uVar8;
        if (uVar8 <= (iVar4 + iVar5) - 3U) {
          uVar11 = ((uint)*(byte *)(unaff_RDI[0xc] + (ulonglong)(uVar8 + 2)) ^
                   (int)unaff_RDI[0x10] << (*(byte *)(unaff_RDI + 0x12) & 0x1f)) &
                   *(uint *)((longlong)unaff_RDI + 0x8c);
          *(uint *)(unaff_RDI + 0x10) = uVar11;
          lVar6 = unaff_RDI[0xf];
          *(undefined2 *)(unaff_RDI[0xe] + (ulonglong)(*(uint *)(unaff_RDI + 0xb) & uVar8) * 2) =
               *(undefined2 *)(lVar6 + (ulonglong)uVar11 * 2);
          *(short *)(lVar6 + (ulonglong)uVar11 * 2) = (short)uVar8;
        }
        *(int *)(unaff_RDI + 0x17) = iVar14;
        uVar8 = uVar8 + 1;
        bVar18 = iVar14 != 0;
        iVar14 = iVar14 + -1;
      } while (bVar18);
      *(undefined4 *)(unaff_RDI + 0x15) = 0;
      *(undefined4 *)(unaff_RDI + 0x14) = 2;
      *(uint *)((longlong)unaff_RDI + 0xac) = uVar8;
      if (uVar9 != uVar13) goto LAB_00f4619d;
      pvVar12 = (void *)0x0;
      FUN_00f4b740(0,(ulonglong)uVar8 - unaff_RDI[0x13]);
      unaff_RDI[0x13] = (ulonglong)*(uint *)((longlong)unaff_RDI + 0xac);
      lVar6 = *unaff_RDI;
      lVar7 = *(longlong *)(lVar6 + 0x38);
      FUN_00f4b540();
      uVar9 = *(uint *)(lVar7 + 0x28);
      if (*(uint *)(lVar6 + 0x20) < *(uint *)(lVar7 + 0x28)) {
        uVar9 = *(uint *)(lVar6 + 0x20);
      }
      pvVar17 = (void *)(ulonglong)uVar9;
      if (uVar9 == 0) {
LAB_00f46630:
        iVar4 = *(int *)(*unaff_RDI + 0x20);
      }
      else {
        _memcpy(pvVar12,pvVar17,(size_t)param_3);
        *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + (longlong)pvVar17;
        *(longlong *)(lVar7 + 0x20) = *(longlong *)(lVar7 + 0x20) + (longlong)pvVar17;
        *(longlong *)(lVar6 + 0x28) = *(longlong *)(lVar6 + 0x28) + (longlong)pvVar17;
        *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) - uVar9;
        plVar1 = (longlong *)(lVar7 + 0x28);
        *plVar1 = *plVar1 - (longlong)pvVar17;
        if (*plVar1 != 0) goto LAB_00f46630;
        *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar7 + 0x10);
        iVar4 = *(int *)(*unaff_RDI + 0x20);
      }
    }
    else {
LAB_00f461db:
      uVar9 = *(uint *)((longlong)unaff_RDI + 0xac);
      param_3 = unaff_RDI[0xe];
      uVar13 = ((uint)*(byte *)(unaff_RDI[0xc] + (ulonglong)(uVar9 + 2)) ^
               (int)unaff_RDI[0x10] << (*(byte *)(unaff_RDI + 0x12) & 0x1f)) &
               *(uint *)((longlong)unaff_RDI + 0x8c);
      *(uint *)(unaff_RDI + 0x10) = uVar13;
      lVar6 = unaff_RDI[0xf];
      uVar3 = *(ushort *)(lVar6 + (ulonglong)uVar13 * 2);
      *(ushort *)(param_3 + (ulonglong)(*(uint *)(unaff_RDI + 0xb) & uVar9) * 2) = uVar3;
      *(short *)(lVar6 + (ulonglong)uVar13 * 2) = (short)uVar9;
      uVar9 = *(uint *)(unaff_RDI + 0x14);
      *(uint *)(unaff_RDI + 0x17) = uVar9;
      *(int *)((longlong)unaff_RDI + 0xa4) = (int)unaff_RDI[0x16];
      *(undefined4 *)(unaff_RDI + 0x14) = 2;
      uVar13 = 2;
      if (uVar3 == 0) goto LAB_00f462ec;
      if ((uVar9 < *(uint *)(unaff_RDI + 0x18)) &&
         (*(int *)((longlong)unaff_RDI + 0xac) - (uint)uVar3 <= (int)unaff_RDI[10] - 0x106U)) {
        uVar13 = FUN_00f46910();
        *(uint *)(unaff_RDI + 0x14) = uVar13;
        if ((uVar13 < 6) &&
           (((int)unaff_RDI[0x19] == 1 ||
            ((uVar13 == 3 &&
             (uVar13 = 3,
             0x1000 < (uint)(*(int *)((longlong)unaff_RDI + 0xac) - (int)unaff_RDI[0x16]))))))) {
          *(undefined4 *)(unaff_RDI + 0x14) = 2;
          uVar13 = 2;
        }
      }
      uVar9 = *(uint *)(unaff_RDI + 0x17);
      if (2 < uVar9) goto LAB_00f46330;
LAB_00f464b0:
      if ((int)unaff_RDI[0x15] == 0) {
        *(undefined4 *)(unaff_RDI + 0x15) = 1;
        *(int *)((longlong)unaff_RDI + 0xac) = *(int *)((longlong)unaff_RDI + 0xac) + 1;
        *(int *)((longlong)unaff_RDI + 0xb4) = *(int *)((longlong)unaff_RDI + 0xb4) + -1;
        goto LAB_00f4619d;
      }
      bVar10 = *(byte *)(unaff_RDI[0xc] + (ulonglong)(*(int *)((longlong)unaff_RDI + 0xac) - 1));
      uVar9 = *(uint *)((longlong)unaff_RDI + 0x170c);
      *(uint *)((longlong)unaff_RDI + 0x170c) = uVar9 + 1;
      *(undefined1 *)(unaff_RDI[0x2e0] + (ulonglong)uVar9) = 0;
      uVar9 = *(uint *)((longlong)unaff_RDI + 0x170c);
      *(uint *)((longlong)unaff_RDI + 0x170c) = uVar9 + 1;
      *(undefined1 *)(unaff_RDI[0x2e0] + (ulonglong)uVar9) = 0;
      uVar9 = *(uint *)((longlong)unaff_RDI + 0x170c);
      *(uint *)((longlong)unaff_RDI + 0x170c) = uVar9 + 1;
      *(byte *)(unaff_RDI[0x2e0] + (ulonglong)uVar9) = bVar10;
      psVar2 = (short *)((longlong)unaff_RDI + (ulonglong)bVar10 * 4 + 0xd4);
      *psVar2 = *psVar2 + 1;
      if (*(int *)((longlong)unaff_RDI + 0x170c) == (int)unaff_RDI[0x2e2]) {
        pvVar12 = (void *)0x0;
        FUN_00f4b740(0,(ulonglong)*(uint *)((longlong)unaff_RDI + 0xac) - unaff_RDI[0x13]);
        unaff_RDI[0x13] = (ulonglong)*(uint *)((longlong)unaff_RDI + 0xac);
        lVar6 = *unaff_RDI;
        lVar7 = *(longlong *)(lVar6 + 0x38);
        FUN_00f4b540();
        uVar9 = *(uint *)(lVar7 + 0x28);
        if (*(uint *)(lVar6 + 0x20) < *(uint *)(lVar7 + 0x28)) {
          uVar9 = *(uint *)(lVar6 + 0x20);
        }
        pvVar17 = (void *)(ulonglong)uVar9;
        if (uVar9 != 0) {
          _memcpy(pvVar12,pvVar17,(size_t)param_3);
          *(longlong *)(lVar6 + 0x18) = *(longlong *)(lVar6 + 0x18) + (longlong)pvVar17;
          *(longlong *)(lVar7 + 0x20) = *(longlong *)(lVar7 + 0x20) + (longlong)pvVar17;
          *(longlong *)(lVar6 + 0x28) = *(longlong *)(lVar6 + 0x28) + (longlong)pvVar17;
          *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) - uVar9;
          plVar1 = (longlong *)(lVar7 + 0x28);
          *plVar1 = *plVar1 - (longlong)pvVar17;
          if (*plVar1 == 0) {
            *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar7 + 0x10);
          }
        }
      }
      *(int *)((longlong)unaff_RDI + 0xac) = *(int *)((longlong)unaff_RDI + 0xac) + 1;
      *(int *)((longlong)unaff_RDI + 0xb4) = *(int *)((longlong)unaff_RDI + 0xb4) + -1;
      iVar4 = *(int *)(*unaff_RDI + 0x20);
    }
    if (iVar4 == 0) {
      return 0;
    }
  } while( true );
}


