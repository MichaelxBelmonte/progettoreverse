// Function: FUN_018728b0
// Address: 018728b0
// Size: 2827 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01872ef8) */
/* WARNING: Removing unreachable block (ram,0x01872f04) */
/* WARNING: Removing unreachable block (ram,0x018731e8) */
/* WARNING: Removing unreachable block (ram,0x018731f4) */
/* WARNING: Removing unreachable block (ram,0x0187326a) */
/* WARNING: Removing unreachable block (ram,0x01873277) */
/* WARNING: Removing unreachable block (ram,0x01872fcb) */
/* WARNING: Removing unreachable block (ram,0x01872fd8) */
/* WARNING: Removing unreachable block (ram,0x01873202) */
/* WARNING: Removing unreachable block (ram,0x0187320e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018728b0(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  pthread_key_t pVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  undefined8 local_180;
  undefined1 local_178;
  longlong local_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined *local_148;
  code *local_140;
  undefined8 local_138;
  ulonglong local_130;
  char local_128;
  longlong local_120;
  longlong local_118;
  int iStack_cc;
  int iStack_9c;
  int iStack_64;
  uint local_60;
  uint local_50;
  char local_38;
  ulonglong uVar14;
  
  lVar10 = *unaff_RDI;
  if (0 < *(int *)(lVar10 + 0xc)) {
    local_140 = DAT_025683d8;
    local_50 = 0;
    local_148 = &DAT_025683c0;
    local_150 = param_1;
    do {
      lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (longlong)(int)local_50 * 8);
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      if ((*(int *)(*(longlong *)(lVar10 + 0x20) + 0xc) != 0) &&
         (lVar21 = *(longlong *)(**(longlong **)(*(longlong *)(lVar10 + 0x20) + 0x10) + 0x10),
         lVar21 != 0)) {
        local_118 = (longlong)(int)local_50;
        FUN_00d50b00();
        uVar12 = *(undefined8 *)(lVar10 + 0xc);
        FUN_00e7b820();
        uVar14 = *(ulonglong *)(lVar10 + 0x14);
        FUN_00e7b820();
        iVar6 = (int)(param_3 >> 0x20);
        iStack_64 = (int)((ulonglong)uVar12 >> 0x20);
        uVar18 = uVar14;
        if (param_3 >> 0x20 == 0) {
LAB_01872a30:
          pVar15 = (pthread_key_t)uVar18;
          iVar6 = (int)(param_4 >> 0x20);
          if ((param_4 >> 0x20 == 0) ||
             ((((iStack_64 == 0 || (iVar6 == 0)) || (cVar5 = FUN_00e7c000(), cVar5 == '\0')) &&
              (((iStack_9c = (int)(uVar14 >> 0x20), iStack_9c == 0 || (iVar6 == 0)) ||
               (cVar5 = FUN_00e7c000(), cVar5 == '\0')))))) {
            FUN_00e7b970();
            local_138 = uVar14;
            pvVar11 = _pthread_getspecific(pVar15);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            pVar15 = 0;
            uVar12 = FUN_016c4630(0,1);
            pvVar11 = _pthread_getspecific(pVar15);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016c47d0(0,uVar12);
            FUN_0123ffa0();
            uVar18 = FUN_00e7bcc0();
            if ((local_38 != '\0') && (uVar14 != 0)) {
              FUN_00d50b20();
            }
            FUN_00e7c3c0();
            local_130 = uVar18;
            local_60 = local_50;
            if (((local_138._4_4_ == 0) || (uVar18 >> 0x20 == 0)) ||
               (cVar5 = FUN_00e7c020(), cVar5 == '\0')) {
              uVar7 = FUN_00e7cea0();
              uVar8 = FUN_00e7cea0();
              local_180 = *unaff_RSI;
              local_178 = 0;
              FUN_0185df90(1,uVar8,&local_180);
              if ((local_38 == '\0') && (uVar18 != 0)) {
                FUN_00d50b00();
              }
              local_168 = 0;
              local_160 = *unaff_RSI;
              local_158 = 0;
              local_170 = lVar21;
              FUN_01878fb0(uVar8,uVar7,&local_160);
              uVar14 = local_130;
              if (local_128 == '\0') {
                if (local_130 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_128 = '\0';
              }
              FUN_018da560();
              if (local_38 == '\0') {
                if (uVar18 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              if (uVar14 != 0) {
                FUN_00d50b20();
              }
              puVar13 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar13 = local_148;
              (*local_140)();
              FUN_00c92170();
              uVar7 = FUN_00c92160();
              if (3 < *(int *)(uVar18 + 0x18)) {
                lVar21 = 0;
                do {
                  iVar6 = *(int *)(*(longlong *)(uVar18 + 0x10) + lVar21 * 4);
                  lVar2 = *(longlong *)(uVar18 + 0x10);
                  iVar16 = *(int *)(puVar13 + 3);
                  FUN_00c8e340(uVar7,1);
                  uVar7 = *(undefined4 *)(lVar2 + (longlong)iVar6 * 4);
                  *(undefined4 *)(puVar13[2] + (longlong)iVar16) = uVar7;
                  lVar21 = lVar21 + 1;
                  iVar6 = *(int *)(uVar18 + 0x18);
                  iVar16 = iVar6 + 3;
                  if (-1 < iVar6) {
                    iVar16 = iVar6;
                  }
                } while (lVar21 < iVar16 >> 2);
              }
              uVar17 = local_50 + 1;
              local_120 = (longlong)(int)uVar17;
              uVar9 = local_50 - 1;
              uVar14 = (ulonglong)uVar9;
              bVar24 = false;
              bVar4 = true;
              do {
                bVar3 = bVar4;
                if (bVar3) {
                  if (((0 < (int)local_50) &&
                      (lVar21 = *(longlong *)
                                 (*(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + uVar14 * 8) +
                                 0x20), *(int *)(lVar21 + 0xc) != 0)) &&
                     (*(longlong *)(**(longlong **)(lVar21 + 0x10) + 0x10) != 0)) {
                    FUN_00d50b00();
                    goto LAB_01872ebf;
                  }
                }
                else {
                  if (((*(int *)(*unaff_RDI + 0xc) + -1 <= (int)local_50) ||
                      (lVar21 = *(longlong *)
                                 (*(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + local_120 * 8) +
                                 0x20), *(int *)(lVar21 + 0xc) == 0)) ||
                     (*(longlong *)(**(longlong **)(lVar21 + 0x10) + 0x10) == 0)) break;
                  FUN_00d50b00();
LAB_01872ebf:
                  FUN_018da560();
                  if (local_38 == '\0') {
                    if (uVar18 != 0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  uVar1 = *(uint *)(uVar18 + 0x18);
                  uVar22 = uVar1;
                  if ((int)uVar1 < 0) {
                    uVar22 = uVar1 + 3;
                  }
                  uVar22 = (int)uVar22 >> 2;
                  if ((int)uVar1 < 4) {
                    fVar26 = 0.0;
                    uVar23 = 0;
                  }
                  else {
                    iVar6 = *(int *)(uVar18 + 0x18);
                    iVar16 = iVar6 + 3;
                    if (-1 < iVar6) {
                      iVar16 = iVar6;
                    }
                    if (iVar6 < 4) {
                      lVar21 = puVar13[2];
                      if ((ulonglong)uVar22 - 1 < 7) {
                        fVar26 = 0.0;
                        uVar19 = 0;
                      }
                      else {
                        fVar26 = 0.0;
                        uVar19 = 0;
                        do {
                          fVar26 = fVar26 + *(float *)(lVar21 + uVar19 * 4) +
                                   *(float *)(lVar21 + 4 + uVar19 * 4) +
                                   *(float *)(lVar21 + 8 + uVar19 * 4) +
                                   *(float *)(lVar21 + 0xc + uVar19 * 4) +
                                   *(float *)(lVar21 + 0x10 + uVar19 * 4) +
                                   *(float *)(lVar21 + 0x14 + uVar19 * 4) +
                                   *(float *)(lVar21 + 0x18 + uVar19 * 4) +
                                   *(float *)(lVar21 + 0x1c + uVar19 * 4);
                          uVar19 = uVar19 + 8;
                        } while ((uVar22 & 0xfffffff8) != uVar19);
                      }
                      uVar23 = uVar22;
                      if ((ulonglong)(uVar22 & 7) != 0) {
                        uVar20 = 0;
                        do {
                          fVar26 = fVar26 + *(float *)(lVar21 + uVar19 * 4 + uVar20 * 4);
                          uVar20 = uVar20 + 1;
                        } while ((uVar22 & 7) != uVar20);
                      }
                    }
                    else {
                      uVar19 = 0;
                      fVar26 = 0.0;
                      uVar23 = 0;
                      do {
                        lVar21 = 0;
                        do {
                          if (*(int *)(*(longlong *)(uVar18 + 0x10) + lVar21 * 4) ==
                              *(int *)(*(longlong *)(uVar18 + 0x10) + uVar19 * 4))
                          goto LAB_01872f60;
                          lVar21 = lVar21 + 1;
                        } while (iVar16 >> 2 != (int)lVar21);
                        uVar23 = uVar23 + 1;
                        fVar26 = fVar26 + *(float *)(puVar13[2] + uVar19 * 4);
LAB_01872f60:
                        uVar19 = uVar19 + 1;
                      } while (uVar19 != uVar22);
                    }
                  }
                  if (6 < uVar1 + 3) {
                    fVar25 = (float)_powf(DAT_02390124 / (float)(int)uVar22,DAT_02390128);
                    fVar26 = fVar26 * fVar25;
                  }
                  if ((uVar23 == 0) || ((uVar23 == 1 && (fVar26 < _DAT_023b294c)))) {
                    bVar24 = true;
                  }
                  if (uVar18 != 0) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                  if (bVar24) break;
                }
                bVar4 = false;
              } while (bVar3);
              if (((!bVar24) && (0 < (int)local_50)) &&
                 ((int)local_50 < *(int *)(*unaff_RDI + 0xc) + -1)) {
                lVar21 = *(longlong *)(*unaff_RDI + 0x10);
                lVar2 = *(longlong *)(*(longlong *)(lVar21 + uVar14 * 8) + 0x20);
                if ((*(int *)(lVar2 + 0xc) != 0) &&
                   (*(int *)(*(longlong *)(*(longlong *)(lVar21 + (ulonglong)uVar17 * 8) + 0x20) +
                            0xc) != 0)) {
                  lVar2 = *(longlong *)(**(longlong **)(lVar2 + 0x10) + 0x10);
                  if (lVar2 != 0) {
                    FUN_00d50b00();
                    lVar21 = *(longlong *)(*unaff_RDI + 0x10);
                  }
                  lVar21 = *(longlong *)
                            (**(longlong **)
                               (*(longlong *)(*(longlong *)(lVar21 + (ulonglong)uVar17 * 8) + 0x20)
                               + 0x10) + 0x10);
                  if (lVar21 != 0) {
                    FUN_00d50b00();
                  }
                  cVar5 = FUN_018da750();
                  bVar24 = cVar5 != '\0';
                  if (lVar21 != 0) {
                    FUN_00d50b20();
                  }
                  if (lVar2 != 0) {
                    FUN_00d50b20();
                  }
                }
              }
              if (bVar24) {
                if (((iStack_64 == 0) ||
                    (iStack_cc = (int)((ulonglong)uVar12 >> 0x20), iStack_cc == 0)) ||
                   (cVar5 = FUN_00e7c000(), cVar5 == '\0')) {
                  if (0 < (int)local_50) {
                    *(undefined8 *)
                     (*(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + uVar14 * 8) + 0x14) =
                         *(undefined8 *)
                          (*(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + local_118 * 8) + 0x14);
                    FUN_00d23620();
                    local_60 = uVar9;
                  }
                }
                else if ((int)local_50 < *(int *)(*unaff_RDI + 0xc) + -1) {
                  lVar21 = *(longlong *)(*unaff_RDI + 0x10);
                  *(undefined8 *)(*(longlong *)(lVar21 + local_120 * 8) + 0xc) =
                       *(undefined8 *)(*(longlong *)(lVar21 + local_118 * 8) + 0xc);
                  FUN_00d23620();
                  local_60 = uVar9;
                }
              }
              if (puVar13 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
              if (uVar18 != 0) {
                FUN_00d50b20();
                FUN_00d50b20();
              }
            }
            local_50 = local_60;
          }
        }
        else {
          uVar18 = uVar14 >> 0x20;
          if ((iStack_64 == 0) || (iVar6 == 0)) {
LAB_01872a0b:
            if ((((int)uVar18 == 0) || (iVar6 == 0)) || (cVar5 = FUN_00e7c000(), cVar5 == '\0'))
            goto LAB_01872a30;
          }
          else {
            cVar5 = FUN_00e7c000();
            if (cVar5 == '\0') {
              uVar18 = uVar14 >> 0x20;
              goto LAB_01872a0b;
            }
          }
        }
        FUN_00d50b20();
      }
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      local_50 = local_50 + 1;
      lVar10 = *unaff_RDI;
    } while ((int)local_50 < *(int *)(lVar10 + 0xc));
  }
  return;
}


