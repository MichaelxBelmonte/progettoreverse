// Function: FUN_0052d7d0
// Address: 0052d7d0
// Size: 3365 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0052d7d0(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t this_ptr;
  int64_t *plVar7;
  bool bVar8;
  int64_t local_190;
  char local_188;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00b34c60();
  FUN_00b34bf0();
  if (local_40 == (int64_t *)0x0) {
    bVar8 = false;
  }
  else {
    FUN_00b34bf0();
    iVar3 = FUN_00b303a0();
    bVar8 = iVar3 == 6;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar8) {
    *(void*)(this_ptr + 0x24e) = 1;
  }
  FUN_01f27fe0();
  FUN_00b34cb0();
  (**(code **)(*local_90 + 0x88))();
  plVar2 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_000c28c0();
  plVar7 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00518030();
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_0015ae00();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0051a2b0();
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00527070();
  plVar2 = local_40;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_007932a0();
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x110);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
    lVar5 = *(int64_t *)(this_ptr + 0x108);
  }
  else {
    lVar5 = *(int64_t *)(this_ptr + 0x108);
  }
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  FUN_0075c8d0();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0015d5d0();
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00b34cb0();
  (**(code **)(*local_60 + 0x90))();
  FUN_00b68190();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0051b4f0();
  if (local_40 == (int64_t *)0x0) {
    bVar8 = false;
  }
  else {
    FUN_0051b4f0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6000();
    if (local_50 == 0) {
      bVar8 = true;
    }
    else {
      FUN_0051b4f0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6000();
      iVar3 = FUN_00d8c7a0();
      bVar8 = iVar3 == 0;
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar7 = plVar2;
  if (bVar8) {
    (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
    FUN_00cafd20();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((plVar2 == (int64_t *)0x0) || (iVar3 = FUN_00d8c7a0(), iVar3 == 0)) {
      FUN_01f27fe0();
      FUN_00d50b00();
      FUN_000c6250();
      plVar7 = local_40;
      if (plVar2 == local_40) {
LAB_0052de95:
        plVar7 = plVar2;
        if (local_38 != '\0') {
LAB_0052de9b:
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b20();
            plVar2 = plVar7;
            goto LAB_0052de95;
          }
          if (local_38 == '\0') goto LAB_0052dea9;
          goto LAB_0052de9b;
        }
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        local_38 = '\0';
      }
LAB_0052dea9:
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_0051b4f0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5f80();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
    (**(code **)(*local_40 + 0x3c8))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b00();
  local_170 = g_0270b8d0;
  if (g_0270b8d0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026e0f70;
  local_168 = '\x01';
  if (g_026e0f70 != 0) {
    FUN_00d50b00();
  }
  local_160 = lVar1;
  local_158 = '\x01';
  local_150 = 0;
  local_148 = '\0';
  FUN_000bf690(&local_160,&local_170,&local_150);
  plVar2 = *(int64_t **)(this_ptr + 0x398);
  plVar6 = plVar2;
  if (plVar2 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
        goto LAB_0052e09e;
      }
      FUN_00d50b00();
      plVar2 = *(int64_t **)(this_ptr + 0x398);
      *(int64_t **)(this_ptr + 0x398) = local_40;
      plVar6 = local_40;
    }
    else {
      local_38 = '\0';
      plVar6 = local_40;
LAB_0052e09e:
      *(int64_t **)(this_ptr + 0x398) = plVar6;
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_140 = g_026fce50;
  if (g_026fce50 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026fce60;
  local_138 = '\x01';
  if (g_026fce60 != 0) {
    FUN_00d50b00();
  }
  local_130 = lVar1;
  local_128 = '\x01';
  local_120 = 0;
  local_118 = '\0';
  FUN_000bf690(&local_130,&local_140,&local_120);
  plVar2 = *(int64_t **)(this_ptr + 0x3a0);
  plVar6 = plVar2;
  if (plVar2 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
        goto LAB_0052e213;
      }
      FUN_00d50b00();
      plVar2 = *(int64_t **)(this_ptr + 0x3a0);
      *(int64_t **)(this_ptr + 0x3a0) = local_40;
      plVar6 = local_40;
    }
    else {
      local_38 = '\0';
      plVar6 = local_40;
LAB_0052e213:
      *(int64_t **)(this_ptr + 0x3a0) = plVar6;
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_110 = g_0270b8e0;
  if (g_0270b8e0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_0270b8e8;
  local_108 = '\x01';
  if (g_0270b8e8 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar1;
  local_f8 = '\x01';
  FUN_00b34cb0();
  (**(code **)(*local_60 + 0x88))();
  local_70 = local_50;
  local_68 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_68 = '\x01';
  FUN_000bf690(&local_100,&local_110,&local_70);
  plVar2 = *(int64_t **)(this_ptr + 0x3a8);
  plVar6 = plVar2;
  if (plVar2 == local_40) goto LAB_0052e40c;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x0;
      goto LAB_0052e3c1;
    }
    FUN_00d50b00();
    plVar2 = *(int64_t **)(this_ptr + 0x3a8);
    *(int64_t **)(this_ptr + 0x3a8) = local_40;
    plVar6 = local_40;
  }
  else {
    local_38 = '\0';
    plVar6 = local_40;
LAB_0052e3c1:
    *(int64_t **)(this_ptr + 0x3a8) = plVar6;
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar6 = local_40;
  }
LAB_0052e40c:
  if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

