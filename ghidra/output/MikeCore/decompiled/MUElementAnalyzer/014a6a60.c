// Function: FUN_014a6a60
// Address: 014a6a60
// Size: 1982 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x014a6d85) */
/* WARNING: Removing unreachable block (ram,0x014a6d8e) */
/* WARNING: Removing unreachable block (ram,0x014a6ee5) */
/* WARNING: Removing unreachable block (ram,0x014a6eee) */
/* WARNING: Removing unreachable block (ram,0x014a714b) */
/* WARNING: Removing unreachable block (ram,0x014a7154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014a6a60(double param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint in_ECX;
  undefined *puVar8;
  void *pvVar9;
  int iVar10;
  ulonglong uVar11;
  size_t in_R8D;
  bool bVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float in_XMM4_Da;
  undefined4 in_XMM5_Da;
  undefined4 unaff_XMM6_Da;
  float fVar22;
  longlong local_60;
  char local_58;
  longlong local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar8 = &DAT_02572358;
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  lVar6 = FUN_00e83010();
  lVar7 = FUN_00e83010();
  _memcpy(puVar8,(void *)((longlong)(int)in_ECX << 2),in_R8D);
  pvVar9 = (void *)0x0;
  FUN_015c1480(in_XMM5_Da,in_ECX);
  _memcpy(pvVar9,(void *)((longlong)(int)in_ECX << 2),in_R8D);
  FUN_015c1480(unaff_XMM6_Da,in_ECX);
  if (0 < (int)in_ECX) {
    fVar14 = (float)((double)param_2 * param_1);
    uVar11 = 0;
    local_38._0_4_ = DAT_02390d00;
    fVar15 = 0.0;
    fVar19 = DAT_02393944;
    do {
      fVar4 = (float)local_38;
      fVar16 = *(float *)(lVar7 + uVar11 * 4);
      fVar17 = *(float *)(lVar6 + uVar11 * 4);
      fVar22 = fVar16 / fVar17;
      local_38._0_4_ = DAT_02390d00;
      if ((in_XMM4_Da <= fVar17 && in_XMM4_Da <= fVar16) && param_3 <= fVar22) {
        local_38._0_4_ = DAT_02390124;
      }
      fVar20 = fVar22;
      if (fVar19 <= fVar22) {
        fVar20 = fVar19;
      }
      iVar10 = (int)uVar11;
      if ((0.0 <= fVar4) || ((float)local_38 <= 0.0)) {
        fVar21 = fVar22;
        if (fVar22 <= fVar15) {
          fVar21 = fVar15;
        }
        fVar15 = fVar21;
        fVar19 = fVar20;
        if (((in_XMM4_Da > fVar17 || in_XMM4_Da > fVar16) || param_3 > fVar22) && 0.0 < fVar4) {
          iVar1 = *(int *)((longlong)puVar5 + 0xc);
          if (0 < iVar1) {
            lVar13 = *(longlong *)(puVar5[2] + (ulonglong)(iVar1 - 1) * 8);
            fVar16 = (float)*(double *)(lVar13 + 0x10);
            fVar17 = (float)iVar10 - fVar16;
            fVar19 = (float)*(double *)(lVar13 + 0x18);
            if ((fVar17 < fVar14) ||
               ((fVar17 < fVar14 + fVar14 &&
                ((fVar21 < param_4 || (DAT_02390120 < fVar19 / fVar21)))))) {
              FUN_00d23740();
              if (fVar20 <= fVar19) {
                fVar19 = fVar20;
              }
              goto LAB_014a6beb;
            }
            if (((2 < iVar1) &&
                (lVar13 = *(longlong *)(puVar5[2] + (ulonglong)(iVar1 - 2) * 8),
                fVar16 - (float)*(double *)(lVar13 + 0x10) < fVar14 + fVar14)) &&
               ((DAT_02390120 < fVar19 / fVar21 ||
                (DAT_02390120 <
                 fVar19 / (float)((uint)(float)*(double *)(lVar13 + 0x18) ^ _DAT_023945e0))))) {
              FUN_00d23740();
              FUN_00d23740();
            }
          }
          FUN_014328b0(SUB84((double)iVar10,0));
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          FUN_00d21140();
          if (local_60 != 0) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_014a6be0;
        }
      }
      else {
        FUN_014328b0(SUB84((double)iVar10,0));
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        FUN_00d21140();
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
LAB_014a6be0:
        fVar15 = 0.0;
        fVar19 = DAT_02393944;
      }
LAB_014a6beb:
      uVar11 = uVar11 + 1;
    } while (in_ECX != uVar11);
  }
  FUN_00d216c0();
  if (*(int *)((longlong)puVar5 + 0xc) < 1) {
    bVar12 = false;
    local_38 = 0;
    bVar3 = false;
    lVar6 = 0;
  }
  else {
    param_1 = DAT_0238fee8 / param_1;
    lVar7 = 0;
    lVar6 = 0;
    bVar3 = false;
    local_38 = 0;
    bVar12 = false;
    do {
      lVar13 = *(longlong *)(puVar5[2] + lVar7 * 8);
      if (lVar6 == lVar13) {
        if ((!bVar3) && (lVar6 != 0)) {
          bVar3 = true;
          FUN_00d50b00();
        }
LAB_014a7010:
        if (0.0 < *(double *)(lVar6 + 0x18) || *(double *)(lVar6 + 0x18) == 0.0) {
LAB_014a7049:
          dVar18 = (double)(int)(in_ECX - 1);
          bVar2 = bVar12;
          if (lVar7 < (longlong)*(int *)((longlong)puVar5 + 0xc) + -1) {
            lVar13 = *(longlong *)(puVar5[2] + 8 + lVar7 * 8);
            if (local_38 == lVar13) {
              lVar13 = local_38;
              if ((bVar12) || (local_38 == 0)) goto LAB_014a70ba;
              bVar2 = true;
              FUN_00d50b00();
            }
            else {
              if (lVar13 != 0) {
                FUN_00d50b00();
                goto LAB_014a70a1;
              }
              lVar13 = 0;
              bVar2 = true;
              if (!bVar12) goto LAB_014a70ba;
LAB_014a70a9:
              bVar2 = true;
              if (local_38 != 0) {
                FUN_00d50b20();
              }
LAB_014a70ba:
              local_38 = lVar13;
              if (local_38 == 0) {
                local_38 = 0;
                goto LAB_014a70e1;
              }
            }
            dVar18 = *(double *)(local_38 + 0x10);
          }
          else {
            lVar13 = 0;
            if (local_38 != 0) {
LAB_014a70a1:
              bVar2 = true;
              if (bVar12) goto LAB_014a70a9;
              goto LAB_014a70ba;
            }
            local_38 = 0;
          }
LAB_014a70e1:
          FUN_01432380(SUB84(*(double *)(lVar6 + 0x10) * (double)(float)param_1,0),
                       dVar18 * (double)(float)param_1);
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          FUN_00d21140();
          if (local_60 != 0) {
            FUN_00d50b20();
          }
          bVar12 = bVar2;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if (lVar13 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (lVar6 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
          lVar6 = lVar13;
          goto LAB_014a7010;
        }
        bVar3 = true;
        lVar6 = lVar13;
        if (0.0 < *(double *)(lVar13 + 0x18) || *(double *)(lVar13 + 0x18) == 0.0)
        goto LAB_014a7049;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((longlong)puVar5 + 0xc));
  }
  FUN_00e83070();
  FUN_00e83070();
  FUN_00d50b20();
  if ((bVar12) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  return;
}


