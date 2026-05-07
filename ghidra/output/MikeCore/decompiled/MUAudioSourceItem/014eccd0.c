// Function: FUN_014eccd0
// Address: 014eccd0
// Size: 862 bytes
// Class: MUAudioSourceItem


float FUN_014eccd0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int unaff_ESI;
  longlong *unaff_RDI;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float local_38;
  float local_34;
  
  cVar3 = (**(code **)(*unaff_RDI + 1000))();
  local_34 = -NAN;
  iVar10 = -1;
  if (cVar3 != '\0') {
    lVar5 = **(longlong **)(unaff_RDI[0x21] + 0x10);
    iVar10 = -1;
    if (lVar5 != 0) {
      FUN_00d50b00();
      iVar10 = *(int *)(lVar5 + 0xc);
      FUN_00d50b20();
    }
  }
  cVar3 = (**(code **)(*unaff_RDI + 1000))();
  if ((cVar3 != '\0') && (lVar5 = **(longlong **)(unaff_RDI[0x21] + 0x10), lVar5 != 0)) {
    FUN_00d50b00();
    local_34 = *(float *)(lVar5 + 0xc);
    FUN_00d50b20();
  }
  uVar8 = param_2 - iVar10;
  lVar5 = unaff_RDI[0x21];
  iVar10 = *(int *)(lVar5 + 0xc);
  if (((int)uVar8 < iVar10) && (param_1 = param_1 - (int)local_34, -1 < param_1)) {
    uVar4 = 0;
    if (-1 < (int)uVar8) {
      uVar4 = uVar8;
    }
    iVar2 = iVar10 + -1;
    if (param_1 < iVar10) {
      iVar2 = param_1;
    }
    if (unaff_ESI == 1) {
      if ((int)uVar4 <= iVar2) {
        uVar9 = (ulonglong)uVar4;
        local_38 = 0.0;
        lVar6 = 0;
        local_34 = 0.0;
        bVar7 = false;
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar9 * 8);
        if (lVar5 == 0) goto LAB_014eceb8;
LAB_014ece10:
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        if ((bVar7) && (lVar6 != 0)) {
          FUN_00d50b20();
        }
LAB_014ece35:
        bVar7 = true;
        fVar12 = *(float *)(lVar5 + 0x20);
        lVar6 = lVar5;
        do {
          fVar11 = 0.0;
          if (!NAN(fVar12)) {
            fVar11 = 0.0;
            fVar1 = *(float *)(lVar6 + 0x10);
            if (!NAN(fVar1)) {
              fVar11 = SQRT(fVar12 * *(float *)(lVar6 + 0x58)) * fVar1 * fVar1;
            }
          }
          local_34 = fVar11 * DAT_02394288 + local_34 * DAT_02390128;
          fVar12 = local_34;
          if (local_34 <= local_38) {
            fVar12 = local_38;
          }
          if ((ulonglong)(iVar2 + 1) - 1 == uVar9) {
LAB_014ed01c:
            if (!bVar7) {
              return fVar12;
            }
            FUN_00d50b20();
            return fVar12;
          }
          uVar9 = uVar9 + 1;
          lVar5 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + uVar9 * 8);
          local_38 = fVar12;
          if (lVar6 != lVar5) goto LAB_014ece10;
LAB_014eceb8:
          lVar5 = lVar6;
          if ((!bVar7) && (lVar5 != 0)) goto code_r0x014ecec2;
          fVar12 = *(float *)(lVar5 + 0x20);
          lVar6 = lVar5;
        } while( true );
      }
    }
    else if ((int)uVar4 <= iVar2) {
      uVar9 = (ulonglong)uVar4;
      local_38 = 0.0;
      lVar6 = 0;
      local_34 = 0.0;
      bVar7 = false;
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar9 * 8);
      if (lVar5 == 0) goto LAB_014ecfd4;
LAB_014ecf40:
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      if ((bVar7) && (lVar6 != 0)) {
        FUN_00d50b20();
      }
LAB_014ecf65:
      bVar7 = true;
      fVar12 = *(float *)(lVar5 + 0x10);
      if (NAN(fVar12)) goto LAB_014ed014;
      do {
        fVar12 = *(float *)(lVar5 + 0x58) * fVar12 * fVar12;
        lVar6 = lVar5;
        while( true ) {
          local_34 = fVar12 * DAT_02394288 + local_34 * DAT_02390128;
          fVar12 = local_34;
          if (local_34 <= local_38) {
            fVar12 = local_38;
          }
          if ((ulonglong)(iVar2 + 1) - 1 == uVar9) goto LAB_014ed01c;
          uVar9 = uVar9 + 1;
          lVar5 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + uVar9 * 8);
          local_38 = fVar12;
          if (lVar6 != lVar5) goto LAB_014ecf40;
LAB_014ecfd4:
          lVar5 = lVar6;
          if ((!bVar7) && (lVar5 != 0)) {
            FUN_00d50b00();
            goto LAB_014ecf65;
          }
          fVar12 = *(float *)(lVar5 + 0x10);
          if (!NAN(fVar12)) break;
LAB_014ed014:
          fVar12 = 0.0;
          lVar6 = lVar5;
        }
      } while( true );
    }
  }
  return 0.0;
code_r0x014ecec2:
  FUN_00d50b00();
  goto LAB_014ece35;
}


