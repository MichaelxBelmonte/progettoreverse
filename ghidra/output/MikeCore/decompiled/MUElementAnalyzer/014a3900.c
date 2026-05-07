// Function: FUN_014a3900
// Address: 014a3900
// Size: 2129 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x014a40ef) */
/* WARNING: Removing unreachable block (ram,0x014a40ff) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014a3900(float param_1,float param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  char cVar5;
  char cVar7;
  int iVar9;
  char cVar10;
  char cVar11;
  longlong *unaff_RSI;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar20;
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  longlong local_78;
  longlong local_70;
  longlong local_40;
  char cVar6;
  char cVar8;
  
  lVar15 = *unaff_RSI;
  if (1 < *(int *)(lVar15 + 0xc)) {
    lVar14 = 0;
    lVar13 = 0;
    cVar6 = '\0';
    cVar5 = '\0';
    local_40 = 0;
    cVar8 = '\0';
    cVar7 = '\0';
    local_78 = 0;
    bVar1 = false;
    lVar12 = 0;
    cVar10 = '\0';
    cVar11 = '\0';
    cVar3 = '\0';
    local_70 = 0;
    do {
      lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + lVar14 * 8);
      if (lVar13 == lVar15) {
        if ((cVar5 == '\0') && (lVar13 != 0)) {
          cVar6 = '\x01';
          cVar5 = '\x01';
          FUN_00d50b00();
        }
      }
      else {
        if (lVar15 != 0) {
          FUN_00d50b00();
        }
        if ((cVar5 == '\0') || (lVar13 == 0)) {
          cVar6 = '\x01';
          cVar5 = '\x01';
          lVar13 = lVar15;
        }
        else {
          FUN_00d50b20();
          cVar6 = '\x01';
          cVar5 = '\x01';
          lVar13 = lVar15;
        }
      }
      lVar15 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + 8 + lVar14 * 8);
      if (local_40 == lVar15) {
        if ((cVar7 == '\0') && (local_40 != 0)) {
          cVar8 = '\x01';
          cVar7 = '\x01';
          FUN_00d50b00();
        }
      }
      else {
        if (lVar15 != 0) {
          FUN_00d50b00();
        }
        if ((cVar7 == '\0') || (local_40 == 0)) {
          cVar8 = '\x01';
          cVar7 = '\x01';
          local_40 = lVar15;
        }
        else {
          FUN_00d50b20();
          cVar8 = '\x01';
          cVar7 = '\x01';
          local_40 = lVar15;
        }
      }
      if (lVar14 < (longlong)*(int *)(*unaff_RSI + 0xc) + -2) {
        lVar15 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + 0x10 + lVar14 * 8);
        if (local_78 == lVar15) {
          if ((!bVar1) && (local_78 != 0)) {
            bVar1 = true;
            FUN_00d50b00();
          }
LAB_014a3b40:
          iVar9 = *(int *)(lVar13 + 0x3c);
        }
        else {
          if (lVar15 == 0) {
            lVar15 = 0;
          }
          else {
            FUN_00d50b00();
          }
joined_r0x014a3af5:
          if ((bVar1) && (local_78 != 0)) {
            FUN_00d50b20();
            bVar1 = true;
            local_78 = lVar15;
            goto LAB_014a3b40;
          }
          bVar1 = true;
          iVar9 = *(int *)(lVar13 + 0x3c);
          local_78 = lVar15;
        }
        if (iVar9 == 1) goto LAB_014a3bb5;
LAB_014a3b4b:
        bVar16 = true;
        if (((iVar9 == 2) && (*(int *)(local_40 + 0x3c) == 1)) &&
           (*(double *)(local_40 + 0x10) - *(double *)(lVar13 + 0x10) < (double)param_2))
        goto LAB_014a3bd8;
      }
      else {
        lVar15 = 0;
        if (local_78 != 0) goto joined_r0x014a3af5;
        local_78 = 0;
        iVar9 = *(int *)(lVar13 + 0x3c);
        if (iVar9 != 1) goto LAB_014a3b4b;
LAB_014a3bb5:
        bVar16 = true;
        if ((*(int *)(local_40 + 0x3c) == 2) &&
           (*(double *)(local_40 + 0x10) - *(double *)(lVar13 + 0x10) < (double)param_1)) {
LAB_014a3bd8:
          bVar16 = false;
        }
      }
      if ((local_78 == 0) || (*(int *)(local_40 + 0x3c) == *(int *)(local_78 + 0x3c))) {
        if (!bVar16) goto LAB_014a3c27;
      }
      else if (!bVar16 &&
               *(double *)(local_40 + 0x10) - *(double *)(lVar13 + 0x10) <=
               *(double *)(local_78 + 0x10) - *(double *)(local_40 + 0x10)) {
LAB_014a3c27:
        auVar19 = insertps(ZEXT416(*(uint *)(lVar13 + 0x2c)),*(undefined4 *)(local_40 + 0x2c),0x10);
        auVar17 = insertps(ZEXT416(*(uint *)(lVar13 + 0x20)),*(undefined4 *)(local_40 + 0x20),0x10);
        auVar21 = insertps(ZEXT416(*(uint *)(lVar13 + 0x28)),*(undefined4 *)(local_40 + 0x28),0x10);
        fVar18 = _DAT_023b5570 - auVar21._0_4_;
        fVar20 = _UNK_023b5574 - auVar21._4_4_;
        lVar15 = local_70;
        cVar2 = cVar3;
        if (fVar18 * fVar18 * auVar17._0_4_ * auVar19._0_4_ <=
            fVar20 * fVar20 * auVar17._4_4_ * auVar19._4_4_) {
          if (lVar12 == local_40) {
            lVar4 = lVar12;
            if (((cVar7 != '\0') && (cVar11 == '\0')) && (lVar12 != 0)) {
              FUN_00d50b00();
              cVar10 = '\x01';
              cVar11 = '\x01';
            }
          }
          else {
            if (cVar7 != '\0') {
              FUN_00d50b00();
            }
            bVar16 = cVar11 != '\0';
            lVar4 = local_40;
            cVar11 = cVar7;
            cVar10 = cVar8;
            if ((bVar16) && (lVar12 != 0)) {
              FUN_00d50b20();
              cVar10 = cVar7;
            }
          }
          lVar12 = lVar4;
          if (local_70 == lVar13) {
            if (((cVar5 != '\0') && (cVar3 == '\0')) && (local_70 != 0)) {
              FUN_00d50b00();
              cVar2 = '\x01';
            }
          }
          else {
            if (cVar5 != '\0') {
              FUN_00d50b00();
              cVar11 = cVar10;
            }
            lVar15 = lVar13;
            cVar2 = cVar5;
            if ((cVar3 != '\0') && (local_70 != 0)) {
              FUN_00d50b20(cVar3);
            }
          }
        }
        else {
          if (lVar12 == lVar13) {
            lVar4 = lVar12;
            if (((cVar5 != '\0') && (cVar11 == '\0')) && (lVar12 != 0)) {
              FUN_00d50b00();
              cVar10 = '\x01';
              cVar11 = '\x01';
            }
          }
          else {
            if (cVar5 != '\0') {
              FUN_00d50b00();
            }
            bVar16 = cVar11 != '\0';
            lVar4 = lVar13;
            cVar11 = cVar5;
            cVar10 = cVar6;
            if ((bVar16) && (lVar12 != 0)) {
              FUN_00d50b20(lVar13);
              cVar10 = cVar5;
            }
          }
          lVar12 = lVar4;
          if (local_70 == local_40) {
            if (((cVar7 != '\0') && (cVar3 == '\0')) && (local_70 != 0)) {
              FUN_00d50b00();
              cVar2 = '\x01';
            }
          }
          else {
            if (cVar7 != '\0') {
              FUN_00d50b00();
              cVar10 = cVar11;
            }
            cVar2 = cVar7;
            if ((cVar3 == '\0') || (local_70 == 0)) {
              local_70 = local_40;
              lVar15 = local_70;
            }
            else {
              local_70 = local_40;
              FUN_00d50b20(cVar3);
              lVar15 = local_70;
            }
          }
        }
        local_70 = lVar15;
        if ((*(int *)(lVar13 + 0x3c) == 2) && (lVar13 != lVar12)) {
          *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(lVar13 + 0x10);
          *(undefined4 *)(lVar12 + 0x24) = *(undefined4 *)(lVar13 + 0x20);
        }
        fVar18 = *(float *)(local_70 + 0x20);
        if (fVar18 < *(float *)(lVar12 + 0x20) || fVar18 == *(float *)(lVar12 + 0x20)) {
          fVar18 = *(float *)(local_70 + 0x28);
          if (fVar18 < *(float *)(lVar12 + 0x28) || fVar18 == *(float *)(lVar12 + 0x28))
          goto LAB_014a4016;
LAB_014a406d:
          *(float *)(lVar12 + 0x28) = fVar18;
          fVar18 = *(float *)(local_70 + 0x2c);
          if (*(float *)(lVar12 + 0x2c) <= fVar18 && fVar18 != *(float *)(lVar12 + 0x2c))
          goto LAB_014a4023;
LAB_014a4081:
          fVar18 = *(float *)(local_70 + 0x30);
          if (fVar18 < *(float *)(lVar12 + 0x30) || fVar18 == *(float *)(lVar12 + 0x30))
          goto LAB_014a4037;
LAB_014a408e:
          *(float *)(lVar12 + 0x30) = fVar18;
          fVar18 = *(float *)(local_70 + 0x34);
          if (*(float *)(lVar12 + 0x34) <= fVar18 && fVar18 != *(float *)(lVar12 + 0x34))
          goto LAB_014a4044;
LAB_014a40a2:
          fVar18 = *(float *)(local_70 + 0x38);
          if (*(float *)(lVar12 + 0x38) <= fVar18 && fVar18 != *(float *)(lVar12 + 0x38))
          goto LAB_014a40af;
        }
        else {
          *(float *)(lVar12 + 0x20) = fVar18;
          fVar18 = *(float *)(local_70 + 0x28);
          if (*(float *)(lVar12 + 0x28) <= fVar18 && fVar18 != *(float *)(lVar12 + 0x28))
          goto LAB_014a406d;
LAB_014a4016:
          fVar18 = *(float *)(local_70 + 0x2c);
          if (fVar18 < *(float *)(lVar12 + 0x2c) || fVar18 == *(float *)(lVar12 + 0x2c))
          goto LAB_014a4081;
LAB_014a4023:
          *(float *)(lVar12 + 0x2c) = fVar18;
          fVar18 = *(float *)(local_70 + 0x30);
          if (*(float *)(lVar12 + 0x30) <= fVar18 && fVar18 != *(float *)(lVar12 + 0x30))
          goto LAB_014a408e;
LAB_014a4037:
          fVar18 = *(float *)(local_70 + 0x34);
          if (fVar18 < *(float *)(lVar12 + 0x34) || fVar18 == *(float *)(lVar12 + 0x34))
          goto LAB_014a40a2;
LAB_014a4044:
          *(float *)(lVar12 + 0x34) = fVar18;
          fVar18 = *(float *)(local_70 + 0x38);
          if (*(float *)(lVar12 + 0x38) <= fVar18 && fVar18 != *(float *)(lVar12 + 0x38)) {
LAB_014a40af:
            *(float *)(lVar12 + 0x38) = fVar18;
          }
        }
        *(uint *)(lVar12 + 0x3c) = *(uint *)(lVar12 + 0x3c) | *(uint *)(local_70 + 0x3c);
        FUN_00d23f50();
        cVar3 = cVar2;
      }
      lVar14 = lVar14 + 1;
      lVar15 = *unaff_RSI;
    } while (lVar14 < (longlong)*(int *)(lVar15 + 0xc) + -1);
    if ((cVar3 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((cVar11 != '\0') && (lVar12 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar1) && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((cVar7 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}


