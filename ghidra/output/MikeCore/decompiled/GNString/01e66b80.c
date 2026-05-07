// Function: FUN_01e66b80
// Address: 01e66b80
// Size: 2320 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01e66f38) */
/* WARNING: Removing unreachable block (ram,0x01e66f41) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e66b80(undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *in_RCX;
  uint in_EDX;
  undefined8 *unaff_RSI;
  longlong *plVar7;
  longlong *unaff_RDI;
  bool bVar8;
  float fVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 in_XMM1_Qb;
  undefined8 uVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 local_res8;
  undefined4 local_res10;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  int local_5c;
  longlong local_40;
  char local_38;
  
  local_f8 = param_2;
  uStack_f0 = in_XMM1_Qb;
  local_e8 = param_1;
  local_5c = param_4;
  if (param_4 == 0xff) {
    local_5c = (**(code **)(*unaff_RDI + 0x5c0))();
  }
  if ((in_EDX == 0x29) && (DAT_02802fb0 == 1)) {
    uVar10 = local_f8;
    uVar14 = uStack_f0;
    (**(code **)(*unaff_RDI + 0x548))();
    local_158 = *param_3;
    if (local_158 == 0) {
      (**(code **)(*unaff_RDI + 0x370))();
      lVar1 = *param_3;
      if (lVar1 == local_40) {
        if (((char)param_3[1] == '\0') && (local_40 != 0)) {
          if (local_38 != '\0') goto LAB_01e66cba;
          FUN_00d50b00();
          goto LAB_01e66cf7;
        }
LAB_01e66cfc:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          local_98 = (longlong *)CONCAT71(local_98._1_7_,(char)param_3[1]);
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *param_3 = local_40;
          if (((char)local_98 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
LAB_01e66cf7:
          *(undefined1 *)(param_3 + 1) = 1;
          goto LAB_01e66cfc;
        }
        *param_3 = local_40;
        if (((char)param_3[1] != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01e66cba:
        *(undefined1 *)(param_3 + 1) = 1;
      }
      local_158 = *param_3;
    }
    local_150 = '\0';
    FUN_01cc2100(local_5c,&local_158);
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    local_148 = *in_RCX;
    local_140 = '\0';
    local_98 = (longlong *)FUN_01d43d10();
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e63b70(DAT_02802fb0,0x29,local_res8,local_res10);
    local_c0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_c0 = '\x01';
    local_c8 = local_40;
    FUN_01d488d0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_78._0_4_ = (float)uVar10;
    local_78._4_4_ = (uint)((ulonglong)uVar10 >> 0x20);
    uStack_70 = (uint)uVar14;
    uStack_6c = (uint)((ulonglong)uVar14 >> 0x20);
    fVar9 = ((float)local_78 - local_98._0_4_) * DAT_0239011c;
    auVar12._0_4_ = _DAT_023945e0 & (uint)fVar9;
    auVar12._4_4_ = _UNK_023945e4 & local_78._4_4_;
    auVar12._8_4_ = _UNK_023945e8 & uStack_70;
    auVar12._12_4_ = _UNK_023945ec & uStack_6c;
    auVar13._4_12_ = SUB1612(auVar12 | _DAT_023945f0,4);
    auVar13._0_4_ = SUB164(auVar12 | _DAT_023945f0,0) + fVar9;
    auVar11._0_12_ = ZEXT812(0);
    auVar11._12_4_ = 0;
    auVar11 = roundss(auVar11,auVar13,0xb);
    blendps(_DAT_023b45e0,auVar11,1);
    FUN_01d48b40();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    DAT_02802fb0 = 0;
LAB_01e66ef8:
    FUN_01e63b70(DAT_02802fb0,in_EDX,local_res8,local_res10);
    local_78 = local_40;
    if (local_40 == 0) {
      local_78 = 0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    if (0x2c < in_EDX) {
      return;
    }
    if ((0x100009c23cb0U >> ((ulonglong)in_EDX & 0x3f) & 1) == 0) {
      if ((0x2000000000eU >> ((ulonglong)in_EDX & 0x3f) & 1) == 0) {
        return;
      }
      goto LAB_01e66ef8;
    }
    bVar2 = false;
    local_78 = 0;
  }
  uVar10 = (**(code **)(*unaff_RDI + 0x548))();
  local_138 = *param_3;
  local_e8 = local_f8;
  if (local_138 == 0) {
    local_f8 = uVar10;
    (**(code **)(*unaff_RDI + 0x370))();
    lVar1 = *param_3;
    if (lVar1 == local_40) {
      if (((char)param_3[1] == '\0') && (local_40 != 0)) {
        local_98 = param_3 + 1;
        if (local_38 != '\0') goto LAB_01e66ff0;
        FUN_00d50b00();
        goto LAB_01e67028;
      }
LAB_01e67032:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_98 = param_3 + 1;
      lVar3 = param_3[1];
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *param_3 = local_40;
        if (((char)lVar3 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01e67028:
        *(undefined1 *)local_98 = 1;
        goto LAB_01e67032;
      }
      *param_3 = local_40;
      if (((char)lVar3 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01e66ff0:
      *(undefined1 *)local_98 = 1;
    }
    local_138 = *param_3;
    uVar10 = local_f8;
  }
  local_f8 = uVar10;
  local_130 = '\0';
  local_f8 = FUN_01cc2100(local_5c,&local_138);
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = DAT_027fecc0;
  lVar1 = local_78;
  bVar8 = bVar2;
  if (in_EDX != 7) goto LAB_01e67285;
  plVar7 = (longlong *)*param_3;
  if (plVar7 == (longlong *)0x0) {
LAB_01e6716d:
    (**(code **)(*unaff_RDI + 0x378))();
    lVar3 = *param_3;
    if (lVar3 == local_40) {
      if (((char)param_3[1] != '\0') || (local_40 == 0)) goto LAB_01e67214;
      local_98 = param_3 + 1;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_01e6720a;
      }
    }
    else {
      local_98 = param_3 + 1;
      lVar4 = param_3[1];
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *param_3 = local_40;
        if (((char)lVar4 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
LAB_01e6720a:
        *(undefined1 *)local_98 = 1;
LAB_01e67214:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01e67228;
      }
      *param_3 = local_40;
      if (((char)lVar4 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)local_98 = 1;
  }
  else {
    if (DAT_027fecc0 != (longlong *)0x0) {
      FUN_00d50b00();
      plVar7 = (longlong *)*param_3;
    }
    (**(code **)(*plVar7 + 0x148))();
    local_b0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_b0 = '\x01';
    local_b8 = local_40;
    cVar6 = (**(code **)(*plVar5 + 0x50))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (cVar6 != '\0') goto LAB_01e6716d;
  }
LAB_01e67228:
  lVar3 = unaff_RDI[0x13];
  if (lVar3 == local_78) {
    if ((!bVar2) && (lVar3 != 0)) {
      FUN_00d50b00();
      bVar8 = true;
    }
  }
  else {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    bVar8 = true;
    lVar1 = lVar3;
    if ((bVar2) && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_01e67285:
  local_78 = lVar1;
  local_128 = *param_3;
  local_120 = '\0';
  FUN_01d48a10();
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RDI[4];
  if (lVar1 == 0) {
    if (local_78 == 0) {
      (**(code **)(*unaff_RDI + 0x490))(local_res8,in_EDX,local_res10);
      local_a0 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_a0 = '\x01';
      local_a8 = local_40;
      FUN_01d488d0();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_118 = local_78;
      local_110 = '\0';
      FUN_01d488d0();
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_d0 = 0;
    FUN_00d50b00();
    local_d0 = '\x01';
    local_d8 = lVar1;
    FUN_01d488d0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  local_108 = *in_RCX;
  local_100 = '\0';
  (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))();
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_78 != 0)) {
    FUN_00d50b20();
  }
  return;
}


