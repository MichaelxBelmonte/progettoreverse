// Function: FUN_01cdf840
// Address: 01cdf840
// Size: 1581 bytes
// Class: GNData


void FUN_01cdf840(undefined1 param_1 [8],undefined8 param_2,float param_3,uint param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  undefined8 uVar5;
  undefined4 in_ECX;
  int in_EDX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar6;
  longlong lVar7;
  undefined8 in_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int local_res8;
  longlong lVar10;
  undefined1 uVar11;
  longlong local_158;
  undefined1 local_150;
  longlong local_148;
  undefined1 local_140;
  longlong local_138;
  undefined1 local_130;
  longlong local_128;
  undefined1 local_120;
  longlong local_118;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  undefined1 local_f0;
  float local_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  char local_d0;
  float local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  longlong local_a8;
  char local_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  uint local_4c;
  longlong local_48;
  char local_40;
  undefined8 local_38;
  
  fStack_b4 = (float)((ulonglong)param_2 >> 0x20);
  local_b8 = (float)param_2;
  if (in_EDX == 9) {
    return;
  }
  local_c8 = SUB84(param_1,0);
  uStack_c4 = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_c0 = (undefined4)in_XMM0_Qb;
  uStack_bc = (undefined4)((ulonglong)in_XMM0_Qb >> 0x20);
  lVar7 = unaff_RDI[0xf];
  local_e8 = param_3;
  if ((lVar7 == 0) || (*(int *)(lVar7 + 0xc) <= in_EDX)) {
    local_98 = CONCAT44(local_98._4_4_,(int)CONCAT71((int7)((ulonglong)lVar7 >> 8),1));
    local_38 = 0;
    lVar7 = 0;
    uVar4 = local_4c;
    local_4c = param_4;
  }
  else {
    uStack_60 = in_XMM0_Qb;
    local_68 = param_1;
    lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + (longlong)in_EDX * 8);
    local_4c = param_4;
    uVar5 = FUN_00d50b00();
    if (*(char *)(lVar7 + 0x50) != '\0') {
      do {
        if ((local_res8 == 0) || (lVar10 = *(longlong *)(lVar7 + 0x28), lVar10 == 0)) {
          if ((local_e8 == 1.4013e-45) && (lVar10 = *(longlong *)(lVar7 + 0x18), lVar10 != 0)) {
            local_148 = *unaff_RSI;
            local_140 = 0;
            FUN_00d50b00();
            local_130 = 1;
            local_98 = *(ulonglong *)(lVar7 + 0x30);
            uStack_90 = 0;
            uStack_60 = 0;
            local_68 = (undefined1  [8])*(ulonglong *)(lVar7 + 0x38);
            lVar1 = *(longlong *)(lVar7 + 0x58);
            local_138 = lVar10;
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            local_120 = 1;
            local_128 = lVar1;
            FUN_01cdecb0(&local_128,local_68._0_4_,local_c8,local_b8);
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          else {
            local_118 = *unaff_RSI;
            local_110 = 0;
            lVar10 = *(longlong *)(lVar7 + 0x10);
            if (lVar10 != 0) {
              FUN_00d50b00();
            }
            local_100 = 1;
            local_98 = *(ulonglong *)(lVar7 + 0x30);
            uStack_90 = 0;
            uStack_60 = 0;
            local_68 = (undefined1  [8])*(ulonglong *)(lVar7 + 0x38);
            lVar1 = *(longlong *)(lVar7 + 0x58);
            local_108 = lVar10;
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            local_f0 = 1;
            local_f8 = lVar1;
            FUN_01cdecb0(&local_f8,local_68._0_4_,local_c8,local_b8);
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          FUN_00d50b00();
          uVar11 = 1;
          local_98 = *(ulonglong *)(lVar7 + 0x30);
          uStack_90 = 0;
          uStack_60 = 0;
          local_68 = (undefined1  [8])*(ulonglong *)(lVar7 + 0x38);
          lVar1 = *(longlong *)(lVar7 + 0x58);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_150 = 1;
          local_158 = lVar1;
          FUN_01cdecb0(&local_158,local_68._0_4_,local_c8,local_b8,lVar10,uVar11);
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        lVar10 = *(longlong *)(lVar7 + 0x60);
        if (lVar10 != lVar7) {
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          lVar7 = lVar10;
        }
      } while (lVar7 != 0);
      return;
    }
    local_38 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    local_98 = local_98 & 0xffffffff00000000;
    param_1 = local_68;
    in_XMM0_Qb = uStack_60;
    uVar4 = local_4c;
  }
  if (in_EDX == 0xf) {
    uStack_60 = in_XMM0_Qb;
    local_68 = param_1;
    (**(code **)(*unaff_RDI + 0x390))();
    local_88 = local_48;
    local_80 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_80 = '\x01';
    FUN_01d488d0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_b8 = (float)((int)fStack_b4 / 2) + DAT_023b1608;
    local_c8 = local_c8 + fStack_b4 * DAT_0239011c;
    local_e8 = (float)local_68._4_4_ + fStack_b4 * DAT_0239011c;
    auVar8._4_4_ = uStack_c4;
    auVar8._0_4_ = local_c8;
    auVar8._8_4_ = uStack_c0;
    auVar8._12_4_ = uStack_bc;
    fStack_e4 = (float)local_68._4_4_;
    uStack_e0 = uStack_60._4_4_;
    uStack_dc = uStack_60._4_4_;
    auVar9._4_4_ = local_68._4_4_;
    auVar9._0_4_ = local_e8;
    auVar9._8_4_ = uStack_60._4_4_;
    auVar9._12_4_ = uStack_60._4_4_;
    _local_68 = insertps(auVar8,auVar9,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))((int)fStack_b4 / 2,DAT_02390124 + local_b8);
    (**(code **)(*unaff_RDI + 0x3a0))();
    local_78 = local_48;
    local_70 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_70 = '\x01';
    FUN_01d488d0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    auVar3._4_4_ = uStack_c4;
    auVar3._0_4_ = local_c8;
    auVar3._8_4_ = uStack_c0;
    auVar3._12_4_ = uStack_bc;
    auVar2._4_4_ = fStack_e4;
    auVar2._0_4_ = local_e8 + DAT_02390d00;
    auVar2._8_4_ = uStack_e0;
    auVar2._12_4_ = uStack_dc;
    auVar9 = insertps(auVar3,auVar2,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar9._0_8_,local_b8);
    (**(code **)(*unaff_RDI + 0x488))((undefined1)local_4c,0xf,local_res8);
    local_a8 = local_48;
    local_a0 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_a0 = '\x01';
    FUN_01d488d0();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))();
  }
  else {
    local_d8 = *unaff_RSI;
    local_d0 = '\0';
    uVar6 = local_4c & 0xff;
    local_4c = uVar4;
    FUN_01cbadc0(in_ECX,local_b8,local_e8,uVar6);
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((char)local_98 == '\0' && lVar7 != 0) {
    FUN_00d50b20();
  }
  return;
}


