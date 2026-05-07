// Function: FUN_01ce0360
// Address: 01ce0360
// Size: 1906 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01ce0778) */
/* WARNING: Removing unreachable block (ram,0x01ce0788) */
/* WARNING: Removing unreachable block (ram,0x01ce08d5) */
/* WARNING: Removing unreachable block (ram,0x01ce08e1) */
/* WARNING: Removing unreachable block (ram,0x01ce03e1) */
/* WARNING: Removing unreachable block (ram,0x01ce03f1) */
/* WARNING: Removing unreachable block (ram,0x01ce0515) */
/* WARNING: Removing unreachable block (ram,0x01ce0525) */

void FUN_01ce0360(undefined8 param_1,undefined8 param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int in_EDX;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  char in_R8B;
  undefined4 in_R9D;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 uVar12;
  longlong local_b0;
  char local_a8;
  undefined4 local_58;
  undefined1 local_48 [16];
  longlong local_38;
  
  fVar7 = (float)((ulonglong)param_2 >> 0x20);
  fVar10 = (float)param_2;
  fVar9 = (float)((ulonglong)param_1 >> 0x20);
  fVar8 = (float)param_1;
  local_48._8_4_ = in_XMM0_Dc;
  local_48._0_8_ = param_1;
  local_48._12_4_ = in_XMM0_Dd;
  if (in_EDX == 9) {
    if (fVar7 < fVar10) {
      (**(code **)(*unaff_RDI + 0x3f8))(fVar8,0x23,in_R8B,in_R9D);
      return;
    }
    (**(code **)(*unaff_RDI + 0x3f8))(fVar8,0x24,in_R8B,in_R9D);
    return;
  }
  lVar3 = unaff_RDI[0x10];
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0xc) <= in_EDX)) {
    bVar6 = false;
    local_38 = 0;
  }
  else {
    local_38 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (longlong)in_EDX * 8);
    bVar6 = local_38 != 0;
    if (bVar6) {
      FUN_00d50b00();
    }
    if (*(char *)(local_38 + 0x50) != '\0') {
      if (in_EDX - 0x23U < 2) {
        fVar8 = (float)(**(code **)(*unaff_RDI + 0x560))(fVar8);
        fVar7 = fVar10;
      }
      else if (fVar10 <= fVar7) {
        auVar11._4_4_ = fVar9;
        auVar11._0_4_ = fVar9 + (fVar7 - fVar10) * param_3;
        auVar11._8_4_ = in_XMM0_Dd;
        auVar11._12_4_ = in_XMM0_Dd;
        auVar11 = insertps(local_48,auVar11,0x10);
        fVar8 = auVar11._0_4_;
        fVar7 = fVar10;
      }
      else {
        fVar8 = fVar8 + (fVar10 - fVar7) * param_3;
      }
      if (in_R8B == '\0') {
        if (*(longlong *)(local_38 + 0x20) == 0) {
          lVar3 = *(longlong *)(local_38 + 0x10);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          uVar1 = *(undefined8 *)(local_38 + 0x30);
          uVar2 = *(undefined4 *)(local_38 + 0x54);
          lVar4 = *(longlong *)(local_38 + 0x58);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          local_58 = (undefined4)uVar1;
          FUN_01cdecb0(local_58,uVar2,fVar8,fVar7);
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d50b00();
          uVar1 = *(undefined8 *)(local_38 + 0x30);
          uVar2 = *(undefined4 *)(local_38 + 0x54);
          lVar3 = *(longlong *)(local_38 + 0x58);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          local_58 = (undefined4)uVar1;
          FUN_01cdecb0(local_58,uVar2,fVar8,fVar7);
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      else {
        lVar3 = *(longlong *)(local_38 + 0x10);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        uVar12 = 1;
        uVar1 = *(undefined8 *)(local_38 + 0x30);
        uVar2 = *(undefined4 *)(local_38 + 0x54);
        lVar4 = *(longlong *)(local_38 + 0x58);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        local_58 = (undefined4)uVar1;
        FUN_01cdecb0(local_58,uVar2,fVar8,fVar7,uVar12);
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      goto LAB_01ce08ee;
    }
  }
  if (in_EDX == 0xf) {
    FUN_01cfbee0();
    if (local_a8 == '\0') {
      if (local_b0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    FUN_01d488d0();
    if (local_b0 != 0) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_02680400;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    *(undefined8 *)((longlong)puVar5 + 0x39) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x41) = 0;
    (*DAT_02680418)();
    fVar8 = DAT_0239011c * fVar7 + fVar8;
    FUN_01d39180();
    if ((param_4 != DAT_02390124) || (NAN(param_4) || NAN(DAT_02390124))) {
      param_3 = param_3 + DAT_02390118;
      fVar7 = DAT_02394254;
      if (DAT_02394254 <= param_3) {
        fVar7 = param_3;
      }
      if (0.0 <= (float)(~-(uint)(DAT_0240d178 < param_3) & (uint)param_3 |
                        (uint)fVar7 & -(uint)(DAT_0240d178 < param_3))) {
        FUN_01d39310(fVar8);
      }
      else {
        FUN_01d39310(fVar8);
      }
    }
    else {
      FUN_01d39310(fVar8);
    }
    FUN_01d38830(fVar8);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
    FUN_00d50b20();
  }
  else {
    FUN_01cc0ca0(fVar8,in_EDX,in_R8B,in_R9D);
  }
LAB_01ce08ee:
  if ((bVar6) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}


