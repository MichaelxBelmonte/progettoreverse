// Function: FUN_01d21ed0
// Address: 01d21ed0
// Size: 1868 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01d22535) */
/* WARNING: Removing unreachable block (ram,0x01d22541) */
/* WARNING: Removing unreachable block (ram,0x01d22025) */
/* WARNING: Removing unreachable block (ram,0x01d22035) */

void FUN_01d21ed0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  longlong local_40;
  char local_38;
  
  fVar8 = (float)((ulonglong)param_2 >> 0x20);
  fVar13 = (float)param_2;
  iVar3 = FUN_01d3a5a0();
  if ((iVar3 == 1) && (iVar3 = FUN_01d3b630(), iVar3 == 1)) {
    cVar2 = (**(code **)(*unaff_RDI + 0x9a0))();
    if (cVar2 != '\0') {
      uVar4 = FUN_01d3b590();
      uVar5 = FUN_01daf9a0();
      if ((uVar5 & ~uVar4) == 0) {
        (**(code **)(*unaff_RDI + 0x990))();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          (**(code **)(*unaff_RDI + 0x990))();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          (**(code **)(*unaff_RDI + 0x978))();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*unaff_RDI + 0xa50))();
          return;
        }
      }
      *(undefined1 *)(unaff_RDI + 0x31) = 1;
      FUN_01d3abf0();
      uVar10 = FUN_01e466c0();
      local_d8 = (float)uVar10;
      fStack_d4 = (float)((ulonglong)uVar10 >> 0x20);
      uVar7 = (**(code **)(*unaff_RDI + 0x930))();
      *(undefined4 *)(unaff_RDI + 0x3d) = uVar7;
      (**(code **)(*unaff_RDI + 0xaa8))();
LAB_01d220aa:
      (**(code **)(*unaff_RDI + 0x658))();
      lVar1 = *unaff_RSI;
      if (lVar1 == local_40) {
        if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01d2214b;
          }
LAB_01d22102:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          local_38 = '\0';
        }
        lVar1 = *unaff_RSI;
      }
      else {
        lVar6 = unaff_RSI[1];
        if (local_38 != '\0') {
          *unaff_RSI = local_40;
          if (((char)lVar6 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01d22102;
        }
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = local_40;
        if (((char)lVar6 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01d2214b:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        lVar1 = *unaff_RSI;
      }
      if (lVar1 != 0) {
        iVar3 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (iVar3 == 6) goto LAB_01d22593;
        iVar3 = FUN_01d3a5a0();
        if (iVar3 == 4) {
          uVar7 = (**(code **)(*unaff_RDI + 0x930))();
          *(undefined4 *)(unaff_RDI + 0x3d) = uVar7;
          FUN_01d3abf0();
          uVar10 = FUN_01e466c0();
          local_d8 = (float)uVar10;
          fStack_d4 = (float)((ulonglong)uVar10 >> 0x20);
        }
        iVar3 = FUN_01d3a5a0();
        if (iVar3 == 5) {
          FUN_01d3abf0();
          uVar10 = FUN_01e466c0();
          fVar13 = *(float *)(unaff_RDI + 0x3d);
          fVar14 = (fStack_d4 + (((float)uVar10 - local_d8) - (float)((ulonglong)uVar10 >> 0x20))) /
                   DAT_02390d38;
          fVar8 = (float)(**(code **)(*unaff_RDI + 0xad0))();
          fVar9 = (float)(**(code **)(*unaff_RDI + 0xac0))();
          fVar14 = (fVar8 - fVar9) * fVar14;
          uVar4 = FUN_01d3b590();
          uVar5 = FUN_01daf9d0();
          fVar8 = fVar14 * DAT_02391090;
          if ((uVar5 & ~uVar4) != 0) {
            fVar8 = fVar14;
          }
          (**(code **)(*unaff_RDI + 0xb20))(fVar13 + fVar8);
          if (unaff_RDI[0x39] != 0) {
            uVar4 = FUN_01d3b590();
            uVar5 = FUN_01daf9d0();
            if ((uVar5 & ~uVar4) != 0) {
              FUN_01d0d420();
            }
          }
          uVar4 = FUN_01d3b590();
          uVar5 = FUN_01daf9a0();
          if ((uVar5 & ~uVar4) == 0) {
            (**(code **)(*unaff_RDI + 0x990))();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (local_40 == 0) goto LAB_01d223e0;
            (**(code **)(*unaff_RDI + 0x990))();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            (**(code **)(*unaff_RDI + 0x978))();
            if (local_40 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
LAB_01d223e0:
            (**(code **)(*unaff_RDI + 0x928))();
          }
LAB_01d223f2:
          if (*(char *)((longlong)unaff_RDI + 0x16a) != '\0') {
            (**(code **)(*unaff_RDI + 0xa50))();
          }
          (**(code **)(*unaff_RDI + 0x620))();
        }
        else {
          iVar3 = FUN_01d3a5a0();
          if (iVar3 == 4) {
            uVar4 = FUN_01d3b590();
            uVar5 = FUN_01daf9a0();
            if ((uVar5 & ~uVar4) == 0) {
              (**(code **)(*unaff_RDI + 0x990))();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 != 0) {
                (**(code **)(*unaff_RDI + 0x990))();
                if (local_38 == '\0') {
                  if (local_40 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                (**(code **)(*unaff_RDI + 0x978))();
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_01d223f2;
              }
            }
          }
        }
        (**(code **)(*unaff_RDI + 0xaa8))();
        goto LAB_01d220aa;
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
LAB_01d22593:
      *(undefined1 *)(unaff_RDI + 0x31) = 0;
      (**(code **)(*unaff_RDI + 0x6e0))();
      (**(code **)(*unaff_RDI + 0xa50))();
    }
  }
  else if ((unaff_RDI[0x3c] == 0) ||
          ((iVar3 = FUN_01d3a5a0(), iVar3 != 1 || (iVar3 = FUN_01d3b630(), iVar3 != 2)))) {
    FUN_01daee00();
  }
  else {
    uVar10 = FUN_01e3f820();
    fStack_d0 = (float)extraout_XMM0_Qb;
    fStack_cc = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
    lVar1 = unaff_RDI[0x3c];
    if (lVar1 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_00d50b00();
      lVar6 = lVar1;
    }
    FUN_00d50b00();
    auVar12._8_4_ = fStack_d0;
    auVar12._0_8_ = uVar10;
    auVar12._12_4_ = fStack_cc;
    auVar11._0_4_ = (float)uVar10 + fVar13;
    auVar11._4_4_ = (float)((ulonglong)uVar10 >> 0x20) + fVar8;
    auVar11._8_4_ = fStack_d0 + in_XMM1_Dc;
    auVar11._12_4_ = fStack_cc + in_XMM1_Dd;
    auVar12 = blendps(auVar11,auVar12,0xd);
    FUN_01d5ef60(auVar12._0_8_,0xffffffff);
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((lVar1 != 0) && (lVar6 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


