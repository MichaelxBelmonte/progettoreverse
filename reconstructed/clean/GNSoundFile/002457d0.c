// Function: FUN_002457d0
// Address: 002457d0
// Size: 1706 bytes
// Class: GNSoundFile
// String references:
//   "GNSoundFile"
//   "GNString"
//   "GNDictionary"
// === GNSoundFile properties ===
//   GNSoundFileLayout _fileLayout
//   GNSoundFileFormat _format
//   GNAudioSampleFormat _sampleFormat


uint64_t FUN_002457d0(void)

{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *arg1;
  int64_t *plVar6;
  int64_t **pplVar7;
  bool bVar8;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  int64_t *plVar10;
  uint64_t extraout_XMM0_Qa_01;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  int64_t *local_50;
  bool local_48;
  int64_t *local_40;
  char local_38;
  
  cVar2 = FUN_00245720();
  if (cVar2 == '\0') {
    uVar5 = 0;
    goto LAB_00245c0e;
  }
  pplVar7 = &local_50;
  FUN_01d384d0();
  local_78 = local_50;
  local_70 = 0;
  if (local_48 == false) {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = false;
  }
  local_70 = '\x01';
  FUN_0010f340();
  local_60 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != false) && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar2 = FUN_0010f8e0();
  if (cVar2 == '\0') {
LAB_00245bd2:
    local_88 = *arg1;
    local_80 = '\0';
    uVar3 = FUN_01e56e20();
    uVar5 = (uint64_t)uVar3;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_0010db00();
    local_58 = local_40;
    plVar6 = local_40;
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (FUN_00d50b00(), plVar6 = local_58, local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (*(int *)((int64_t)plVar6 + 0xc) == 0) {
LAB_00245bca:
      FUN_00d50b20();
      goto LAB_00245bd2;
    }
    FUN_00d23310();
    plVar6 = local_40;
    bVar8 = local_38 == '\0';
    local_50 = local_40;
    if (bVar8) {
      local_48 = false;
    }
    else {
      local_48 = true;
      local_38 = '\0';
    }
    local_48 = !bVar8;
    if ((g_026d8478 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_026f9358 = FUN_00d4fe50();
      g_026f9340 = "GNSoundFile";
      g_026f9348 = 0x98;
      g_026f9350 = FUN_00083bc0;
      g_026f9360 = 0;
      ram_00000000026f9368 = 0;
      g_026f9370 = 0;
      g_026f93e8 = 0;
      ram_00000000026f93f0 = 0;
      g_026f93f8 = 0;
      g_026f93fa = 3;
      g_026f9378 = 0;
      ram_00000000026f9380 = 0;
      g_026f9388 = 0;
      ram_00000000026f9390 = 0;
      g_026f9398 = 0;
      ram_00000000026f93a0 = 0;
      g_026f93a8 = 0;
      ram_00000000026f93b0 = 0;
      g_026f93b8 = 0;
      ram_00000000026f93c0 = 0;
      g_026f93c8 = 0;
      ram_00000000026f93d0 = 0;
      g_026f93d8 = 0;
      ram_00000000026f93e0 = 0;
      g_026f9403 = 0;
      g_026f93fb = 0;
      ___cxa_guard_release();
    }
    if (plVar6 == (int64_t *)0x0) {
LAB_0024598f:
      pplVar7 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_0024598f;
    }
    plVar6 = *pplVar7;
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar7 + 1) = 0;
    }
    if ((local_48 != false) && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (int64_t *)0x0) {
      uVar9 = FUN_00d23310();
      plVar6 = local_40;
      bVar8 = local_38 == '\0';
      local_50 = local_40;
      if (bVar8) {
        local_48 = false;
      }
      else {
        local_48 = true;
        local_38 = '\0';
      }
      local_48 = !bVar8;
      if ((g_026fdd40 == '\0') &&
         (iVar4 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Qa_01, iVar4 != 0)) {
        g_026cd0e8 = FUN_00d4fe50();
        g_026cd0d0 = "GNDictionary";
        g_026cd0d8 = 0x28;
        g_026cd0e0 = FUN_00022d20;
        g_026cd0f0 = 0;
        ram_00000000026cd0f8 = 0;
        g_026cd100 = 0;
        g_026cd178 = 0;
        ram_00000000026cd180 = 0;
        g_026cd188 = 0;
        g_026cd18a = 6;
        g_026cd108 = 0;
        ram_00000000026cd110 = 0;
        g_026cd118 = 0;
        ram_00000000026cd120 = 0;
        g_026cd128 = 0;
        ram_00000000026cd130 = 0;
        g_026cd138 = 0;
        ram_00000000026cd140 = 0;
        g_026cd148 = 0;
        ram_00000000026cd150 = 0;
        g_026cd158 = 0;
        ram_00000000026cd160 = 0;
        g_026cd168 = 0;
        ram_00000000026cd170 = 0;
        g_026cd193 = 0;
        g_026cd18b = 0;
        uVar9 = ___cxa_guard_release();
      }
      pplVar7 = (int64_t **)&g_02802688;
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x360))();
        cVar2 = FUN_00e85ea0();
        uVar9 = extraout_XMM0_Qa;
        if (cVar2 != '\0') {
          if ((g_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
            g_026d5e58 = FUN_00d4fe50();
            g_026d5e40 = "GNString";
            g_026d5e48 = 0x40;
            g_026d5e50 = FUN_0005d920;
            g_026d5e60 = 0;
            ram_00000000026d5e68 = 0;
            g_026d5e70 = 0;
            ram_00000000026d5e78 = 0;
            g_026d5e80 = 0;
            ram_00000000026d5e88 = 0;
            g_026d5e90 = 0;
            ram_00000000026d5e98 = 0;
            g_026d5ea0 = 0;
            ram_00000000026d5ea8 = 0;
            g_026d5eb0 = 0;
            ram_00000000026d5eb8 = 0;
            g_026d5ec0 = 0;
            ram_00000000026d5ec8 = 0;
            g_026d5ed0 = 0;
            ram_00000000026d5ed8 = 0;
            g_026d5ee0 = 0;
            ram_00000000026d5ee8 = 0;
            g_026d5ef0 = 0;
            ram_00000000026d5ef8 = 0;
            g_026d5f00 = 0;
            ___cxa_guard_release();
          }
          cVar2 = FUN_00e8db60();
          uVar9 = extraout_XMM0_Qa_00;
          if (cVar2 == '\0') {
            pplVar7 = (int64_t **)&g_02802688;
          }
          else {
            pplVar7 = &local_50;
          }
        }
      }
      plVar6 = *pplVar7;
      if (*(char *)(pplVar7 + 1) == '\0') {
        if (plVar6 != (int64_t *)0x0) {
          uVar9 = FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar7 + 1) = 0;
      }
      if ((local_48 != false) && (local_50 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
      lVar1 = g_026f6ee0;
      local_68 = plVar6;
      if (g_026f6ee0 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_98 = lVar1;
      local_90 = '\x01';
      FUN_000175c0(uVar9,&local_98);
      plVar6 = local_40;
      FUN_00053ac0();
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x360))();
        FUN_00e85ea0();
      }
      plVar10 = (int64_t *)FUN_00d45bc0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar6 = local_68;
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = (int64_t *)FUN_00b7a6e0();
      FUN_00d50b20();
      plVar10 = local_68;
    }
    if ((double)plVar10 <= 0.0) goto LAB_00245bca;
    uVar5 = CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
    FUN_00d50b20();
  }
  if (local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_00245c0e:
  return uVar5 & 0xffffffff;
}

