// Function: FUN_01ef3900
// Address: 01ef3900
// Size: 1095 bytes
// Class: Unknown
// String references:
//   "Circle_%f_%f_%f"


/* WARNING: Removing unreachable block (ram,0x01ef399b) */
/* WARNING: Removing unreachable block (ram,0x01ef39a7) */

void FUN_01ef3900(float param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *in_RCX;
  undefined4 in_EDX;
  undefined8 *puVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  bool bVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar8 [16];
  undefined8 *local_e0;
  char local_d8;
  undefined8 *local_d0;
  char local_c8;
  undefined8 *local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  undefined8 *local_90;
  char local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined8 *local_58;
  uint local_50;
  float local_4c;
  float local_44;
  undefined8 *local_40;
  undefined8 local_38;
  
  auVar8._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar7 = (float)param_2;
  local_50 = 3;
  local_58 = (undefined8 *)&DAT_026b2438;
  local_80 = param_3;
  local_4c = param_1;
  local_44 = fVar7;
  uVar6 = FUN_00d8cb40(in_RCX,&local_58);
  if ((local_d8 == '\0') && (local_e0 != (undefined8 *)0x0)) {
    uVar6 = FUN_00d50b00();
  }
  local_d0 = local_e0;
  local_c8 = '\0';
  local_40 = local_e0;
  local_7c = in_EDX;
  uVar2 = FUN_000175c0(uVar6,&local_d0);
  puVar3 = local_58;
  if (local_58 == (undefined8 *)0x0) {
    local_38 = 0;
    puVar3 = (undefined8 *)0x0;
    bVar5 = true;
  }
  else {
    if ((char)local_50 != '\0') {
      local_50 = local_50 & 0xffffff00;
      local_38 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
      bVar5 = false;
      goto LAB_01ef3a36;
    }
    uVar2 = FUN_00d50b00();
    local_38 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    bVar5 = puVar3 == (undefined8 *)0x0;
  }
  if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
LAB_01ef3a36:
  if ((local_c8 != '\0') && (local_d0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  puVar4 = local_40;
  if (bVar5) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02680400;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x39) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x41) = 0;
    uVar2 = (*DAT_02680418)();
    local_38 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    FUN_01d39400(param_1 + fVar7);
    uVar6 = FUN_01d39310(param_1);
    local_b8 = '\0';
    local_58 = puVar4;
    local_50 = local_50 & 0xffffff00;
    local_c0 = puVar3;
    uVar2 = FUN_00ca0840(uVar6,&local_58);
    if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
      uVar2 = FUN_00d50b20();
    }
    local_38 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = *in_RCX;
  }
  else {
    lVar1 = *in_RCX;
  }
  if (lVar1 != 0) {
    FUN_01d48370();
    local_a8 = '\0';
    local_b0 = puVar3;
    (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
    if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = *in_RCX;
    local_98 = '\0';
    FUN_01d488d0();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    auVar8._0_4_ = fVar7 + fVar7;
    auVar8._8_4_ = in_XMM1_Dc;
    auVar8._12_4_ = in_XMM1_Dd;
    auVar8 = insertps(auVar8,ZEXT416((uint)(DAT_0241c6f8 * (fVar7 + fVar7))),0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))((param_1 - fVar7) - auVar8._0_4_);
    FUN_01d48390();
  }
  FUN_01d48b40(DAT_02390124);
  if ((char)local_80 != '\0') {
    if ((char)local_7c == '\0') {
      local_60 = 0;
      lVar1 = *(longlong *)(unaff_RDI + 0x80);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_60 = '\x01';
      local_68 = lVar1;
      FUN_01d488d0();
      puVar4 = local_40;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = 0;
      lVar1 = *(longlong *)(unaff_RDI + 0x78);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      local_78 = lVar1;
      FUN_01d488d0();
      puVar4 = local_40;
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    local_88 = '\0';
    local_90 = puVar3;
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_38 != '\0') && (puVar3 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


