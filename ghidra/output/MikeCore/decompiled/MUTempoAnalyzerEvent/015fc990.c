// Function: FUN_015fc990
// Address: 015fc990
// Size: 2176 bytes
// Class: MUTempoAnalyzerEvent


/* WARNING: Removing unreachable block (ram,0x015fd055) */
/* WARNING: Removing unreachable block (ram,0x015fd062) */
/* WARNING: Removing unreachable block (ram,0x015fd16e) */
/* WARNING: Removing unreachable block (ram,0x015fd17b) */
/* WARNING: Removing unreachable block (ram,0x015fcf1e) */
/* WARNING: Removing unreachable block (ram,0x015fcf2b) */
/* WARNING: Removing unreachable block (ram,0x015fcdee) */
/* WARNING: Removing unreachable block (ram,0x015fcdfb) */
/* WARNING: Removing unreachable block (ram,0x015fca7b) */
/* WARNING: Removing unreachable block (ram,0x015fca84) */
/* WARNING: Removing unreachable block (ram,0x015fc9f9) */
/* WARNING: Removing unreachable block (ram,0x015fca02) */
/* WARNING: Removing unreachable block (ram,0x015fcb44) */
/* WARNING: Removing unreachable block (ram,0x015fcb4d) */

void FUN_015fc990(float param_1,int param_2,size_t param_3,size_t param_4)

{
  float *pfVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  int in_ECX;
  void *pvVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar13;
  size_t sVar14;
  int iVar15;
  uint uVar16;
  longlong *plVar17;
  size_t sVar18;
  longlong lVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  longlong local_60;
  float local_54;
  longlong local_48;
  char local_40;
  int local_38;
  
  *(int *)(unaff_RDI + 0x28) = param_2;
  *(int *)(unaff_RDI + 0x2c) = in_ECX;
  sVar14 = in_ECX - 2U;
  if ((int)param_3 <= (int)(in_ECX - 2U)) {
    sVar14 = param_3;
  }
  *(size_t *)(unaff_RDI + 0x30) = sVar14;
  pvVar10 = (void *)(ulonglong)(sVar14 * param_2);
  sVar14 = param_3;
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar8 = *(longlong *)(unaff_RDI + 0x18);
  if (lVar8 == local_48) {
    FUN_00d50b20();
  }
  else {
    *(longlong *)(unaff_RDI + 0x18) = local_48;
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_48 + 0x18)) {
    _memset(pvVar10,((*(uint *)(local_48 + 0x18) >> 2) - 1) * 4 + 4,sVar14);
  }
  lVar8 = *(longlong *)(unaff_RDI + 0x20);
  if (lVar8 == local_48) {
    FUN_00d50b20();
  }
  else {
    *(longlong *)(unaff_RDI + 0x20) = local_48;
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  *(undefined4 *)(unaff_RDI + 0x34) = 0xffffffff;
  *(undefined8 *)(unaff_RDI + 0x38) = 0;
  sVar18 = param_4;
  if ((int)param_3 < (int)param_4) {
    sVar18 = param_3;
  }
  if ((int)param_4 < (int)param_3) {
    iVar15 = param_3 - sVar18;
    FUN_00c8e690();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    local_60 = local_48;
    ___bzero();
    lVar8 = FUN_00e84280();
    iVar5 = FUN_00e84a40();
    if (-1 < iVar15) {
      iVar12 = iVar5 / 2;
      fVar20 = (float)iVar12 / (float)iVar15;
      uVar16 = iVar15 + 1;
      lVar2 = *(longlong *)(local_48 + 0x10);
      if (uVar16 == 1) {
        uVar11 = 0;
      }
      else {
        sVar14 = uVar16 & 0xfffffffe;
        lVar13 = 0;
        do {
          iVar15 = (int)((float)(int)lVar13 * fVar20) + iVar12;
          uVar22 = 0;
          uVar21 = 0;
          if (iVar15 < iVar5) {
            uVar21 = *(undefined4 *)(lVar8 + (longlong)iVar15 * 4);
          }
          *(undefined4 *)(lVar2 + lVar13 * 4) = uVar21;
          iVar15 = (int)((float)((int)lVar13 + 1) * fVar20) + iVar12;
          if (iVar15 < iVar5) {
            uVar22 = *(undefined4 *)(lVar8 + (longlong)iVar15 * 4);
          }
          *(undefined4 *)(lVar2 + 4 + lVar13 * 4) = uVar22;
          uVar11 = lVar13 + 2;
          lVar13 = lVar13 + 2;
        } while (sVar14 != uVar11);
      }
      if ((uVar16 & 1) != 0) {
        iVar12 = iVar12 + (int)(fVar20 * (float)(int)uVar11);
        uVar21 = 0;
        if (iVar12 < iVar5) {
          uVar21 = *(undefined4 *)(lVar8 + (longlong)iVar12 * 4);
        }
        *(undefined4 *)(lVar2 + uVar11 * 4) = uVar21;
      }
    }
  }
  else {
    local_60 = 0;
  }
  iVar15 = *(int *)(unaff_RDI + 0x28);
  uVar16 = *(int *)(unaff_RDI + 0x30) * iVar15;
  if (0 < (int)uVar16) {
    _memset((void *)(ulonglong)uVar16,uVar16 * 4,sVar14);
    iVar15 = *(int *)(unaff_RDI + 0x28);
  }
  if (0 < iVar15) {
    lVar8 = (longlong)(int)sVar18;
    iVar15 = *(int *)(unaff_RDI + 0x30);
    iVar12 = 0;
    local_38 = 0;
    plVar9 = (longlong *)0x0;
    bVar3 = false;
    iVar5 = iVar15;
    do {
      if (1 < iVar5) {
        lVar2 = *(longlong *)(*unaff_RSI + 0x10);
        iVar7 = *(int *)(unaff_RDI + 0x2c);
        lVar13 = *(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10);
        if (local_60 == 0) {
          if (0.0 < param_1) {
            lVar2 = lVar2 + (longlong)(iVar7 * iVar12) * 4;
            iVar7 = iVar5 * iVar12;
            lVar19 = 1;
            plVar17 = plVar9;
            iVar5 = iVar15;
            do {
              fVar20 = *(float *)(lVar2 + lVar19 * 4);
              pfVar1 = (float *)(lVar2 + -4 + lVar19 * 4);
              plVar9 = plVar17;
              if (((*pfVar1 <= fVar20 && fVar20 != *pfVar1) &&
                  (*(float *)(lVar2 + 4 + lVar19 * 4) <= fVar20)) && (param_1 < fVar20)) {
                plVar9 = (longlong *)FUN_00e8fc40();
                FUN_011db140();
                (**(code **)(*plVar9 + 0x18))();
                *(int *)((longlong)plVar9 + 0xc) = iVar12;
                *(int *)(plVar9 + 2) = (int)lVar19;
                *(float *)((longlong)plVar9 + 0x1c) = fVar20;
                if (plVar17 == plVar9) {
                  if (bVar3) {
                    FUN_00d50b20();
                    plVar9 = plVar17;
                    bVar4 = bVar3;
                  }
                  else {
                    plVar9 = plVar17;
                    bVar4 = true;
                  }
                }
                else {
                  bVar4 = true;
                  if ((bVar3) && (plVar17 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                bVar3 = bVar4;
                *(int *)(lVar13 + (longlong)iVar7 * 4 + lVar19 * 4) = local_38;
                FUN_00d21140();
                local_38 = local_38 + 1;
                iVar5 = *(int *)(unaff_RDI + 0x30);
              }
              lVar19 = lVar19 + 1;
              plVar17 = plVar9;
              iVar15 = iVar5;
            } while (lVar19 < iVar5);
          }
          else {
            iVar6 = iVar5 * iVar12;
            lVar2 = lVar2 + (longlong)(iVar7 * iVar12) * 4;
            lVar19 = 1;
            plVar17 = plVar9;
            iVar5 = iVar15;
            do {
              fVar20 = *(float *)(lVar2 + lVar19 * 4);
              pfVar1 = (float *)(lVar2 + -4 + lVar19 * 4);
              plVar9 = plVar17;
              if ((*pfVar1 <= fVar20 && fVar20 != *pfVar1) &&
                 (*(float *)(lVar2 + 4 + lVar19 * 4) <= fVar20)) {
                plVar9 = (longlong *)FUN_00e8fc40();
                FUN_011db140();
                (**(code **)(*plVar9 + 0x18))();
                *(int *)((longlong)plVar9 + 0xc) = iVar12;
                *(int *)(plVar9 + 2) = (int)lVar19;
                *(float *)((longlong)plVar9 + 0x1c) = fVar20;
                if (plVar17 == plVar9) {
                  if (bVar3) {
                    FUN_00d50b20();
                    plVar9 = plVar17;
                    bVar4 = bVar3;
                  }
                  else {
                    plVar9 = plVar17;
                    bVar4 = true;
                  }
                }
                else {
                  bVar4 = true;
                  if ((bVar3) && (plVar17 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                bVar3 = bVar4;
                *(int *)(lVar13 + (longlong)iVar6 * 4 + lVar19 * 4) = local_38;
                FUN_00d21140();
                local_38 = local_38 + 1;
                iVar5 = *(int *)(unaff_RDI + 0x30);
              }
              lVar19 = lVar19 + 1;
              plVar17 = plVar9;
              iVar15 = iVar5;
            } while (lVar19 < iVar5);
          }
        }
        else if (0.0 < param_1) {
          lVar2 = lVar2 + (longlong)(iVar7 * iVar12) * 4;
          iVar7 = iVar5 * iVar12;
          lVar19 = 1;
          plVar17 = plVar9;
          iVar5 = iVar15;
          do {
            fVar20 = *(float *)(lVar2 + lVar19 * 4);
            pfVar1 = (float *)(lVar2 + -4 + lVar19 * 4);
            plVar9 = plVar17;
            if ((*pfVar1 <= fVar20 && fVar20 != *pfVar1) &&
               (*(float *)(lVar2 + 4 + lVar19 * 4) <= fVar20)) {
              if (lVar8 < lVar19) {
                fVar20 = fVar20 * *(float *)(*(longlong *)(local_60 + 0x10) + lVar8 * -4 +
                                            lVar19 * 4);
              }
              if (param_1 < fVar20) {
                plVar9 = (longlong *)FUN_00e8fc40();
                FUN_011db140();
                (**(code **)(*plVar9 + 0x18))();
                *(int *)((longlong)plVar9 + 0xc) = iVar12;
                *(int *)(plVar9 + 2) = (int)lVar19;
                *(float *)((longlong)plVar9 + 0x1c) = fVar20;
                if (plVar17 == plVar9) {
                  if (bVar3) {
                    FUN_00d50b20();
                    plVar9 = plVar17;
                    bVar4 = bVar3;
                  }
                  else {
                    plVar9 = plVar17;
                    bVar4 = true;
                  }
                }
                else {
                  bVar4 = true;
                  if ((bVar3) && (plVar17 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                bVar3 = bVar4;
                *(int *)(lVar13 + (longlong)iVar7 * 4 + lVar19 * 4) = local_38;
                FUN_00d21140();
                local_38 = local_38 + 1;
                iVar5 = *(int *)(unaff_RDI + 0x30);
              }
            }
            lVar19 = lVar19 + 1;
            plVar17 = plVar9;
            iVar15 = iVar5;
          } while (lVar19 < iVar5);
        }
        else {
          iVar6 = iVar5 * iVar12;
          lVar2 = lVar2 + (longlong)(iVar7 * iVar12) * 4;
          lVar19 = 1;
          plVar17 = plVar9;
          iVar5 = iVar15;
          do {
            local_54 = *(float *)(lVar2 + lVar19 * 4);
            pfVar1 = (float *)(lVar2 + -4 + lVar19 * 4);
            plVar9 = plVar17;
            if ((*pfVar1 <= local_54 && local_54 != *pfVar1) &&
               (*(float *)(lVar2 + 4 + lVar19 * 4) <= local_54)) {
              if (lVar8 < lVar19) {
                local_54 = local_54 *
                           *(float *)(*(longlong *)(local_60 + 0x10) + lVar8 * -4 + lVar19 * 4);
              }
              plVar9 = (longlong *)FUN_00e8fc40();
              FUN_011db140();
              (**(code **)(*plVar9 + 0x18))();
              *(int *)((longlong)plVar9 + 0xc) = iVar12;
              *(int *)(plVar9 + 2) = (int)lVar19;
              *(float *)((longlong)plVar9 + 0x1c) = local_54;
              if (plVar17 == plVar9) {
                if (bVar3) {
                  FUN_00d50b20();
                  plVar9 = plVar17;
                  bVar4 = bVar3;
                }
                else {
                  bVar4 = true;
                  plVar9 = plVar17;
                }
              }
              else {
                bVar4 = true;
                if ((bVar3) && (plVar17 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              *(int *)(lVar13 + (longlong)iVar6 * 4 + lVar19 * 4) = local_38;
              FUN_00d21140();
              local_38 = local_38 + 1;
              iVar5 = *(int *)(unaff_RDI + 0x30);
              bVar3 = bVar4;
            }
            lVar19 = lVar19 + 1;
            plVar17 = plVar9;
            iVar15 = iVar5;
          } while (lVar19 < iVar5);
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(unaff_RDI + 0x28));
    if ((bVar3) && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((int)param_4 < (int)param_3 && local_60 != 0) {
    FUN_00d50b20();
  }
  return;
}


