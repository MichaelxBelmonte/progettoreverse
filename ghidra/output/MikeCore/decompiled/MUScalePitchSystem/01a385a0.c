// Function: FUN_01a385a0
// Address: 01a385a0
// Size: 1240 bytes
// Class: MUScalePitchSystem


void FUN_01a385a0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  float local_8c;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  float local_44;
  longlong local_40;
  char local_38;
  
  fStack_dc = (float)((ulonglong)param_2 >> 0x20);
  fStack_e0 = (float)param_2;
  fStack_e4 = (float)((ulonglong)param_1 >> 0x20);
  local_e8 = (float)param_1;
  if (*(int *)(unaff_RDI[0x31] + 0xc) == 0) {
    local_c0 = *unaff_RSI;
    local_b8 = '\0';
    (**(code **)(*unaff_RDI + 0x9f8))(local_e8,&local_e8);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    local_44 = local_e8;
    _local_d8 = CONCAT44(fStack_d4,fStack_e0 + local_e8);
    FUN_01d48b40(DAT_02390124);
    uVar4 = (**(code **)(*unaff_RDI + 0x640))();
    plVar1 = local_58;
    local_b0 = DAT_026e41f0;
    if (DAT_026e41f0 != 0) {
      uVar4 = FUN_00d50b00();
    }
    local_a8 = '\x01';
    (**(code **)(*plVar1 + 0x3b0))(uVar4,&local_b0);
    local_78 = local_40;
    local_70 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = '\x01';
    FUN_01d488d0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    fVar5 = local_d8 + DAT_02390d00;
    lVar3 = *(longlong *)*unaff_RSI;
    uVar4 = 0;
    fVar6 = local_44;
  }
  else {
    FUN_01a38090();
    fVar6 = local_e8;
    local_44 = *(float *)(unaff_RDI + 0x23) + DAT_02390d00;
    local_d8 = fStack_e0 + local_e8;
    fStack_d4 = fStack_dc + fStack_e4;
    uStack_d0 = 0;
    if (local_44 <= fStack_d4 + DAT_02390d00) {
      FUN_01d48b40(DAT_02390124);
      uVar4 = (**(code **)(*unaff_RDI + 0x640))();
      plVar1 = local_58;
      local_a0 = DAT_026e41f0;
      if (DAT_026e41f0 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_98 = '\x01';
      (**(code **)(*plVar1 + 0x3b0))(uVar4,&local_a0);
      local_68 = local_40;
      local_60 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_60 = '\x01';
      FUN_01d488d0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))
                (fVar6,local_44,local_d8 + DAT_02390d00,local_44);
    }
    cVar2 = (**(code **)(*unaff_RDI + 0x9b0))();
    if (cVar2 == '\0') {
      return;
    }
    dVar7 = (double)(**(code **)(*unaff_RDI + 0x9c0))();
    if (NAN(dVar7)) {
      return;
    }
    fVar5 = (float)(**(code **)(*(longlong *)unaff_RDI[0x2d] + 0x390))();
    local_8c = (float)FUN_01a34a00();
    local_44 = (float)(**(code **)(*unaff_RDI + 0x9d0))();
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_58 + 0x3a0))();
    _local_d8 = CONCAT44(fStack_d4,*(undefined4 *)(local_40 + 0x18));
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40(DAT_02390124);
    FUN_01cfcdc0(local_d8,local_d8,local_d8,local_44 * local_44);
    local_88 = local_40;
    local_80 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = '\x01';
    FUN_01d488d0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    fVar5 = fVar5 - local_8c;
    lVar3 = *(longlong *)*unaff_RSI;
    fVar6 = fVar5;
    uVar4 = DAT_023942a8;
  }
  (**(code **)(lVar3 + 0x3e0))(fVar6,0,fVar5,uVar4);
  return;
}


