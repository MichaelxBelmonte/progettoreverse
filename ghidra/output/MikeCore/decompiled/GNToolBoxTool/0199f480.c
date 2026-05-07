// Function: FUN_0199f480
// Address: 0199f480
// Size: 5781 bytes
// Class: GNToolBoxTool


/* WARNING: Removing unreachable block (ram,0x0199f5c5) */
/* WARNING: Removing unreachable block (ram,0x0199f5d1) */
/* WARNING: Removing unreachable block (ram,0x0199f786) */
/* WARNING: Removing unreachable block (ram,0x0199f792) */

void FUN_0199f480(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  undefined7 extraout_var;
  pthread_key_t pVar7;
  longlong lVar8;
  undefined7 uVar9;
  int iVar10;
  longlong *unaff_RDI;
  longlong lVar11;
  char cVar12;
  uint uVar13;
  ulonglong uVar14;
  uint7 uVar15;
  bool bVar16;
  longlong local_348;
  char local_340;
  longlong local_328;
  char local_320;
  longlong local_318;
  char local_310;
  longlong local_308;
  char local_300;
  longlong local_2f8;
  char local_2f0;
  longlong local_2e8;
  char local_2e0;
  longlong local_2d8;
  char local_2d0;
  longlong local_2c8;
  char local_2c0;
  longlong local_2b8;
  char local_2b0;
  longlong local_2a8;
  char local_2a0;
  longlong local_298;
  char local_290;
  longlong local_288;
  char local_280;
  longlong local_278;
  char local_270;
  longlong local_268;
  char local_260;
  longlong local_258;
  char local_250;
  longlong local_248;
  char local_240;
  longlong local_238;
  char local_230;
  longlong local_228;
  char local_220;
  longlong local_218;
  char local_210;
  longlong local_208;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  undefined4 local_144;
  longlong *local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  uint local_34;
  
  if (unaff_RDI[0x3d] != 0) {
    local_58 = '\0';
    local_60 = 0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_50 = unaff_RDI[0x3d];
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar10 = -local_48._4_4_;
        }
        else {
          iVar10 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar10);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar10 = 0;
        }
        local_48 = CONCAT44(iVar10,(int)local_48);
      }
      lVar3 = (longlong)(int)local_48;
      iVar10 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar10);
      if (*(int *)(local_50 + 0xc) <= iVar10) break;
      local_60 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar3 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_50 + 0x10));
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_138 = 0;
      (**(code **)(unaff_RDI[0x28] + 0x10))();
      FUN_00d50b00();
      local_138 = '\x01';
      local_140 = unaff_RDI + 0x28;
      FUN_00e8b9a0();
      if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
        (**(code **)(*local_140 + 0x10))();
        FUN_00d50b20();
      }
    }
    param_1 = local_50;
    FUN_000be170();
  }
  if (unaff_RDI[0x3e] != 0) {
    local_58 = '\0';
    local_60 = 0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_50 = unaff_RDI[0x3e];
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar10 = -local_48._4_4_;
        }
        else {
          iVar10 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar10);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar10 = 0;
        }
        local_48 = CONCAT44(iVar10,(int)local_48);
      }
      lVar3 = (longlong)(int)local_48;
      iVar10 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar10);
      if (*(int *)(local_50 + 0xc) <= iVar10) break;
      lVar8 = *(longlong *)(local_50 + 0x10);
      local_60 = *(longlong *)(lVar8 + 8 + lVar3 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar8);
      pVar7 = (pthread_key_t)lVar8;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        pvVar4 = _pthread_getspecific(pVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_128 = 0;
        (**(code **)(unaff_RDI[0x28] + 0x10))();
        FUN_00d50b00();
        local_128 = '\x01';
        local_130 = unaff_RDI + 0x28;
        FUN_00e8b9a0();
        if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
          (**(code **)(*local_130 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    param_1 = local_50;
    FUN_000be170();
  }
  (**(code **)(*unaff_RDI + 0xa00))();
  if (local_60 == 0) {
    bVar16 = false;
    local_68 = 0;
    local_70 = 0;
  }
  else {
    (**(code **)(*unaff_RDI + 0xa00))();
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_68 = FUN_00e8b990();
    if (local_68 == 0) {
      local_70 = 0;
      local_68 = 0;
    }
    else {
      uVar5 = FUN_00d50b00();
      local_70 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
    bVar16 = local_68 != 0;
    if ((local_340 != '\0') && (local_348 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar16) goto LAB_019a0b11;
  FUN_0006e1c0();
  FUN_00e86210();
  lVar3 = DAT_027e1390;
  if (DAT_027e1390 != 0) {
    FUN_00d50b00();
  }
  uVar5 = FUN_00c841b0();
  lVar8 = local_60;
  if (local_60 == 0) {
    local_144 = (undefined4)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    local_34 = 0;
  }
  else {
    if (local_58 == '\0') {
      uVar5 = FUN_00d50b00();
      local_144 = 0;
      local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      if ((local_58 == '\0') || (local_60 == 0)) goto LAB_0199f945;
      uVar5 = FUN_00d50b20();
    }
    else {
      local_58 = '\0';
    }
    local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    local_144 = 0;
  }
LAB_0199f945:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  plVar2 = unaff_RDI + 0x28;
  local_118 = 0;
  (**(code **)(unaff_RDI[0x28] + 0x10))();
  FUN_00d50b00();
  local_118 = '\x01';
  local_328 = 0;
  local_320 = '\0';
  local_318 = lVar8;
  local_310 = '\0';
  local_120 = plVar2;
  FUN_00cbadd0(&local_318,&local_328);
  if ((local_310 != '\0') && (local_318 != 0)) {
    FUN_00d50b20();
  }
  if ((local_320 != '\0') && (local_328 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
    (**(code **)(*local_120 + 0x10))();
    FUN_00d50b20();
  }
  local_308 = local_68;
  local_300 = '\0';
  FUN_019a1b40();
  if ((local_300 != '\0') && (local_308 != 0)) {
    FUN_00d50b20();
  }
  local_108 = 0;
  plVar1 = (longlong *)(unaff_RDI[0xa5] + 0x10);
  if (unaff_RDI[0xa5] == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
  }
  local_108 = '\x01';
  local_110 = plVar1;
  FUN_00cbb340();
  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
    (**(code **)(*local_110 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0013db50();
  FUN_00e86210();
  lVar3 = DAT_027e1398;
  if (DAT_027e1398 != 0) {
    FUN_00d50b00();
  }
  local_2f8 = lVar3;
  local_2f0 = '\x01';
  uVar5 = FUN_00c841b0();
  lVar11 = local_60;
  uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
  uVar9 = (undefined7)((ulonglong)lVar3 >> 8);
  if (lVar8 == local_60) {
    uVar13 = local_34;
    if (((byte)local_144 & lVar8 != 0) == 1) {
      if (local_58 != '\0') goto LAB_0199fb60;
      FUN_00d50b00();
      uVar13 = (uint)CONCAT71(uVar9,1);
    }
LAB_0199fbb7:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      bVar16 = lVar8 != 0;
      uVar13 = (uint)CONCAT71(uVar9,1);
      lVar8 = lVar11;
      if (((byte)local_34 & bVar16) == 1) {
        FUN_00d50b20();
      }
      goto LAB_0199fbb7;
    }
    bVar16 = lVar8 != 0;
    lVar8 = lVar11;
    if (((byte)local_34 & bVar16) == 1) {
      FUN_00d50b20();
      uVar6 = extraout_var;
    }
LAB_0199fb60:
    local_58 = '\0';
    uVar13 = (uint)CONCAT71(uVar6,1);
  }
  local_34 = uVar13;
  if ((local_2f0 != '\0') && (local_2f8 != 0)) {
    FUN_00d50b20();
  }
  local_f8 = 0;
  plVar1 = (longlong *)(unaff_RDI[0xa5] + 0x10);
  if (unaff_RDI[0xa5] == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  local_2e8 = 0;
  local_2e0 = '\0';
  local_2d0 = '\0';
  local_2d8 = lVar8;
  local_100 = plVar1;
  FUN_00cbadd0(&local_2d8,&local_2e8);
  if ((local_2d0 != '\0') && (local_2d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2e0 != '\0') && (local_2e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    (**(code **)(*local_100 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0013db50();
  FUN_00e86210();
  lVar3 = DAT_027e13a0;
  if (DAT_027e13a0 != 0) {
    FUN_00d50b00();
  }
  local_2c8 = lVar3;
  local_2c0 = '\x01';
  uVar5 = FUN_00c841b0();
  lVar11 = local_60;
  uVar6 = (undefined7)((ulonglong)lVar3 >> 8);
  if (lVar8 == local_60) {
    lVar11 = lVar8;
    uVar13 = local_34;
    if (((char)local_34 == '\0') && (lVar8 != 0)) {
      if (local_58 != '\0') goto LAB_0199fd41;
      FUN_00d50b00();
      uVar13 = (uint)CONCAT71(uVar6,1);
    }
LAB_0199fdb1:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      uVar13 = (uint)CONCAT71(uVar6,1);
      if (((char)local_34 != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
        lVar8 = lVar11;
      }
      goto LAB_0199fdb1;
    }
    if (((char)local_34 != '\0') && (lVar8 != 0)) {
      uVar5 = FUN_00d50b20();
      lVar8 = lVar11;
    }
LAB_0199fd41:
    local_58 = '\0';
    uVar13 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  local_34 = uVar13;
  if ((local_2c0 != '\0') && (local_2c8 != 0)) {
    FUN_00d50b20();
  }
  local_e8 = 0;
  plVar1 = (longlong *)(unaff_RDI[0xa5] + 0x10);
  if (unaff_RDI[0xa5] == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_2b8 = 0;
  local_2b0 = '\0';
  local_2a0 = '\0';
  local_2a8 = lVar11;
  local_f0 = plVar1;
  FUN_00cbadd0(&local_2a8,&local_2b8);
  if ((local_2a0 != '\0') && (local_2a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2b0 != '\0') && (local_2b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    (**(code **)(*local_f0 + 0x10))();
    FUN_00d50b20();
  }
  FUN_011a7c20();
  FUN_00e86210();
  local_298 = DAT_027e13b0;
  if (DAT_027e13b0 != 0) {
    FUN_00d50b00();
  }
  local_290 = '\x01';
  FUN_00c841b0();
  lVar3 = local_60;
  uVar6 = (undefined7)((ulonglong)lVar8 >> 8);
  if (lVar11 == local_60) {
    lVar3 = lVar11;
    if (((char)local_34 == '\0') && (lVar11 != 0)) {
      if (local_58 != '\0') goto LAB_0199ff3b;
      uVar14 = CONCAT71(uVar6,1);
      FUN_00d50b00();
    }
    else {
      uVar14 = (ulonglong)local_34;
    }
LAB_0199ff9a:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      uVar14 = CONCAT71(uVar6,1);
      if (((char)local_34 != '\0') && (lVar11 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0199ff9a;
    }
    if (((char)local_34 != '\0') && (lVar11 != 0)) {
      FUN_00d50b20();
    }
LAB_0199ff3b:
    local_58 = '\0';
    uVar14 = CONCAT71(uVar6,1);
  }
  if ((local_290 != '\0') && (local_298 != 0)) {
    FUN_00d50b20();
  }
  local_d8 = 0;
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_d8 = '\x01';
  local_288 = 0;
  local_280 = '\0';
  local_270 = '\0';
  local_278 = lVar3;
  local_e0 = plVar2;
  FUN_00cbadd0(&local_278,&local_288);
  if ((local_270 != '\0') && (local_278 != 0)) {
    FUN_00d50b20();
  }
  if ((local_280 != '\0') && (local_288 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    (**(code **)(*local_e0 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01a014c0();
  FUN_00e86210();
  local_268 = DAT_027e13b8;
  if (DAT_027e13b8 != 0) {
    FUN_00d50b00();
  }
  local_260 = '\x01';
  uVar5 = FUN_00c841b0();
  lVar8 = local_60;
  cVar12 = (char)uVar14;
  if (lVar3 == local_60) {
    local_34 = (uint)uVar14;
    lVar8 = lVar3;
    if ((cVar12 == '\0') && (lVar3 != 0)) {
      if (local_58 != '\0') goto LAB_019a0104;
      local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      uVar14 = 0;
      FUN_00d50b00();
    }
LAB_019a015c:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar15 = (uint7)(uVar14 >> 8);
    if (local_58 == '\0') {
      if (local_60 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      if ((cVar12 != '\0') && (lVar3 != 0)) {
        uVar14 = (ulonglong)uVar15 << 8;
        uVar5 = FUN_00d50b20();
        local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      }
      goto LAB_019a015c;
    }
    if ((cVar12 != '\0') && (lVar3 != 0)) {
      uVar14 = (ulonglong)uVar15 << 8;
      uVar5 = FUN_00d50b20();
    }
LAB_019a0104:
    local_58 = '\0';
    local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  if ((local_260 != '\0') && (local_268 != 0)) {
    FUN_00d50b20();
  }
  local_c8 = 0;
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_c8 = '\x01';
  local_258 = 0;
  local_250 = '\0';
  local_240 = '\0';
  local_248 = lVar8;
  local_d0 = plVar2;
  FUN_00cbadd0(&local_248,&local_258);
  if ((local_240 != '\0') && (local_248 != 0)) {
    FUN_00d50b20();
  }
  if ((local_250 != '\0') && (local_258 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    (**(code **)(*local_d0 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01a01770();
  FUN_00e86210();
  local_238 = DAT_027e13c0;
  if (DAT_027e13c0 != 0) {
    FUN_00d50b00();
  }
  local_230 = '\x01';
  uVar5 = FUN_00c841b0();
  lVar3 = local_60;
  uVar6 = (undefined7)(uVar14 >> 8);
  if (lVar8 == local_60) {
    lVar3 = lVar8;
    if (((char)local_34 == '\0') && (lVar8 != 0)) {
      if (local_58 != '\0') goto LAB_019a02ca;
      uVar14 = CONCAT71(uVar6,1);
      local_34 = 0;
      FUN_00d50b00();
    }
    else {
      uVar14 = (ulonglong)local_34;
    }
LAB_019a0321:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        uVar5 = FUN_00d50b00();
      }
      uVar14 = CONCAT71(uVar6,1);
      if (((char)local_34 != '\0') && (lVar8 != 0)) {
        local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        FUN_00d50b20();
        uVar14 = CONCAT71(uVar6,1);
      }
      goto LAB_019a0321;
    }
    if (((char)local_34 != '\0') && (lVar8 != 0)) {
      local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      FUN_00d50b20();
    }
LAB_019a02ca:
    local_58 = '\0';
    uVar14 = CONCAT71(uVar6,1);
  }
  if ((local_230 != '\0') && (local_238 != 0)) {
    FUN_00d50b20();
  }
  local_b8 = 0;
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_b8 = '\x01';
  local_228 = 0;
  local_220 = '\0';
  local_210 = '\0';
  local_218 = lVar3;
  local_c0 = plVar2;
  FUN_00cbadd0(&local_218,&local_228);
  if ((local_210 != '\0') && (local_218 != 0)) {
    FUN_00d50b20();
  }
  if ((local_220 != '\0') && (local_228 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    (**(code **)(*local_c0 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01a014c0();
  FUN_00e86210();
  local_208 = DAT_027e3cf0;
  if (DAT_027e3cf0 != 0) {
    FUN_00d50b00();
  }
  local_200 = '\x01';
  uVar5 = FUN_00c841b0();
  lVar8 = local_60;
  cVar12 = (char)uVar14;
  if (lVar3 == local_60) {
    local_34 = (uint)uVar14;
    lVar8 = lVar3;
    if ((cVar12 == '\0') && (lVar3 != 0)) {
      if (local_58 != '\0') goto LAB_019a048b;
      local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      uVar14 = 0;
      FUN_00d50b00();
    }
LAB_019a04e3:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar15 = (uint7)(uVar14 >> 8);
    if (local_58 == '\0') {
      if (local_60 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      if ((cVar12 != '\0') && (lVar3 != 0)) {
        uVar14 = (ulonglong)uVar15 << 8;
        uVar5 = FUN_00d50b20();
        local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      }
      goto LAB_019a04e3;
    }
    if ((cVar12 != '\0') && (lVar3 != 0)) {
      uVar14 = (ulonglong)uVar15 << 8;
      uVar5 = FUN_00d50b20();
    }
LAB_019a048b:
    local_58 = '\0';
    local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  if ((local_200 != '\0') && (local_208 != 0)) {
    FUN_00d50b20();
  }
  local_a8 = 0;
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_a8 = '\x01';
  local_1f8 = 0;
  local_1f0 = '\0';
  local_1e0 = '\0';
  local_1e8 = lVar8;
  local_b0 = plVar2;
  FUN_00cbadd0(&local_1e8,&local_1f8);
  if ((local_1e0 != '\0') && (local_1e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f0 != '\0') && (local_1f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    (**(code **)(*local_b0 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0013de80();
  FUN_00e86210();
  local_1d8 = DAT_027e13c8;
  if (DAT_027e13c8 != 0) {
    FUN_00d50b00();
  }
  local_1d0 = '\x01';
  uVar5 = FUN_00c841b0();
  lVar3 = local_60;
  uVar6 = (undefined7)(uVar14 >> 8);
  if (lVar8 == local_60) {
    lVar3 = lVar8;
    uVar13 = local_34;
    if (((char)local_34 == '\0') && (lVar8 != 0)) {
      if (local_58 != '\0') goto LAB_019a0651;
      local_34 = 0;
      FUN_00d50b00();
      uVar13 = (int)CONCAT71(uVar6,1);
    }
LAB_019a06a8:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        uVar5 = FUN_00d50b00();
      }
      uVar13 = (uint)CONCAT71(uVar6,1);
      if (((char)local_34 != '\0') && (lVar8 != 0)) {
        local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        FUN_00d50b20();
        uVar13 = (int)CONCAT71(uVar6,1);
      }
      goto LAB_019a06a8;
    }
    if (((char)local_34 != '\0') && (lVar8 != 0)) {
      local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      FUN_00d50b20();
    }
LAB_019a0651:
    local_58 = '\0';
    uVar13 = (uint)CONCAT71(uVar6,1);
  }
  if ((local_1d0 != '\0') && (local_1d8 != 0)) {
    FUN_00d50b20();
  }
  local_98 = 0;
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_98 = '\x01';
  local_1c8 = 0;
  local_1c0 = '\0';
  local_1b0 = '\0';
  local_1b8 = lVar3;
  local_a0 = plVar2;
  FUN_00cbadd0(&local_1b8,&local_1c8);
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    (**(code **)(*local_a0 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01a01970();
  FUN_00e86210();
  local_1a8 = DAT_027e13d0;
  if (DAT_027e13d0 != 0) {
    FUN_00d50b00();
  }
  local_1a0 = '\x01';
  uVar5 = FUN_00c841b0();
  lVar8 = local_60;
  cVar12 = (char)uVar13;
  if (lVar3 == local_60) {
    lVar8 = lVar3;
    local_34 = uVar13;
    if ((cVar12 == '\0') && (lVar3 != 0)) {
      if (local_58 != '\0') goto LAB_019a0812;
      local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      FUN_00d50b00();
    }
LAB_019a086a:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      if ((cVar12 != '\0') && (lVar3 != 0)) {
        uVar5 = FUN_00d50b20();
        local_34 = (int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      }
      goto LAB_019a086a;
    }
    if ((cVar12 != '\0') && (lVar3 != 0)) {
      uVar5 = FUN_00d50b20();
    }
LAB_019a0812:
    local_58 = '\0';
    local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  local_88 = 0;
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_88 = '\x01';
  local_198 = 0;
  local_190 = '\0';
  local_180 = '\0';
  local_188 = lVar8;
  local_90 = plVar2;
  FUN_00cbadd0(&local_188,&local_198);
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  if ((local_190 != '\0') && (local_198 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  FUN_00115af0();
  FUN_00e86210();
  local_178 = DAT_027060a8;
  if (DAT_027060a8 != 0) {
    FUN_00d50b00();
  }
  local_170 = '\x01';
  uVar5 = FUN_00c841b0();
  lVar3 = local_60;
  if (lVar8 == local_60) {
    lVar3 = lVar8;
    cVar12 = (char)local_34;
    if (((char)local_34 == '\0') && (lVar8 != 0)) {
      if (local_58 != '\0') goto LAB_019a09cf;
      local_34 = 0;
      FUN_00d50b00();
      cVar12 = '\x01';
    }
LAB_019a0a28:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        uVar5 = FUN_00d50b00();
      }
      cVar12 = '\x01';
      if (((char)local_34 != '\0') && (lVar8 != 0)) {
        local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        FUN_00d50b20();
        cVar12 = '\x01';
      }
      goto LAB_019a0a28;
    }
    if (((char)local_34 != '\0') && (lVar8 != 0)) {
      local_34 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      FUN_00d50b20();
    }
LAB_019a09cf:
    local_58 = '\0';
    cVar12 = '\x01';
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  local_78 = 0;
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_78 = '\x01';
  local_168 = 0;
  local_160 = '\0';
  local_150 = '\0';
  local_158 = lVar3;
  local_80 = plVar2;
  FUN_00cbadd0(&local_158,&local_168);
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
  if ((cVar12 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
LAB_019a0b11:
  if (((char)local_70 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  return;
}


