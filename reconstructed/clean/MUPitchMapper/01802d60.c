// Function: FUN_01802d60
// Address: 01802d60
// Size: 2518 bytes
// Class: MUPitchMapper
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_01802d60(void)

{
  char cVar1;
  void*puVar2;
  int64_t *plVar3;
  bool bVar4;
  void*local_98;
  char local_90;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  plVar3 = g_028af7b8;
  if (g_028af7b8 != (int64_t *)0x0) {
    FUN_01800300();
    (**(code **)(*local_48 + 0x3c0))();
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    cVar1 = (**(code **)(*plVar3 + 0x50))();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') {
      if (g_028af7a8 == (void*)0x0) goto LAB_01802e4f;
      g_028af7a8 = (void*)0x0;
      FUN_00d50b20();
    }
  }
  if ((g_028af7a8 != (void*)0x0) && (g_028af7b1 != '\0')) {
    return;
  }
LAB_01802e4f:
  FUN_00e8cb50();
  if (g_028af7a8 == (void*)0x0) {
    FUN_01800300();
    cVar1 = (**(code **)(*local_38 + 0x398))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      FUN_01800300();
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_00c8e830();
      if (local_30 == '\0') {
        if (local_38 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      if (local_38 != (int64_t *)0x0) {
        FUN_00c92170();
      }
      FUN_00ca9940();
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      FUN_01800c00();
      if (g_028af7a8 != local_98) {
        puVar2 = g_028af7a8;
        if (local_90 == '\0') {
          if (local_98 != (void*)0x0) {
            FUN_00d50b00();
            puVar2 = g_028af7a8;
          }
        }
        else {
          local_90 = '\0';
        }
        g_028af7a8 = local_98;
        if (puVar2 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_98 != (void*)0x0) && (g_028af7b0 == '\0')) {
        g_028af7b0 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01800300();
      (**(code **)(*local_68 + 0x3c0))();
      plVar3 = g_028af7b8;
      if (g_028af7b8 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == (int64_t *)0x0) {
            plVar3 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar3 = local_38;
          }
        }
        else {
          local_30 = '\0';
          plVar3 = local_38;
        }
        bVar4 = g_028af7b8 != (int64_t *)0x0;
        g_028af7b8 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
          plVar3 = local_38;
        }
      }
      if ((plVar3 != (int64_t *)0x0) && (g_028af7c0 == '\0')) {
        g_028af7c0 = '\x01';
        FUN_00e8cb90();
        plVar3 = local_38;
      }
      if ((local_30 != '\0') && (plVar3 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (g_028af7a8 == (void*)0x0) {
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02572358;
      (*g_02572370)();
      bVar4 = g_028af7a8 == (void*)0x0;
      g_028af7a8 = puVar2;
      if (((bVar4) || (FUN_00d50b20(), g_028af7a8 != (void*)0x0)) && (g_028af7b0 == '\0')
         ) {
        g_028af7b0 = '\x01';
        FUN_00e8cb90();
      }
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 1;
      *(void*)((int64_t)puVar2 + 0x14) = 0x41200000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 1;
      *(void*)(puVar2 + 2) = 1;
      *(void*)((int64_t)puVar2 + 0x14) = 0x41100000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 2;
      *(void*)(puVar2 + 2) = 1;
      *(void*)((int64_t)puVar2 + 0x14) = 0x41000000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 3;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0x40200000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 4;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0x40333333;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 5;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0x40a00000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 6;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0xc0400000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 7;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0x3f000000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 9;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0xbf800000;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 10;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d21140();
      FUN_00d50b20();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02608800;
      *(void*)((int64_t)puVar2 + 0xc) = 0;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar2 + 0xc) = 0xd;
      *(void*)(puVar2 + 2) = 0;
      *(void*)((int64_t)puVar2 + 0x14) = 0x42c80000;
      FUN_00d21140();
      FUN_00d50b20();
    }
    FUN_00d242c0();
    g_028af7b1 = 1;
    FUN_00e8cb70();
  }
  else {
    g_028af7b1 = 1;
    FUN_00e8cb70();
  }
  return;
}

