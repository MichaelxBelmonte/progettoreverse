// Function: FUN_01da94b0
// Address: 01da94b0
// Size: 2696 bytes
// Class: GNString


void FUN_01da94b0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *unaff_RSI;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_190;
  undefined1 local_188;
  longlong local_180;
  undefined1 local_178;
  longlong local_170;
  undefined1 local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  undefined8 *local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  undefined8 *local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  undefined4 local_94;
  longlong local_90;
  char local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  local_a0 = param_2;
  iVar6 = FUN_01d3a5a0();
  if (((iVar6 == 2) || (iVar6 = FUN_01d3a5a0(), iVar6 == 8)) || (iVar6 = FUN_01d3a5a0(), iVar6 == 9)
     ) {
    iVar6 = FUN_01d3a5a0();
    if (iVar6 == 9) {
      uVar12 = FUN_01d3b600();
      local_190 = *unaff_RSI;
      local_188 = 0;
      FUN_01da5610(uVar12,&local_190);
      lVar9 = local_48;
      if (local_48 == 0) {
        lVar9 = 0;
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if (local_40 == '\0') {
          FUN_00d50b00();
        }
      }
      FUN_01d3b600();
    }
    else {
      iVar6 = FUN_01d3a5a0();
      if (iVar6 == 8) {
        uVar12 = FUN_01d3b600();
        local_180 = *unaff_RSI;
        local_178 = 0;
        FUN_01da5610(uVar12,&local_180);
        lVar9 = local_48;
        if (local_48 == 0) {
          lVar9 = 0;
          bVar2 = false;
        }
        else {
          bVar2 = true;
          if (local_40 == '\0') {
            FUN_00d50b00();
          }
        }
        FUN_01d3b600();
      }
      else {
        local_170 = *unaff_RSI;
        local_168 = 0;
        FUN_01da5610(extraout_XMM0_Da,&local_170);
        lVar9 = local_48;
        if (local_48 == 0) {
          lVar9 = 0;
          bVar2 = false;
        }
        else {
          bVar2 = true;
          if (local_40 == '\0') {
            FUN_00d50b00();
          }
        }
      }
    }
    if (lVar9 == 0) goto LAB_01da9786;
    if (*local_a0 != 0) {
      local_70 = lVar9;
      FUN_01f27fe0();
      *(undefined1 *)(local_48 + 0xf8) = 0;
      if (local_40 != '\0') {
        FUN_00d50b20();
      }
      uVar12 = FUN_01caf660();
      local_158 = '\0';
      local_160 = lVar9;
      uVar7 = FUN_01cafe60(uVar12,&local_160);
      lVar10 = local_48;
      if (local_48 == 0) {
        lVar10 = 0;
        uVar7 = 0;
        local_78 = 0;
      }
      else if (local_40 == '\0') {
        uVar7 = FUN_00d50b00();
        uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        local_78 = uVar7;
        if ((local_40 != '\0') && (local_48 != 0)) {
          uVar7 = FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
        uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        local_78 = uVar7;
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        uVar7 = FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        uVar7 = FUN_00d50b20();
      }
      local_80 = lVar10;
      if ((lVar10 == 0) || (uVar7 = FUN_01caf530(), lVar11 = local_48, local_48 == 0)) {
        local_94 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        local_38 = 0;
LAB_01da9863:
        iVar6 = FUN_01d3a5a0();
        if ((iVar6 != 2) && (iVar6 = FUN_01d3a5a0(), iVar6 != 8)) {
          lVar10 = local_80;
          lVar11 = local_38;
          if ((char)local_94 != '\0') {
            lVar11 = 0;
            lVar9 = local_70;
            goto LAB_01da9b40;
          }
          goto LAB_01da9a65;
        }
        lVar9 = local_70;
        plVar1 = (longlong *)*local_a0;
        local_150 = local_70;
        local_148 = '\0';
        uVar12 = FUN_01caeba0();
        local_e0 = local_48;
        local_d8 = 0;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            uVar12 = FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        lVar11 = local_38;
        lVar10 = local_80;
        local_d8 = '\x01';
        cVar4 = (**(code **)(*plVar1 + 0x3b8))(uVar12,0);
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_148 != '\0') && (local_150 != 0)) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') goto LAB_01da9ef3;
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_026717b8;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        *(undefined8 *)((longlong)puVar8 + 0x2c) = 0;
        *(undefined8 *)((longlong)puVar8 + 0x34) = 0;
        (*DAT_026717d0)();
        local_140 = lVar9;
        local_138 = '\0';
        uVar12 = FUN_01caeb20();
        if ((local_138 != '\0') && (local_140 != 0)) {
          uVar12 = FUN_00d50b20();
        }
        local_128 = '\0';
        local_130 = puVar8;
        (**(code **)(*(longlong *)*local_a0 + 0x3b8))(uVar12,1);
        if ((local_128 != '\0') && (local_130 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (*(int *)(lVar11 + 0xc) == 0) {
          local_38 = lVar11;
          local_94 = 0;
          goto LAB_01da9863;
        }
LAB_01da9a65:
        FUN_01d3a5a0();
        FUN_00d46530();
        lVar3 = local_68;
        lVar9 = local_70;
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_48 = lVar3;
        local_40 = '\0';
        uVar5 = FUN_00d23d70();
        local_38 = CONCAT71(local_38._1_7_,uVar5);
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((char)local_38 == '\0') goto LAB_01da9b40;
        plVar1 = (longlong *)*local_a0;
        local_120 = lVar9;
        local_118 = '\0';
        uVar12 = FUN_01caeba0();
        local_d0 = local_48;
        local_c8 = 0;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            uVar12 = FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_c8 = '\x01';
        cVar4 = (**(code **)(*plVar1 + 0x3b8))(uVar12,0);
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_118 != '\0') && (local_120 != 0)) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') goto LAB_01da9ef3;
        puVar8 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &DAT_026717b8;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        *(undefined8 *)((longlong)puVar8 + 0x2c) = 0;
        *(undefined8 *)((longlong)puVar8 + 0x34) = 0;
        (*DAT_026717d0)();
        local_110 = lVar9;
        local_108 = '\0';
        FUN_01caeb20();
        if ((local_108 != '\0') && (local_110 != 0)) {
          FUN_00d50b20();
        }
        iVar6 = FUN_01d3a5a0();
        if (iVar6 == 2) {
          FUN_01caec40();
          local_38 = local_68;
          uVar12 = FUN_00d46300();
          local_c0 = local_90;
          local_b8 = 0;
          if (local_88 == '\0') {
            if (local_90 != 0) {
              uVar12 = FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          lVar3 = DAT_027f1fd8;
          local_b8 = '\x01';
          if (DAT_027f1fd8 != 0) {
            uVar12 = FUN_00d50b00();
          }
          local_48 = lVar3;
          local_40 = '\0';
          FUN_00ca0840(uVar12,&local_48);
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        iVar6 = FUN_01d3a5a0();
        uVar12 = extraout_XMM0_Da_00;
        if (iVar6 == 9) {
          FUN_01caec40();
          uVar12 = FUN_00d46300();
          local_b0 = local_90;
          local_a8 = 0;
          if (local_88 == '\0') {
            if (local_90 != 0) {
              uVar12 = FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          lVar3 = DAT_027f1fd8;
          local_a8 = '\x01';
          if (DAT_027f1fd8 != 0) {
            uVar12 = FUN_00d50b00();
          }
          local_48 = lVar3;
          local_40 = '\0';
          uVar12 = FUN_00ca0840(uVar12,&local_48);
          if ((local_40 != '\0') && (local_48 != 0)) {
            uVar12 = FUN_00d50b20();
          }
          if (lVar3 != 0) {
            uVar12 = FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            uVar12 = FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            uVar12 = FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            uVar12 = FUN_00d50b20();
          }
        }
        local_f8 = '\0';
        local_100 = puVar8;
        (**(code **)(*(longlong *)*local_a0 + 0x3b8))(uVar12,1);
        if ((local_f8 != '\0') && (local_100 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      goto LAB_01da9ef3;
    }
    lVar11 = 0;
    local_78 = 0;
    lVar10 = 0;
  }
  else {
    bVar2 = false;
LAB_01da9786:
    local_78 = 0;
    lVar11 = 0;
    lVar10 = 0;
    lVar9 = 0;
  }
LAB_01da9b40:
  local_f0 = *unaff_RSI;
  local_e8 = '\0';
  FUN_01d82ea0();
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
LAB_01da9ef3:
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_78 != '\0') && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  return;
}


