// Function: FUN_014af180
// Address: 014af180
// Size: 2039 bytes
// Class: MUElementAnalyzer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014af180(float param_1,double param_2,double param_3)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int in_ECX;
  longlong lVar10;
  longlong *in_RDX;
  longlong lVar11;
  longlong lVar12;
  longlong *unaff_RSI;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  longlong local_78;
  longlong local_68;
  double local_60;
  longlong local_58;
  double local_48;
  longlong local_40;
  
  lVar12 = *unaff_RSI;
  if (0 < *(int *)(lVar12 + 0xc)) {
    dVar15 = DAT_0238fee8 / param_2;
    lVar11 = 0;
    lVar13 = 0;
    local_68 = 0;
    bVar3 = false;
    local_78 = 0;
    bVar4 = false;
    local_58 = 0;
    bVar5 = false;
    lVar14 = 0;
    bVar8 = false;
    local_40 = 0;
    bVar7 = false;
    do {
      lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + lVar11 * 8);
      if (local_68 == lVar12) {
        if ((!bVar3) && (local_68 != 0)) {
          bVar3 = true;
          FUN_00d50b00();
        }
LAB_014af300:
        iVar2 = *(int *)(local_68 + 0x3c);
      }
      else {
        if (lVar12 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (local_68 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
          local_68 = lVar12;
          goto LAB_014af300;
        }
        bVar3 = true;
        iVar2 = *(int *)(lVar12 + 0x3c);
        local_68 = lVar12;
      }
      if (iVar2 == in_ECX) {
        bVar6 = bVar5;
        if (lVar11 < (longlong)*(int *)(*unaff_RSI + 0xc) + -1) {
          lVar12 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + 8 + lVar11 * 8);
          if (local_78 == lVar12) {
            lVar10 = local_78;
            bVar9 = bVar4;
            if ((!bVar4) && (lVar12 != 0)) {
              FUN_00d50b00();
              bVar9 = true;
            }
          }
          else {
            if (lVar12 != 0) {
              FUN_00d50b00();
            }
LAB_014af38d:
            bVar9 = true;
            lVar10 = lVar12;
            if ((bVar4) && (local_78 != 0)) {
              FUN_00d50b20();
            }
          }
          bVar4 = bVar9;
          local_78 = lVar10;
          if (lVar11 == 0) goto LAB_014af3c1;
LAB_014af43c:
          lVar12 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + -8 + lVar11 * 8);
          if (local_58 != lVar12) {
            if (lVar12 != 0) {
              FUN_00d50b00();
              goto LAB_014af462;
            }
            lVar12 = 0;
            bVar6 = true;
            if (!bVar5) goto LAB_014af4d0;
            goto LAB_014af46c;
          }
          lVar12 = local_58;
          if ((!bVar5) && (local_58 != 0)) {
            FUN_00d50b00();
            bVar6 = true;
          }
        }
        else {
          lVar12 = 0;
          if (local_78 != 0) goto LAB_014af38d;
          local_78 = 0;
          if (lVar11 != 0) goto LAB_014af43c;
LAB_014af3c1:
          lVar12 = 0;
          if (local_58 == 0) {
            lVar12 = 0;
          }
          else {
LAB_014af462:
            bVar6 = true;
            if (bVar5) {
LAB_014af46c:
              bVar6 = true;
              if (local_58 != 0) {
                FUN_00d50b20();
              }
            }
          }
        }
LAB_014af4d0:
        dVar1 = *(double *)(local_68 + 0x10);
        local_60 = 0.0;
        if (0.0 <= dVar1 - param_2) {
          local_60 = dVar1 - param_2;
        }
        if ((lVar12 != 0) &&
           (dVar16 = (*(double *)(lVar12 + 0x10) + dVar1) * DAT_023942d0, local_60 < dVar16)) {
          local_60 = dVar16;
        }
        dVar16 = (*(double *)(local_68 + 0x18) + dVar1) * DAT_023942d0;
        if (local_40 != 0) {
          if (bVar8) {
            bVar8 = false;
            FUN_00d50b20();
          }
          else {
            bVar8 = false;
          }
        }
        lVar10 = *in_RDX;
        local_58 = lVar12;
        bVar5 = bVar6;
        if ((int)lVar13 < *(int *)(lVar10 + 0xc)) {
          dVar17 = param_3;
          if (dVar1 + param_2 <= param_3) {
            dVar17 = dVar1 + param_2;
          }
          if (dVar17 <= dVar16) {
            dVar16 = dVar17;
          }
          lVar13 = (longlong)(int)lVar13;
          if (in_ECX == 1) {
            local_48 = DAT_0240e3f8;
            local_40 = 0;
            bVar6 = bVar8;
            do {
              lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar13 * 8);
              if (lVar14 == lVar12) {
                if ((!bVar7) && (lVar14 != 0)) {
                  bVar7 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar12 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar7) && (lVar14 != 0)) {
                  FUN_00d50b20();
                  bVar7 = true;
                  lVar14 = lVar12;
                }
                else {
                  bVar7 = true;
                  lVar14 = lVar12;
                }
              }
              dVar17 = *(double *)(lVar14 + 0x10);
              bVar8 = bVar6;
              if (dVar16 < dVar17) break;
              lVar12 = local_40;
              if (((local_60 < dVar17) && (param_1 < *(float *)(lVar14 + 0x20))) &&
                 (dVar17 = (DAT_0238fee8 -
                           (double)((ulonglong)(dVar1 - dVar17) & _DAT_023908f0) * dVar15) *
                           (double)*(float *)(lVar14 + 0x30) * (double)*(float *)(lVar14 + 0x20),
                 local_48 < dVar17)) {
                local_48 = dVar17;
                if (local_40 == lVar14) {
                  if ((bVar7) && (!bVar6)) {
                    FUN_00d50b00();
                    bVar8 = true;
                  }
                }
                else {
                  if (bVar7) {
                    FUN_00d50b00();
                  }
                  lVar12 = lVar14;
                  bVar8 = bVar7;
                  if ((bVar6) && (local_40 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              local_40 = lVar12;
              lVar13 = lVar13 + 1;
              lVar10 = *in_RDX;
              bVar6 = bVar8;
            } while (lVar13 < *(int *)(lVar10 + 0xc));
          }
          else {
            local_48 = DAT_0240e3f8;
            local_40 = 0;
            do {
              lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar13 * 8);
              if (lVar14 == lVar12) {
                if ((!bVar7) && (lVar14 != 0)) {
                  bVar7 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar12 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar7) && (lVar14 != 0)) {
                  FUN_00d50b20();
                  bVar7 = true;
                  lVar14 = lVar12;
                }
                else {
                  bVar7 = true;
                  lVar14 = lVar12;
                }
              }
              dVar17 = *(double *)(lVar14 + 0x10);
              if (dVar16 < dVar17) break;
              lVar12 = local_40;
              bVar6 = bVar8;
              if (((local_60 < dVar17) && (param_1 < *(float *)(lVar14 + 0x20))) &&
                 (dVar17 = (DAT_0238fee8 -
                           (double)((ulonglong)(dVar1 - dVar17) & _DAT_023908f0) * dVar15) *
                           (double)*(float *)(lVar14 + 0x2c) * (double)*(float *)(lVar14 + 0x20),
                 local_48 < dVar17)) {
                local_48 = dVar17;
                if (local_40 == lVar14) {
                  if ((bVar7) && (!bVar8)) {
                    FUN_00d50b00();
                    bVar6 = true;
                  }
                }
                else {
                  if (bVar7) {
                    FUN_00d50b00();
                  }
                  lVar12 = lVar14;
                  bVar6 = bVar7;
                  if ((bVar8) && (local_40 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              bVar8 = bVar6;
              local_40 = lVar12;
              lVar13 = lVar13 + 1;
              lVar10 = *in_RDX;
            } while (lVar13 < *(int *)(lVar10 + 0xc));
          }
          lVar12 = *(longlong *)(local_68 + 0x40);
          if (lVar12 != local_40) {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            *(longlong *)(local_68 + 0x40) = local_40;
            if (lVar12 != 0) goto LAB_014af257;
          }
        }
        else if (*(longlong *)(local_68 + 0x40) == 0) {
          local_40 = 0;
        }
        else {
          *(undefined8 *)(local_68 + 0x40) = 0;
          local_40 = 0;
LAB_014af257:
          FUN_00d50b20();
        }
      }
      lVar11 = lVar11 + 1;
      lVar12 = *unaff_RSI;
    } while (lVar11 < *(int *)(lVar12 + 0xc));
    if ((bVar8) && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar7) && (lVar14 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar5) && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  return;
}


