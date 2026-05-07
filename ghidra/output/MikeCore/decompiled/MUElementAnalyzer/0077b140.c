// Function: FUN_0077b140
// Address: 0077b140
// Size: 4086 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x0077b4a4) */
/* WARNING: Removing unreachable block (ram,0x0077b4b4) */

void FUN_0077b140(pthread_key_t param_1)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar10;
  undefined8 uVar11;
  longlong **pplVar12;
  longlong local_218;
  char local_210;
  longlong *local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong *local_1b8;
  char local_1b0;
  longlong *local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined1 *local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  longlong *local_78;
  char local_69;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  
  lVar4 = *unaff_RSI;
  local_69 = (char)unaff_RSI[1];
  if ((local_69 != '\0') && (lVar4 != 0)) {
    FUN_00d50b00();
  }
  local_108 = lVar4;
  FUN_01646470();
  local_78 = local_68;
  if ((((local_60 == '\0') && (local_68 != (longlong *)0x0)) && (FUN_00d50b00(), local_60 != '\0'))
     && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00e33de0();
  lVar4 = DAT_0270b920;
  if (DAT_0270b920 != 0) {
    FUN_00d50b00();
  }
  pplVar12 = &local_68;
  FUN_000175c0();
  plVar7 = local_68;
  FUN_0006e1c0();
  if (plVar7 == (longlong *)0x0) {
    pplVar12 = &DAT_02802688;
    plVar7 = DAT_02802688;
    if (DAT_02802690 == '\0') goto LAB_0077b265;
LAB_0077b249:
    *(undefined1 *)(pplVar12 + 1) = 0;
    plVar10 = local_78;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') {
      pplVar12 = &DAT_02802688;
    }
    plVar7 = *pplVar12;
    if (*(char *)(pplVar12 + 1) != '\0') goto LAB_0077b249;
LAB_0077b265:
    plVar10 = local_78;
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = plVar7;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  local_a0 = local_68;
  if ((((local_60 == '\0') && (local_68 != (longlong *)0x0)) && (FUN_00d50b00(), local_60 != '\0'))
     && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x610))();
  plVar7 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0077b380;
    }
  }
  else if (local_68 != (longlong *)0x0) {
LAB_0077b380:
    local_60 = '\0';
    local_68 = (longlong *)0x0;
    local_58 = plVar7;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar9 = -local_50._4_4_;
        }
        else {
          iVar9 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar9);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar9 = 0;
        }
        local_50 = CONCAT44(iVar9,(int)local_50);
      }
      lVar4 = (longlong)(int)local_50;
      iVar9 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar9);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar9) break;
      local_68 = *(longlong **)(local_58[2] + 8 + lVar4 * 8);
      local_1d8 = local_b0;
      local_1d0 = '\0';
      local_1c8 = 0;
      local_1c0 = '\0';
      FUN_006fe880(&local_1c8,&local_1d8);
      if ((local_1c0 != '\0') && (local_1c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1d0 != '\0') && (local_1d8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    plVar7 = local_58;
    FUN_000e3600();
    param_1 = (pthread_key_t)plVar7;
    FUN_00d50b20();
    plVar10 = local_78;
  }
  if (plVar10 == (longlong *)0x0) {
    bVar1 = true;
    uVar11 = 0;
    local_40 = (longlong *)0x0;
    local_a8 = 0;
    local_80 = (longlong *)0x0;
    goto LAB_0077be72;
  }
  (**(code **)(*unaff_RDI + 0x498))();
  FUN_00cb1f10();
  plVar7 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_00db32a0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  plVar5 = local_68;
  if (((local_60 == '\0') && (local_68 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_60 != '\0' && (local_68 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  local_98 = (undefined1 *)0x0;
  local_80 = (longlong *)0x0;
  FUN_00d50b00();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264240();
  local_80 = local_68;
  plVar8 = local_68;
  if (local_68 == (longlong *)0x0) {
    local_80 = (longlong *)0x0;
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
    if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
  }
  local_98 = &DAT_02802501;
  pVar6 = (pthread_key_t)plVar8;
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_1b0 = '\0';
  local_1b8 = plVar10;
  local_a8 = uVar11;
  FUN_0124c710();
  if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00764570();
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505900();
  local_100 = local_90;
  local_f8 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_f8 = '\x01';
  FUN_016cbba0();
  local_40 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d900();
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00764570();
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  local_f0 = local_90;
  local_e8 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_e8 = '\x01';
  FUN_015127c0();
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_1a8 = local_40;
  local_1a0 = '\0';
  FUN_0132d960();
  if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar6);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    pVar6 = (pthread_key_t)local_a0;
  }
  local_198 = local_b0;
  local_190 = '\0';
  FUN_0039e8b0();
  local_e0 = local_68;
  local_d8 = 0;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_d8 = '\x01';
  local_188 = local_78;
  local_180 = '\0';
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  local_d0 = local_90;
  local_c8 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  plVar10 = local_78;
  local_c8 = '\x01';
  pplVar12 = &local_188;
  FUN_012f0b60(pplVar12,&local_e0,1,0,&local_d0);
  pVar6 = (pthread_key_t)pplVar12;
  if ((local_210 != '\0') && (local_218 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00db32a0();
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124c6e0();
  plVar8 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0077bd17;
    }
  }
  else if (local_68 != (longlong *)0x0) {
LAB_0077bd17:
    local_60 = '\0';
    local_68 = (longlong *)0x0;
    local_58 = plVar8;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar9 = -local_50._4_4_;
        }
        else {
          iVar9 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar9);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar9 = 0;
        }
        local_50 = CONCAT44(iVar9,(int)local_50);
      }
      lVar4 = (longlong)(int)local_50;
      iVar9 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar9);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar9) break;
      local_68 = *(longlong **)(local_58[2] + 8 + lVar4 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)local_58[2]);
      plVar10 = plVar5;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        plVar10 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      local_178 = local_68;
      local_170 = '\0';
      (**(code **)(*plVar10 + 0x3e0))();
      if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00115190();
    FUN_00d50b20();
    plVar10 = local_78;
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  uVar11 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  bVar1 = false;
  local_40 = plVar10;
LAB_0077be72:
  plVar10 = local_40;
  local_98 = (undefined1 *)uVar11;
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  plVar7 = DAT_026f6de8;
  local_160 = '\0';
  local_168 = plVar10;
  if (DAT_026f6de8 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_68 = plVar7;
  local_60 = '\0';
  FUN_00ca0840();
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_158 = DAT_026f6d80;
  if (DAT_026f6d80 != 0) {
    FUN_00d50b00();
  }
  local_150 = '\x01';
  local_110 = 0;
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  lVar4 = local_108;
  local_110 = '\x01';
  local_140 = '\0';
  local_148 = plVar5;
  local_118 = unaff_RDI;
  FUN_00d40470(&local_148,&local_118,3,3);
  if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != (longlong *)0x0) && (local_40 != (longlong *)0x0)) {
    (**(code **)(*unaff_RDI + 0x5f0))();
    local_138 = local_80;
    local_130 = '\0';
    local_128 = local_40;
    local_120 = '\0';
    (**(code **)(*local_68 + 0x640))();
    if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_0074ea80();
  FUN_0076f320();
  FUN_00d50b20();
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_b0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar1 && local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_a8 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_69 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return;
}


