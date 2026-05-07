// Function: FUN_0166dcf0
// Address: 0166dcf0
// Size: 4491 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x0166e0b0) */
/* WARNING: Removing unreachable block (ram,0x0166e0bc) */
/* WARNING: Removing unreachable block (ram,0x0166e29e) */
/* WARNING: Removing unreachable block (ram,0x0166e2aa) */

void FUN_0166dcf0(pthread_key_t param_1,uint param_2,undefined4 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  int iVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar11;
  char cVar12;
  undefined4 uVar13;
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
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  longlong local_b0;
  uint local_a4;
  longlong local_a0;
  char local_98;
  undefined4 local_8c;
  char local_74;
  longlong local_68;
  char local_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  longlong local_40;
  longlong local_38;
  
  pVar9 = param_1;
  local_8c = param_3;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124df10();
  lVar6 = local_68;
  if ((((local_60 == '\0') && (local_68 != 0)) && (FUN_00d50b00(), local_60 != '\0')) &&
     (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = lVar6;
  pvVar3 = _pthread_getspecific(pVar9);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d610();
  lVar11 = local_68;
  if (((local_60 == '\0') && (local_68 != 0)) &&
     ((FUN_00d50b00(), local_60 != '\0' && (local_68 != 0)))) {
    FUN_00d50b20();
  }
  local_b8 = lVar11;
  pvVar3 = _pthread_getspecific(pVar9);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d610();
  lVar2 = local_68;
  if (((local_60 == '\0') && (local_68 != 0)) &&
     ((FUN_00d50b00(), local_60 != '\0' && (local_68 != 0)))) {
    FUN_00d50b20();
  }
  local_40 = lVar2;
  pvVar3 = _pthread_getspecific(pVar9);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d900();
  lVar2 = local_68;
  if ((((local_60 == '\0') && (local_68 != 0)) && (FUN_00d50b00(), local_60 != '\0')) &&
     (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar9);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d900();
  local_38 = local_68;
  if (((local_60 == '\0') && (local_68 != 0)) &&
     ((FUN_00d50b00(), local_60 != '\0' && (local_68 != 0)))) {
    FUN_00d50b20();
  }
  local_74 = (char)param_1;
  if ((char)param_2 == '\0') {
    pvVar3 = _pthread_getspecific(pVar9);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016cbba0();
    local_a0 = local_68;
    local_98 = 0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_98 = '\x01';
    FUN_0132d960();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar9);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(pVar9);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134a950();
    FUN_0134a900();
    lVar8 = local_40;
    if (((local_74 != '\0') && (local_40 != 0)) && (lVar11 != 0)) {
      pvVar3 = _pthread_getspecific(pVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_258 = local_40;
      local_250 = '\0';
      local_248 = lVar11;
      local_240 = '\0';
      uVar4 = FUN_00e7bdb0();
      uVar5 = FUN_00e7bdb0();
      local_230 = '\0';
      local_238 = 0;
      pVar9 = (pthread_key_t)&local_248;
      FUN_01516650(0,&local_258,uVar4,uVar5);
      lVar8 = local_40;
      if ((local_230 != '\0') && (local_238 != 0)) {
        FUN_00d50b20();
      }
      if ((local_240 != '\0') && (local_248 != 0)) {
        FUN_00d50b20();
      }
      if ((local_250 != '\0') && (local_258 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((((char)local_8c != '\0') && (lVar8 != 0)) && (lVar11 != 0)) {
      pvVar3 = _pthread_getspecific(pVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_228 = local_38;
      local_220 = '\0';
      local_218 = local_40;
      local_210 = '\0';
      local_208 = lVar11;
      local_200 = '\0';
      uVar4 = FUN_00e7bdb0();
      uVar5 = FUN_00e7bdb0();
      local_1f0 = '\0';
      local_1f8 = 0;
      pVar9 = (pthread_key_t)&local_208;
      FUN_01516720(0,&local_218,uVar4,uVar5);
      lVar8 = local_40;
      if ((local_1f0 != '\0') && (local_1f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_200 != '\0') && (local_208 != 0)) {
        FUN_00d50b20();
      }
      if ((local_210 != '\0') && (local_218 != 0)) {
        FUN_00d50b20();
      }
      if ((local_220 != '\0') && (local_228 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_74 == '\0') {
      pvVar3 = _pthread_getspecific(pVar9);
      if ((pvVar3 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar9 = (pthread_key_t)local_38;
      }
      lVar8 = local_40;
      local_1e8 = lVar2;
      local_1e0 = '\0';
      FUN_01512830();
      if ((local_1e0 != '\0') && (local_1e8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    lVar8 = local_40;
    if (((local_74 == '\0') && (local_40 != 0)) && (lVar11 != 0)) {
      pvVar3 = _pthread_getspecific(pVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_1d8 = lVar2;
      local_1d0 = '\0';
      local_1c8 = lVar11;
      local_1c0 = '\0';
      local_1b8 = local_40;
      local_1b0 = '\0';
      uVar4 = FUN_00e7bdb0();
      uVar5 = FUN_00e7bdb0();
      local_1a0 = '\0';
      local_1a8 = 0;
      pVar9 = (pthread_key_t)&local_1b8;
      FUN_01516650(0,&local_1c8,uVar4,uVar5);
      lVar8 = local_40;
      if ((local_1a0 != '\0') && (local_1a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1b0 != '\0') && (local_1b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1c0 != '\0') && (local_1c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1d0 != '\0') && (local_1d8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((char)local_8c == '\0') {
    if ((char)param_2 == '\0') {
      pvVar3 = _pthread_getspecific(pVar9);
      if ((pvVar3 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar9 = (pthread_key_t)local_38;
      }
      local_198 = lVar2;
      local_190 = '\0';
      FUN_01512890();
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
    }
    else if ((lVar8 != 0) && (lVar11 != 0)) {
      pvVar3 = _pthread_getspecific(pVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_188 = lVar2;
      local_180 = '\0';
      local_178 = lVar11;
      local_170 = '\0';
      local_168 = local_40;
      local_160 = '\0';
      uVar4 = FUN_00e7bdb0();
      uVar5 = FUN_00e7bdb0();
      local_150 = '\0';
      local_158 = 0;
      pVar9 = (pthread_key_t)&local_168;
      FUN_01516720(0,&local_178,uVar4,uVar5);
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
      if ((local_170 != '\0') && (local_178 != 0)) {
        FUN_00d50b20();
      }
      if ((local_180 != '\0') && (local_188 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  pvVar3 = _pthread_getspecific(pVar9);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_148 = *unaff_RSI;
  local_140 = '\0';
  FUN_0124c710();
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  FUN_01664ba0();
  local_a4 = param_2;
  if (*(longlong *)(unaff_RDI + 0xa8) != 0) {
    local_60 = '\0';
    local_68 = 0;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    uVar1 = (char)local_8c;
    local_58 = *(longlong *)(unaff_RDI + 0xa8);
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar10 = -local_50._4_4_;
        }
        else {
          iVar10 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar10);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar10 = 0;
        }
        local_50 = CONCAT44(iVar10,(int)local_50);
      }
      lVar6 = (longlong)(int)local_50;
      iVar10 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar10);
      if (*(int *)(local_58 + 0xc) <= iVar10) break;
      local_68 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar6 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_58 + 0x10));
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_138 = *unaff_RSI;
      local_130 = '\0';
      FUN_01652930(local_74,param_2 & 0xff,uVar1);
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar6 = local_58;
    FUN_0049cc10();
    pVar9 = (pthread_key_t)lVar6;
    lVar6 = local_b0;
    lVar11 = local_b8;
  }
  cVar12 = (char)local_a4;
  if ((local_74 != '\0') || ((char)local_8c != '\0')) {
    FUN_0167ab60();
    pvVar3 = _pthread_getspecific(pVar9);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01537ab0();
    lVar8 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      local_60 = '\0';
      local_68 = 0;
      local_58 = lVar8;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_50._4_4_ = 0;
      uVar1 = (char)local_8c;
      while( true ) {
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar10 = -local_50._4_4_;
          }
          else {
            iVar10 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar10);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar10 = 0;
          }
          local_50 = CONCAT44(iVar10,(int)local_50);
        }
        lVar6 = (longlong)(int)local_50;
        iVar10 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar10);
        if (*(int *)(local_58 + 0xc) <= iVar10) break;
        local_68 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar6 * 8);
        pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_58 + 0x10));
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_d0 = 0;
        FUN_00d50b00();
        local_d0 = '\x01';
        local_d8 = unaff_RDI;
        FUN_01710690(uVar1,local_74);
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_0166fd40();
      FUN_00d50b20();
      cVar12 = (char)local_a4;
      lVar6 = local_b0;
      lVar11 = local_b8;
    }
  }
  if (cVar12 != '\0') {
    *(undefined1 *)(unaff_RDI + 0x107) = 0;
    if (*(longlong *)(unaff_RDI + 0x108) != 0) {
      *(undefined8 *)(unaff_RDI + 0x108) = 0;
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x110) != 0) {
      *(undefined8 *)(unaff_RDI + 0x110) = 0;
      FUN_00d50b20();
    }
  }
  FUN_0184a0e0();
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  uVar13 = (**(code **)(*plVar7 + 0x18))();
  lVar8 = DAT_027c8288;
  local_110 = '\0';
  local_118 = lVar6;
  if (DAT_027c8288 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_68 = lVar8;
  local_60 = '\0';
  uVar13 = FUN_00ca0840(uVar13,&local_68);
  if ((local_60 != '\0') && (local_68 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  if (lVar8 != 0) {
    uVar13 = FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  lVar8 = DAT_027087c0;
  local_108 = *unaff_RSI;
  local_100 = '\0';
  if (DAT_027087c0 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_68 = lVar8;
  local_60 = '\0';
  FUN_00ca0840(uVar13,&local_68);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_f8 = DAT_027086a8;
  if (DAT_027086a8 != 0) {
    FUN_00d50b00();
  }
  local_f0 = '\x01';
  local_c0 = 0;
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  lVar8 = local_40;
  local_c0 = '\x01';
  local_e0 = '\0';
  local_e8 = plVar7;
  local_c8 = unaff_RDI;
  FUN_00d40470(&local_e8,&local_c8,3,3);
  if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  return;
}


