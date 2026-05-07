// Function: FUN_00bb43f0
// Address: 00bb43f0
// Size: 3710 bytes
// Class: GNData
// String references:
//   "GNData"
//   "bext"


/* WARNING: Removing unreachable block (ram,0x00bb44b9) */
/* WARNING: Removing unreachable block (ram,0x00bb44c5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00bb43f0(void)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *unaff_RSI;
  longlong **pplVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong *local_2a8;
  undefined1 local_2a0;
  longlong *local_298;
  undefined1 local_290;
  longlong *local_288;
  undefined1 local_280;
  longlong *local_278;
  undefined1 local_270;
  longlong *local_268;
  undefined1 local_260;
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
  undefined8 *local_1d8;
  undefined1 local_1d0;
  undefined1 local_1c0;
  undefined1 local_1b0;
  undefined1 local_1a0;
  undefined1 local_190;
  undefined1 local_180;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  int local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  undefined8 *local_38;
  
  if (*unaff_RSI == 0) {
    return 0;
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar5 = (longlong)&DAT_0256d868;
  plVar5[2] = 0;
  *(undefined8 *)((longlong)plVar5 + 0x1c) = 0;
  *(undefined8 *)((longlong)plVar5 + 0x24) = 0;
  *(undefined4 *)((longlong)plVar5 + 0x2c) = 0;
  (*DAT_0256d880)();
  local_38 = puVar4;
  FUN_00cccf90();
  FUN_00ccce90();
  uVar13 = FUN_00ccce80();
  local_160 = DAT_02765350;
  if (DAT_02765350 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_158 = '\x01';
  uVar13 = FUN_000175c0(uVar13,&local_160);
  plVar10 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_1c0 = 1;
  local_2a0 = 0;
  local_2a8 = plVar5;
  uVar13 = FUN_00bb59c0(uVar13,&local_2a8);
  if (plVar10 != (longlong *)0x0) {
    uVar13 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  lVar7 = DAT_02765358;
  if (DAT_02765358 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_150 = lVar7;
  local_148 = '\x01';
  uVar13 = FUN_000175c0(uVar13,&local_150);
  plVar10 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_1b0 = 1;
  local_290 = 0;
  local_298 = plVar5;
  uVar13 = FUN_00bb59c0(uVar13,&local_298);
  if (plVar10 != (longlong *)0x0) {
    uVar13 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  lVar7 = DAT_02765360;
  if (DAT_02765360 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_140 = lVar7;
  local_138 = '\x01';
  uVar13 = FUN_000175c0(uVar13,&local_140);
  plVar10 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_1a0 = 1;
  local_280 = 0;
  local_288 = plVar5;
  uVar13 = FUN_00bb59c0(uVar13,&local_288);
  if (plVar10 != (longlong *)0x0) {
    uVar13 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  lVar7 = DAT_02765368;
  if (DAT_02765368 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_130 = lVar7;
  local_128 = '\x01';
  uVar13 = FUN_000175c0(uVar13,&local_130);
  plVar10 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_190 = 1;
  local_270 = 0;
  local_278 = plVar5;
  uVar13 = FUN_00bb59c0(uVar13,&local_278);
  if (plVar10 != (longlong *)0x0) {
    uVar13 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  lVar7 = DAT_02765370;
  if (DAT_02765370 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_120 = lVar7;
  local_118 = '\x01';
  uVar13 = FUN_000175c0(uVar13,&local_120);
  plVar10 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_180 = 1;
  local_260 = 0;
  local_268 = plVar5;
  uVar13 = FUN_00bb59c0(uVar13,&local_268);
  if (plVar10 != (longlong *)0x0) {
    uVar13 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  lVar7 = DAT_02765378;
  if (DAT_02765378 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_110 = lVar7;
  local_108 = '\x01';
  uVar13 = FUN_000175c0(uVar13,&local_110);
  plVar10 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != (longlong *)0x0) && (uVar13 = FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != (longlong *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  if (plVar10 == (longlong *)0x0) {
    uVar13 = FUN_00ccdf90(uVar13,0);
    if ((local_240 != '\0') && (local_248 != 0)) {
      uVar13 = FUN_00d50b20();
    }
  }
  else {
    uVar6 = FUN_00d45790();
    uVar13 = FUN_00ccdf90(extraout_XMM0_Da,uVar6);
    if ((local_250 != '\0') && (local_258 != 0)) {
      uVar13 = FUN_00d50b20();
    }
  }
  lVar7 = DAT_02765380;
  if (DAT_02765380 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_100 = lVar7;
  local_f8 = '\x01';
  uVar13 = FUN_000175c0(uVar13,&local_100);
  plVar9 = local_60;
  if (plVar10 == local_60) {
joined_r0x00bb4a5d:
    plVar9 = plVar10;
    if (local_58 != '\0') {
LAB_00bb4a8b:
      if (local_60 != (longlong *)0x0) {
        uVar13 = FUN_00d50b20();
      }
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      if (plVar10 != (longlong *)0x0) {
        uVar13 = FUN_00d50b20();
        plVar10 = plVar9;
        goto joined_r0x00bb4a5d;
      }
      if (local_58 == '\0') goto LAB_00bb4a99;
      goto LAB_00bb4a8b;
    }
    if (plVar10 != (longlong *)0x0) {
      uVar13 = FUN_00d50b20();
    }
    local_58 = '\0';
  }
LAB_00bb4a99:
  if ((local_f8 != '\0') && (local_100 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  local_68 = plVar9;
  if (plVar9 == (longlong *)0x0) {
    uVar13 = FUN_00ccdf10(uVar13,0);
    if ((local_220 != '\0') && (local_228 != 0)) {
      uVar13 = FUN_00d50b20();
    }
  }
  else {
    sVar3 = FUN_00d45870();
    uVar13 = FUN_00ccdf10(extraout_XMM0_Da_00,(int)sVar3);
    if ((local_230 != '\0') && (local_238 != 0)) {
      uVar13 = FUN_00d50b20();
    }
  }
  lVar7 = DAT_02765388;
  if (DAT_02765388 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_f0 = lVar7;
  local_e8 = '\x01';
  pplVar12 = &local_60;
  uVar13 = FUN_000175c0(uVar13,&local_f0);
  plVar10 = local_60;
  if ((DAT_026d0220 == '\0') &&
     (iVar11 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_02, iVar11 != 0)) {
    _DAT_02789148 = FUN_00d4fe50();
    DAT_02789130 = "GNData";
    _DAT_02789138 = 0x28;
    _DAT_02789140 = FUN_000378a0;
    _DAT_02789150 = 0;
    uRam0000000002789158 = 0;
    _DAT_02789160 = 0;
    uRam0000000002789168 = 0;
    _DAT_02789170 = 0;
    uRam0000000002789178 = 0;
    _DAT_02789180 = 0;
    uRam0000000002789188 = 0;
    _DAT_02789190 = 0;
    uRam0000000002789198 = 0;
    _DAT_027891a0 = 0;
    uRam00000000027891a8 = 0;
    _DAT_027891b0 = 0;
    uRam00000000027891b8 = 0;
    _DAT_027891c0 = 0;
    uRam00000000027891c8 = 0;
    _DAT_027891d0 = 0;
    uRam00000000027891d8 = 0;
    _DAT_027891e0 = 0;
    uRam00000000027891e8 = 0;
    _DAT_027891f0 = 0;
    uVar13 = ___cxa_guard_release();
  }
  if (plVar10 == (longlong *)0x0) {
LAB_00bb4b98:
    pplVar12 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar13 = extraout_XMM0_Da_01;
    if (cVar2 == '\0') goto LAB_00bb4b98;
  }
  plVar10 = *pplVar12;
  if (*(char *)(pplVar12 + 1) == '\0') {
    if (plVar10 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar12 + 1) = 0;
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  local_70 = plVar10;
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  lVar7 = DAT_02765390;
  if (DAT_02765390 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_e0 = lVar7;
  local_d8 = '\x01';
  pplVar12 = &local_60;
  FUN_000175c0(uVar13,&local_e0);
  plVar9 = local_60;
  plVar10 = local_70;
  if ((DAT_026d0220 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
    _DAT_02789148 = FUN_00d4fe50();
    DAT_02789130 = "GNData";
    _DAT_02789138 = 0x28;
    _DAT_02789140 = FUN_000378a0;
    _DAT_02789150 = 0;
    uRam0000000002789158 = 0;
    _DAT_02789160 = 0;
    uRam0000000002789168 = 0;
    _DAT_02789170 = 0;
    uRam0000000002789178 = 0;
    _DAT_02789180 = 0;
    uRam0000000002789188 = 0;
    _DAT_02789190 = 0;
    uRam0000000002789198 = 0;
    _DAT_027891a0 = 0;
    uRam00000000027891a8 = 0;
    _DAT_027891b0 = 0;
    uRam00000000027891b8 = 0;
    _DAT_027891c0 = 0;
    uRam00000000027891c8 = 0;
    _DAT_027891d0 = 0;
    uRam00000000027891d8 = 0;
    _DAT_027891e0 = 0;
    uRam00000000027891e8 = 0;
    _DAT_027891f0 = 0;
    ___cxa_guard_release();
    plVar10 = local_70;
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_00bb4c6c;
  }
  pplVar12 = (longlong **)&DAT_02802688;
LAB_00bb4c6c:
  plVar9 = *pplVar12;
  plVar1 = plVar10;
  if (plVar10 != plVar9) {
    plVar1 = plVar9;
    if (*(char *)(pplVar12 + 1) == '\0') {
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if (plVar10 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      if (plVar10 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      *(undefined1 *)(pplVar12 + 1) = 0;
    }
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_70 = plVar1;
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  lVar7 = DAT_02765398;
  if (DAT_02765398 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar7;
  local_c8 = '\x01';
  FUN_000175c0();
  puVar4 = local_38;
  local_78 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (local_78 != (longlong *)0x0) {
    local_58 = '\0';
    local_60 = (longlong *)0x0;
    local_50 = local_78;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar11 = -local_48._4_4_;
        }
        else {
          iVar11 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar11);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar11 = 0;
        }
        local_48 = CONCAT44(iVar11,(int)local_48);
      }
      lVar7 = (longlong)(int)local_48;
      iVar8 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar8);
      iVar11 = *(int *)((longlong)local_50 + 0xc);
      if (iVar11 <= iVar8) break;
      local_60 = *(longlong **)(local_50[2] + 8 + lVar7 * 8);
      if (local_60 != (longlong *)0x0) {
        local_a8 = 0;
        local_b0 = 0;
        local_98 = 0xffffffff;
        local_90 = 0;
        local_98._4_4_ = 0;
        local_a0 = local_60;
        while( true ) {
          if (local_98._4_4_ != 0) {
            if (local_98._4_4_ < 1) {
              iVar11 = -local_98._4_4_;
            }
            else {
              iVar11 = (int)local_98 - local_98._4_4_;
              local_98 = CONCAT44(local_98._4_4_,iVar11);
              FUN_00d23690();
              local_90 = local_90 + local_98._4_4_;
              iVar11 = 0;
            }
            local_98 = CONCAT44(iVar11,(int)local_98);
          }
          lVar7 = (longlong)(int)local_98;
          iVar11 = (int)local_98 + 1;
          local_98 = CONCAT44(local_98._4_4_,iVar11);
          if (*(int *)((longlong)local_a0 + 0xc) <= iVar11) break;
          local_b0 = *(undefined8 *)(local_a0[2] + 8 + lVar7 * 8);
          uVar13 = FUN_00d8cf90(local_a0[2],4);
          local_88 = local_c0;
          local_80 = 0;
          if (local_b8 == '\0') {
            if (local_c0 != 0) {
              uVar13 = FUN_00d50b00();
            }
          }
          else {
            local_b8 = '\0';
          }
          puVar4 = local_38;
          local_80 = '\x01';
          uVar13 = FUN_00ccdbb0(uVar13,&local_88);
          if ((local_210 != '\0') && (local_218 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((((int)local_98 != *(int *)((longlong)local_a0 + 0xc) + -1) &&
              (FUN_00ccdee0(uVar13,0x2c), local_200 != '\0')) && (local_208 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00018280();
        iVar11 = *(int *)((longlong)local_50 + 0xc);
        iVar8 = (int)local_48;
      }
      if (iVar8 != iVar11 + -1) {
        local_b0 = CONCAT62(local_b0._2_6_,0xa0d);
        (**(code **)(*plVar5 + 0x388))(2,&local_b0);
        if ((local_1f0 != '\0') && (local_1f8 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00bb8480();
  }
  uVar13 = (**(code **)(*plVar5 + 0x368))();
  if ((local_1e0 != '\0') && (local_1e8 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  local_1d0 = 0;
  local_1d8 = puVar4;
  uVar13 = FUN_00bb0460(uVar13,&local_1d8);
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_70 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_68 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return uVar13;
}


