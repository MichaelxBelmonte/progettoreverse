// Function: FUN_0075a190
// Address: 0075a190
// Size: 6234 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0075a190(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined7 uVar7;
  undefined7 extraout_var;
  pthread_key_t pVar8;
  longlong *plVar9;
  longlong **pplVar10;
  int iVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong *local_1e0;
  char local_1d8;
  longlong *local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong *local_1b0;
  char local_1a8;
  longlong *local_1a0;
  char local_198;
  longlong *local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong local_110;
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
  longlong local_b8;
  char local_b0;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  undefined8 local_88;
  int local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  undefined1 local_31;
  
  local_c0 = (longlong *)CONCAT44(local_c0._4_4_,param_3);
  lVar5 = *param_1;
  lVar1 = unaff_RDI[0x18];
  if (lVar1 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x18] = lVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  pVar8 = (pthread_key_t)param_1;
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_004a5a00();
  lVar5 = DAT_026f6fb0;
  if (cVar3 == '\0') {
    uVar13 = extraout_XMM0_Da;
    if (DAT_026f6fb0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    lVar1 = DAT_02729500;
    if (DAT_02729500 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_210 = lVar1;
    local_208 = '\x01';
    FUN_01f6ca30(uVar13,&local_210);
    plVar9 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
         (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_208 != '\0') && (local_210 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    local_200 = 0;
    local_1f8 = '\0';
    FUN_01f6c9b0();
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar9 + 0x5e0))();
    FUN_00d50b20();
  }
  local_1f0 = *param_2;
  local_1e8 = '\0';
  (**(code **)(*unaff_RDI + 0x470))();
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x628))();
  plVar9 = local_60;
  if ((((local_58 == '\0') && (local_60 != (longlong *)0x0)) && (FUN_00d50b00(), local_58 != '\0'))
     && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_140 = param_2;
  (**(code **)(*unaff_RDI + 0x498))();
  plVar12 = local_60;
  if (((local_58 == '\0') && (local_60 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_58 != '\0' && (local_60 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  local_31 = 1;
  local_68 = plVar9;
  (**(code **)(*plVar12 + 0x468))();
  local_68 = plVar9;
  (**(code **)(*plVar12 + 0x470))();
  local_68 = plVar9;
  FUN_00cafd20();
  (**(code **)(*unaff_RDI + 0x628))();
  plVar2 = local_60;
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x628))();
    local_120 = local_60;
    local_118 = 0;
    if (local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_118 = '\x01';
    (**(code **)(*plVar12 + 0x3a8))();
    if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar5 = *unaff_RSI;
  lVar1 = unaff_RDI[0xf];
  if (lVar1 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0xf] = lVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((char)local_c0 != '\0') {
    (**(code **)(*unaff_RDI + 0x628))();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_012ccb50();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      (**(code **)(*unaff_RDI + 0x628))();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0075c8d0();
      local_110 = local_b8;
      local_108 = 0;
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      local_108 = '\x01';
      local_1d8 = '\0';
      local_1e0 = (longlong *)0x0;
      local_1d0 = (longlong *)0x0;
      local_1c8 = '\0';
      pplVar10 = &local_1d0;
      FUN_012cc0c0(pplVar10,&local_1e0,0,0);
      pVar8 = (pthread_key_t)pplVar10;
      if ((local_1c8 != '\0') && (local_1d0 != (longlong *)0x0)) {
        (**(code **)(*local_1d0 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_1d8 != '\0') && (local_1e0 != (longlong *)0x0)) {
        (**(code **)(*local_1e0 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*unaff_RDI + 0x628))();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_012ccb50();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      (**(code **)(*unaff_RDI + 0x628))();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_1c0 = *local_140;
      local_1b8 = '\0';
      local_1b0 = (longlong *)0x0;
      local_1a8 = '\0';
      local_1a0 = (longlong *)0x0;
      local_198 = '\0';
      pplVar10 = &local_1a0;
      FUN_012cc0c0(pplVar10,&local_1b0,0,0);
      pVar8 = (pthread_key_t)pplVar10;
      if ((local_198 != '\0') && (local_1a0 != (longlong *)0x0)) {
        (**(code **)(*local_1a0 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
        (**(code **)(*local_1b0 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*unaff_RDI + 0x628))();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb450();
  local_100 = local_60;
  local_f8 = 0;
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_f8 = '\x01';
  FUN_0044c720();
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x628))();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  local_f0 = local_60;
  local_e8 = 0;
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_e8 = '\x01';
  (**(code **)(*plVar12 + 0x3a0))();
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_190 = (longlong *)0x0;
  local_188 = '\0';
  FUN_00cb1fa0();
  if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
    (**(code **)(*local_190 + 0x10))();
    FUN_00d50b20();
  }
  FUN_00cb1f10();
  FUN_00db3760();
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00cb1f10();
  FUN_00db65f0();
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_68 = plVar9;
  (**(code **)(*plVar12 + 0x3c8))();
  (**(code **)(*unaff_RDI + 0x468))();
  (**(code **)(*local_a0 + 0x468))();
  plVar2 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_00753620();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x628))();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505900();
  local_e0 = local_60;
  local_d8 = 0;
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_d8 = '\x01';
  FUN_001060d0();
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a4cb0();
  uVar13 = FUN_006e32b0();
  local_d0 = local_60;
  local_c8 = 0;
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_c8 = '\x01';
  FUN_00108e20(uVar13,0);
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50130();
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (longlong *)0x0) {
    local_68 = plVar9;
  }
  else {
    local_31 = 1;
    local_68 = (longlong *)0x0;
    FUN_00d50b20();
  }
  cVar3 = plVar9 != (longlong *)0x0;
  *(undefined1 *)(unaff_RDI + 0x2d) = 0;
  local_31 = plVar9 == (longlong *)0x0;
  FUN_00d403d0();
  local_180 = DAT_02703af8;
  if (DAT_02703af8 != 0) {
    FUN_00d50b00();
  }
  local_178 = '\x01';
  local_128 = 0;
  FUN_00d50b00();
  local_128 = '\x01';
  local_170 = 0;
  local_168 = '\0';
  plVar9 = &local_170;
  local_130 = unaff_RDI;
  FUN_00d40470(plVar9,&local_130,1,3);
  pVar8 = (pthread_key_t)plVar9;
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_c0 != '\0') {
    (**(code **)(*unaff_RDI + 0x628))();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar13 = FUN_012cb480();
    plVar9 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != (longlong *)0x0) && (uVar13 = FUN_00d50b00(), local_58 != '\0')) &&
         (local_60 != (longlong *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar9 != (longlong *)0x0) {
      local_140 = (longlong *)CONCAT71(local_140._1_7_,cVar3);
      local_138 = plVar12;
      local_58 = '\0';
      local_60 = (longlong *)0x0;
      local_c0 = plVar9;
      local_50 = plVar9;
      local_48 = 0xffffffff;
      local_40 = 0;
      iVar11 = 0;
      while( true ) {
        if (iVar11 != 0) {
          if (iVar11 < 1) {
            iVar11 = -iVar11;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - iVar11);
            uVar13 = FUN_00d23690(uVar13,iVar11);
            local_40 = local_40 + iVar11;
            iVar11 = 0;
          }
          local_48 = CONCAT44(iVar11,(int)local_48);
        }
        lVar5 = (longlong)(int)local_48;
        iVar11 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar11);
        if (*(int *)((longlong)local_50 + 0xc) <= iVar11) break;
        plVar9 = *(longlong **)(local_50[2] + 8 + lVar5 * 8);
        local_60 = plVar9;
        local_a0 = plVar9;
        if ((DAT_026fdd70 == '\0') &&
           (iVar11 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_02, iVar11 != 0)) {
          _DAT_026e3238 = FUN_00115af0();
          DAT_026e3220 = "MUAudioFileSource";
          _DAT_026e3228 = 0xa0;
          _DAT_026e3230 = FUN_00136df0;
          _DAT_026e3240 = 0;
          uRam00000000026e3248 = 0;
          _DAT_026e3250 = 0;
          uRam00000000026e3258 = 0;
          _DAT_026e3260 = 0;
          uRam00000000026e3268 = 0;
          _DAT_026e3270 = 0;
          uRam00000000026e3278 = 0;
          _DAT_026e3280 = 0;
          uRam00000000026e3288 = 0;
          _DAT_026e3290 = 0;
          uRam00000000026e3298 = 0;
          _DAT_026e32a0 = 0;
          uRam00000000026e32a8 = 0;
          _DAT_026e32b0 = 0;
          uRam00000000026e32b8 = 0;
          _DAT_026e32c0 = 0;
          uRam00000000026e32c8 = 0;
          _DAT_026e32d0 = 0;
          uRam00000000026e32d8 = 0;
          _DAT_026e32e0 = 0;
          uVar13 = ___cxa_guard_release();
        }
        pplVar10 = (longlong **)&DAT_02802688;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar10 = &local_a0;
          uVar13 = extraout_XMM0_Da_00;
          if (cVar3 == '\0') {
            pplVar10 = (longlong **)&DAT_02802688;
          }
        }
        if (*pplVar10 != (longlong *)0x0) {
          pvVar4 = _pthread_getspecific((pthread_key_t)pplVar10);
          pVar8 = (pthread_key_t)pplVar10;
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_0124d450();
          uVar13 = extraout_XMM0_Da_01;
          if (cVar3 != '\0') {
            pvVar4 = _pthread_getspecific(pVar8);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar13 = FUN_0124c6e0();
            plVar9 = local_a0;
            if (local_98 == '\0') {
              if (local_a0 != (longlong *)0x0) {
                FUN_00d50b00();
                if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0075b774;
              }
            }
            else if (local_a0 != (longlong *)0x0) {
LAB_0075b774:
              local_98 = '\0';
              local_a0 = (longlong *)0x0;
              local_90 = plVar9;
              local_88 = 0xffffffff;
              local_80 = 0;
              local_88._4_4_ = 0;
              while( true ) {
                if (local_88._4_4_ != 0) {
                  if (local_88._4_4_ < 1) {
                    iVar11 = -local_88._4_4_;
                  }
                  else {
                    iVar11 = (int)local_88 - local_88._4_4_;
                    local_88 = CONCAT44(local_88._4_4_,iVar11);
                    FUN_00d23690();
                    local_80 = local_80 + local_88._4_4_;
                    iVar11 = 0;
                  }
                  local_88 = CONCAT44(iVar11,(int)local_88);
                }
                lVar5 = (longlong)(int)local_88;
                iVar11 = (int)local_88 + 1;
                local_88 = CONCAT44(local_88._4_4_,iVar11);
                if (*(int *)((longlong)local_90 + 0xc) <= iVar11) break;
                local_a0 = *(longlong **)(local_90[2] + 8 + lVar5 * 8);
                pvVar4 = _pthread_getspecific((pthread_key_t)local_90[2]);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_158 = '\0';
                local_160 = (longlong *)0x0;
                local_150 = (longlong *)0x0;
                local_148 = '\0';
                FUN_01397bb0(0,&local_150);
                if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
                  (**(code **)(*local_150 + 0x10))();
                  FUN_00d50b20();
                }
                if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
                  (**(code **)(*local_160 + 0x10))();
                  FUN_00d50b20();
                }
              }
              FUN_00115190();
              uVar13 = FUN_00d50b20();
            }
          }
        }
        iVar11 = local_48._4_4_;
      }
      FUN_00136d50();
      FUN_00d50b20();
      plVar12 = local_138;
      cVar3 = (char)local_140;
    }
  }
  uVar6 = FUN_00756200();
  if (plVar12 != (longlong *)0x0) {
    uVar6 = FUN_00d50b20();
  }
  uVar7 = (undefined7)((ulonglong)uVar6 >> 8);
  if (cVar3 == '\0' && local_68 != (longlong *)0x0) {
    FUN_00d50b20();
    uVar7 = extraout_var;
  }
  return CONCAT71(uVar7,1);
}


