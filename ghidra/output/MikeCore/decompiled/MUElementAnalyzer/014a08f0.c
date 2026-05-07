// Function: FUN_014a08f0
// Address: 014a08f0
// Size: 895 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x014a0b5a) */
/* WARNING: Removing unreachable block (ram,0x014a0b63) */
/* WARNING: Removing unreachable block (ram,0x014a0c02) */
/* WARNING: Removing unreachable block (ram,0x014a0c0b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_014a08f0(float param_1,float param_2,float param_3)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *in_RDX;
  undefined8 *unaff_RDI;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float local_68;
  longlong local_50;
  char local_48;
  longlong local_40;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar4 = *in_RDX;
  if (*(int *)(lVar4 + 0xc) < 1) {
    bVar1 = false;
    local_40 = 0;
    bVar2 = false;
    lVar5 = 0;
  }
  else {
    local_68 = DAT_0241b664;
    lVar6 = 0;
    lVar5 = 0;
    bVar2 = false;
    local_40 = 0;
    bVar1 = false;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar6 * 8);
      if (lVar5 == lVar4) {
        if ((!bVar1) && (lVar5 != 0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (lVar5 != 0)) {
          FUN_00d50b20();
          bVar1 = true;
          lVar5 = lVar4;
        }
        else {
          bVar1 = true;
          lVar5 = lVar4;
        }
      }
      fVar7 = *(float *)(lVar5 + 0x38) * param_1;
      fVar9 = param_2;
      if (fVar7 <= param_2) {
        fVar9 = fVar7;
      }
      fVar7 = param_3;
      if (param_3 <= fVar9) {
        fVar7 = fVar9;
      }
      if (DAT_02390124 <= (float)((uint)(fVar7 - local_68) & _DAT_02390140)) {
        if (lVar6 == 0) {
          if (local_40 != 0) {
            lVar4 = 0;
            goto joined_r0x014a0a7f;
          }
LAB_014a0b0a:
          dVar8 = 0.0;
          local_40 = 0;
        }
        else {
          lVar4 = *(longlong *)(*(longlong *)(*in_RDX + 0x10) + -8 + lVar6 * 8);
          if (local_40 == lVar4) {
            if ((bVar2) || (local_40 == 0)) goto joined_r0x014a0aff;
            bVar2 = true;
            FUN_00d50b00();
          }
          else {
            if (lVar4 == 0) {
              lVar4 = 0;
            }
            else {
              FUN_00d50b00();
            }
joined_r0x014a0a7f:
            if ((bVar2) && (local_40 != 0)) {
              FUN_00d50b20();
            }
            bVar2 = true;
            local_40 = lVar4;
joined_r0x014a0aff:
            if (local_40 == 0) goto LAB_014a0b0a;
          }
          dVar8 = (*(double *)(local_40 + 0x18) + *(double *)(lVar5 + 0x10)) * DAT_023942d0;
        }
        FUN_014328b0(dVar8,(double)fVar7);
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_00d21140();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        local_68 = fVar7;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar6 = lVar6 + 1;
      lVar4 = *in_RDX;
    } while (lVar6 < *(int *)(lVar4 + 0xc));
  }
  if (*(int *)((longlong)puVar3 + 0xc) == 0) {
    FUN_014328b0(0,(double)param_2);
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00d21140();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar2) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


