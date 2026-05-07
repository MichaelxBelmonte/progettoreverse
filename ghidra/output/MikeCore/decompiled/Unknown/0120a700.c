// Function: FUN_0120a700
// Address: 0120a700
// Size: 1926 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0120a859) */
/* WARNING: Removing unreachable block (ram,0x0120a862) */
/* WARNING: Removing unreachable block (ram,0x0120a77d) */
/* WARNING: Removing unreachable block (ram,0x0120a786) */
/* WARNING: Removing unreachable block (ram,0x0120ac11) */
/* WARNING: Removing unreachable block (ram,0x0120ae5a) */
/* WARNING: Removing unreachable block (ram,0x0120ae63) */
/* WARNING: Removing unreachable block (ram,0x0120a923) */
/* WARNING: Removing unreachable block (ram,0x0120a92c) */
/* WARNING: Removing unreachable block (ram,0x0120addc) */
/* WARNING: Removing unreachable block (ram,0x0120ade9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0120a700(float param_1,float param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined8 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  void *pvVar21;
  uint in_EDX;
  ulonglong uVar22;
  ulonglong uVar23;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  undefined4 uVar30;
  undefined4 extraout_XMM0_Da;
  float fVar31;
  undefined4 extraout_XMM0_Da_00;
  float fVar32;
  float fVar33;
  longlong local_a0;
  char local_98;
  longlong local_40;
  
  puVar14 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar14 = &DAT_02572358;
  uVar30 = (*DAT_02572370)();
  local_40 = *unaff_RDI;
  FUN_00d214d0(uVar30,*(undefined4 *)((longlong)puVar14 + 0xc));
  FUN_00d216c0();
  iVar11 = FUN_00e7d780((float)unaff_ESI * DAT_0241f368);
  pcVar8 = DAT_025683d8;
  if (0 < *(int *)((longlong)puVar14 + 0xc)) {
    lVar28 = 0;
    do {
      lVar9 = local_40;
      lVar6 = *(longlong *)(puVar14[2] + lVar28 * 8);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      FUN_015f8890();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      uVar4 = *(uint *)(local_40 + 0xc);
      puVar15 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar15 = &DAT_025683c0;
      (*pcVar8)();
      FUN_00c92170();
      FUN_00c92160();
      uVar16 = FUN_00e7b4e0();
      iVar12 = *(int *)(puVar15 + 3);
      FUN_00c8e340(extraout_XMM0_Da,1);
      *(undefined8 *)(puVar15[2] + (longlong)iVar12) = uVar16;
      FUN_00c8e690();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      bVar10 = false;
      iVar12 = 0;
      do {
        ___bzero();
        if (0 < (int)uVar4) {
          if (iVar12 == 0) {
            uVar22 = 0;
            do {
              lVar19 = *(longlong *)(*(longlong *)(local_40 + 0x10) + uVar22 * 8);
              if (lVar19 != 0) {
                FUN_00d50b00();
              }
              if ((*(longlong *)(lVar19 + 0x78) == 0) &&
                 ((((fVar31 = *(float *)(lVar19 + 0x50), *(longlong *)(lVar19 + 0x88) == 0 ||
                    (fVar31 <= DAT_0239424c)) && (fVar31 <= param_1)) && (0.0 < fVar31)))) {
                *(uint *)(*(longlong *)(local_40 + 0x10) + uVar22 * 4) =
                     (uint)fVar31 & _DAT_02390140;
              }
              FUN_00d50b20();
              uVar22 = uVar22 + 1;
            } while (uVar4 != uVar22);
          }
          else {
            uVar22 = 0;
            do {
              lVar19 = *(longlong *)(*(longlong *)(local_40 + 0x10) + uVar22 * 8);
              if (lVar19 != 0) {
                FUN_00d50b00();
              }
              if (((*(longlong *)(lVar19 + 0x78) == 0) &&
                  (fVar31 = *(float *)(lVar19 + 0x50),
                  *(longlong *)(lVar19 + 0x88) == 0 || fVar31 <= DAT_0239424c)) &&
                 ((fVar31 <= param_1 &&
                  ((fVar31 < DAT_0239424c && (param_2 <= (float)((uint)fVar31 & _DAT_02390140)))))))
              {
                *(uint *)(*(longlong *)(local_40 + 0x10) + uVar22 * 4) =
                     (uint)fVar31 & _DAT_02390140;
              }
              FUN_00d50b20();
              uVar22 = uVar22 + 1;
            } while (uVar4 != uVar22);
          }
        }
        iVar26 = 0;
        do {
          lVar19 = (longlong)iVar26;
          lVar29 = (longlong)*(int *)(puVar15[2] + 4 + lVar19 * 8);
          if (lVar29 < 1) {
LAB_0120ab10:
            iVar26 = iVar26 + 1;
          }
          else {
            uVar20 = (ulonglong)*(int *)(puVar15[2] + lVar19 * 8);
            lVar29 = lVar29 + uVar20;
            lVar27 = uVar20 + 2;
            uVar23 = 0xffffffff;
            fVar31 = 0.0;
            uVar22 = uVar20;
            do {
              fVar3 = *(float *)(*(longlong *)(local_40 + 0x10) + uVar22 * 4);
              if (fVar31 < fVar3) {
                uVar25 = (uint)(uVar22 - uVar20);
                if ((longlong)(lVar29 - uVar22) < (longlong)(uVar22 - uVar20)) {
                  uVar25 = (int)lVar29 - (int)uVar22;
                }
                if ((int)uVar25 < unaff_ESI) {
                  if (iVar11 <= (int)uVar25) {
                    fVar32 = 0.0;
                    fVar33 = 0.0;
                    if (1 < (int)uVar25) {
                      lVar7 = *(longlong *)(local_40 + 0x10);
                      if (uVar25 == 2) {
                        fVar33 = 0.0;
                        lVar24 = 1;
                        fVar32 = 0.0;
                      }
                      else {
                        plVar17 = (longlong *)(lVar7 + lVar27 * 8);
                        lVar1 = lVar7 + uVar22 * 8;
                        fVar33 = 0.0;
                        lVar24 = -1;
                        fVar32 = 0.0;
                        do {
                          param_3 = *(longlong *)(lVar1 + lVar24 * 8);
                          fVar32 = fVar32 + *(float *)(param_3 + 0x40) +
                                   *(float *)(*(longlong *)(lVar1 + -8 + lVar24 * 8) + 0x40);
                          fVar33 = fVar33 + *(float *)(plVar17[-1] + 0x40) +
                                   *(float *)(*plVar17 + 0x40);
                          plVar17 = plVar17 + 2;
                          lVar2 = ((ulonglong)uVar25 - 1 & 0xfffffffffffffffe) + lVar24;
                          lVar24 = lVar24 + -2;
                        } while (lVar2 != 1);
                        lVar24 = -lVar24;
                        if (((ulonglong)uVar25 - 1 & 1) == 0) goto LAB_0120acb7;
                      }
                      fVar33 = fVar33 + *(float *)(*(longlong *)(lVar7 + (lVar24 + uVar22) * 8) +
                                                  0x40);
                      fVar32 = fVar32 + *(float *)(*(longlong *)(lVar7 + (uVar22 - lVar24) * 8) +
                                                  0x40);
                    }
LAB_0120acb7:
                    if (DAT_02391094 <
                        (float)((uint)(fVar32 - fVar33) & _DAT_02390140) / (float)(int)(uVar25 - 1))
                    goto LAB_0120ab90;
                  }
                }
                else {
LAB_0120ab90:
                  uVar23 = uVar22 & 0xffffffff;
                  fVar31 = fVar3;
                }
              }
              uVar22 = uVar22 + 1;
              lVar27 = lVar27 + 1;
            } while ((longlong)uVar22 < lVar29);
            if ((int)uVar23 == -1) goto LAB_0120ab10;
            pvVar21 = (void *)((longlong)&MACH_HEADER.magic + 1);
            FUN_015fa960(1,3 - (uint)(iVar12 == 0));
            uVar16 = FUN_00e7b4e0();
            uVar18 = FUN_00e7b4e0();
            *(undefined8 *)(puVar15[2] + lVar19 * 8) = uVar16;
            iVar5 = *(int *)(puVar15 + 3);
            FUN_00c8e340(extraout_XMM0_Da_00,1);
            iVar13 = iVar26 * 8 + 8;
            lVar19 = puVar15[2];
            _memmove(pvVar21,(void *)(longlong)(iVar5 - iVar13),(size_t)param_3);
            *(undefined8 *)(lVar19 + iVar13) = uVar18;
            bVar10 = true;
          }
          iVar5 = *(int *)(puVar15 + 3);
          iVar13 = iVar5 + 7;
          if (-1 < iVar5) {
            iVar13 = iVar5;
          }
        } while (iVar26 < iVar13 >> 3);
        iVar12 = iVar12 + 1;
      } while (iVar12 != (in_EDX & 0xff) + 1);
      if (bVar10) {
        lVar19 = *unaff_RDI;
        uVar30 = FUN_015fab90();
        if (local_98 == '\0') {
          if (local_a0 != 0) {
            uVar30 = FUN_00d50b00();
          }
        }
        else {
          local_98 = '\0';
        }
        local_40 = local_a0;
        FUN_00d214d0(uVar30,*(undefined4 *)(lVar19 + 0xc));
        if (local_a0 != 0) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d21140();
        local_40 = lVar6;
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      lVar28 = lVar28 + 1;
    } while (lVar28 < *(int *)((longlong)puVar14 + 0xc));
  }
  FUN_00d50b20();
  return;
}


