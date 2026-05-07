// Function: FUN_0194b390
// Address: 0194b390
// Size: 4927 bytes
// Class: Unknown


void FUN_0194b390(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *plVar8;
  pthread_key_t pVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  longlong local_68;
  char local_60;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38 [8];
  
  pVar9 = (pthread_key_t)param_1;
  if (*unaff_RSI == unaff_RDI[0xa7]) {
    return;
  }
  if (unaff_RDI[0xa7] != 0) {
    FUN_00d50b00();
    FUN_01948a20();
    local_70 = local_40;
    if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00d50b20();
    if (local_70 != (longlong *)0x0) {
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = local_70;
      }
      FUN_012f4a00();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d900();
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    lVar7 = CONCAT71(local_50._1_7_,(char)local_50);
    if (local_48 == '\0') {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    cVar3 = FUN_01512830();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(local_50._1_7_,(char)local_50) != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pVar9 = (pthread_key_t)param_1;
    if (cVar3 != '\0') {
      FUN_00d403d0();
      lVar7 = DAT_027c8278;
      if (DAT_027c8278 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(pVar9);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d900();
      local_d8 = 0;
      local_e0 = CONCAT71(local_50._1_7_,(char)local_50);
      if (local_48 == '\0') {
        if (local_e0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_d8 = '\x01';
      local_1b8 = '\0';
      local_1c0 = 0;
      param_1 = &local_1c0;
      FUN_00d40470(param_1,&local_e0,3,3);
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(local_50._1_7_,(char)local_50) != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d900();
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    local_c8 = 0;
    local_d0 = CONCAT71(local_50._1_7_,(char)local_50);
    if (local_48 == '\0') {
      if (local_d0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_c8 = '\x01';
    cVar3 = FUN_01512890();
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(local_50._1_7_,(char)local_50) != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pVar9 = (pthread_key_t)param_1;
    if (cVar3 != '\0') {
      FUN_00d403d0();
      local_1b0 = DAT_027c8280;
      if (DAT_027c8280 != 0) {
        FUN_00d50b00();
      }
      local_1a8 = '\x01';
      pvVar6 = _pthread_getspecific(pVar9);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d900();
      local_b8 = 0;
      local_c0 = CONCAT71(local_50._1_7_,(char)local_50);
      if (local_48 == '\0') {
        if (local_c0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_b8 = '\x01';
      local_198 = '\0';
      local_1a0 = 0;
      param_1 = &local_1a0;
      FUN_00d40470(param_1,&local_c0,3,3);
      if ((local_198 != '\0') && (local_1a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(local_50._1_7_,(char)local_50) != 0)) {
        FUN_00d50b20();
      }
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    while (pVar9 = (pthread_key_t)param_1, *(int *)(unaff_RDI[0xab] + 0xc) != 0) {
      FUN_00d23340();
      plVar1 = local_40;
      local_50._0_1_ = local_38[0];
      plVar8 = (longlong *)local_38;
      if (local_38[0] == '\0') {
        plVar8 = &local_50;
      }
      *(undefined1 *)plVar8 = 0;
      if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_190 = 0;
      local_188 = '\0';
      FUN_019562f0();
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_50 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23340();
      plVar1 = local_40;
      local_50._0_1_ = local_38[0];
      param_1 = &local_50;
      plVar8 = (longlong *)local_38;
      if (local_38[0] == '\0') {
        plVar8 = param_1;
      }
      *(undefined1 *)plVar8 = 0;
      if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar1 + 0x478))();
      if ((char)local_50 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23740();
    }
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d610();
  local_b0 = local_40;
  local_a8 = 0;
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_a8 = '\x01';
  FUN_012caf90();
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d900();
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
  FUN_015127c0();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(local_50._1_7_,(char)local_50) != 0)) {
    FUN_00d50b20();
  }
  local_180 = *unaff_RSI;
  local_178 = '\0';
  pVar9 = 1;
  (**(code **)(&UNK_00001698 + *unaff_RDI))(1,&local_180);
  plVar1 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f4a00();
  if (*unaff_RSI == 0) {
    FUN_01948fc0();
    if (unaff_RDI[0x80] != 0) {
      local_168 = '\0';
      local_170 = 0;
      FUN_01e26eb0();
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (unaff_RDI[0xa7] != 0) {
      pvVar6 = _pthread_getspecific(pVar9);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_01326de0();
      pvVar6 = _pthread_getspecific(pVar9);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar5 = FUN_01326de0();
      if (iVar4 == iVar5) {
        FUN_01948fc0();
        goto LAB_0194c100;
      }
    }
    FUN_01948fc0();
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01326de0();
    lVar7 = *unaff_RDI;
    (**(code **)(&DAT_000016e0 + lVar7))();
    pVar9 = (pthread_key_t)lVar7;
    if (unaff_RDI[0x80] != 0) {
      local_128 = 0;
      lVar7 = unaff_RDI[0x7f];
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_128 = '\x01';
      local_130 = lVar7;
      FUN_01e26eb0();
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_0194c100:
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar7 = FUN_00e8b990();
  if (lVar7 == 0) {
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    FUN_00cafd20();
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar8 = (longlong *)FUN_00e8b990();
    local_118 = 0;
    local_120 = unaff_RDI[0xa9];
    if (local_120 != 0) {
      FUN_00d50b00();
    }
    local_118 = '\x01';
    (**(code **)(*plVar8 + 0x3a0))();
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_158 = '\0';
    local_160 = (longlong *)0x0;
    FUN_00cb1fa0();
    if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
      (**(code **)(*local_160 + 0x10))();
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3760();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar8 = (longlong *)FUN_00e8b990();
    lVar7 = *plVar8;
    (**(code **)(lVar7 + 0x3c8))();
    pVar9 = (pthread_key_t)lVar7;
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0134c400();
  FUN_01941c70();
  local_78 = 0;
  local_80 = CONCAT71(local_50._1_7_,(char)local_50);
  if (local_48 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = '\x01';
  FUN_000ba510();
  local_90 = local_40;
  local_88 = 0;
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_88 = '\x01';
  (**(code **)(*unaff_RDI + 0x980))();
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  FUN_00cb1f10();
  FUN_00db3760();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(&DAT_000017b8 + *unaff_RDI))();
  FUN_00d403d0();
  local_150 = DAT_027e0938;
  if (DAT_027e0938 != 0) {
    FUN_00d50b00();
  }
  local_148 = '\x01';
  FUN_00d50b00();
  local_140 = 0;
  local_138 = '\0';
  FUN_00d40470(&local_140,&stack0xfffffffffffffef0,1,3);
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = (longlong *)unaff_RDI[0x81];
  if (plVar8 != (longlong *)0x0) {
    if ((longlong *)unaff_RDI[0x58] != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x58] + 0x420))();
      plVar2 = local_40;
      if (local_38[0] == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      (**(code **)(*plVar8 + 0x918))();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar8 = (longlong *)unaff_RDI[0x81];
      if (plVar8 == (longlong *)0x0) goto LAB_0194c6b2;
    }
    (**(code **)(*plVar8 + 0x930))();
  }
LAB_0194c6b2:
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


