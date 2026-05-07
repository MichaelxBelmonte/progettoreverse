// ===================================================================
// MUScaleCreationData — Complete reconstructed pseudocode
// 5 functions
// ===================================================================

// Registered properties (8):
//                   _cycleSize
//                   _degrees
//                   _degreesDistance
//                   _degreesAbove
//                   _degreesBelow
//                   _scaleName
//                   _isCyclic
//                   _isNonCyclic


// ============================================================
// 01b408c0
// ============================================================
// Function: FUN_01b408c0
// Address: 01b408c0
// Size: 1279 bytes
// Class: MUScaleCreationData
// === MUScaleCreationData properties ===
//                   _cycleSize
//                   _degrees
//                   _degreesDistance
//                   _degreesAbove
//                   _degreesBelow
//                   _scaleName
//                   _isCyclic
//                   _isNonCyclic


uint32_t FUN_01b408c0(uint32_t param_1,uint param_2)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  void* in_ECX;
  int64_t this_ptr;
  int64_t lVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar8;
  int64_t local_70;
  char local_68;
  uint32_t local_60;
  uint32_t local_5c;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  if ((param_2 != 0) && (*(int64_t *)(this_ptr + 0x70) != 0)) {
    FUN_01d2ac30();
    lVar3 = local_40;
    if ((local_38 == '\0') &&
       (((local_40 != 0 && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)))) {
      FUN_00d50b20();
    }
    FUN_01ad3cb0();
    local_48 = local_40;
    if (((local_38 == '\0') && (local_40 != 0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
      FUN_00d50b20();
    }
    iVar5 = FUN_01b21650();
    param_1 = extraout_XMM0_Da;
    if (local_48 != 0) {
      if (iVar5 == -1000000) {
        local_60 = g_024112ac;
      }
      else {
        pvVar6 = _pthread_getspecific(in_ECX);
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          in_ECX = (void*)local_48;
        }
        local_60 = FUN_01742280();
      }
      pvVar6 = _pthread_getspecific(in_ECX);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_01b42160();
      if (cVar4 == '\0') {
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_5c = FUN_01b42000();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01b42060();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar8 = FUN_01b41f90();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01b420c0();
        local_70 = local_58;
        local_68 = 0;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_68 = '\x01';
        uVar8 = FUN_0173d440(local_60,uVar8,&local_70);
        lVar7 = local_40;
        if (local_40 == 0) {
          bVar1 = false;
          lVar7 = 0;
        }
        else if (local_38 == '\0') {
          uVar8 = FUN_00d50b00();
          bVar1 = true;
          if ((local_38 != '\0') && (local_40 != 0)) {
            uVar8 = FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
          bVar1 = true;
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          uVar8 = FUN_00d50b20();
        }
      }
      else {
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_5c = FUN_01b41ec0();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01b41f30();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01b420c0();
        lVar2 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        uVar8 = FUN_0173c840(local_60,local_5c);
        lVar7 = local_40;
        if (local_40 == 0) {
          bVar1 = false;
          lVar7 = 0;
        }
        else if (local_38 == '\0') {
          uVar8 = FUN_00d50b00();
          bVar1 = true;
          if ((local_38 != '\0') && (local_40 != 0)) {
            uVar8 = FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
          bVar1 = true;
        }
        if (lVar2 != 0) {
          uVar8 = FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          uVar8 = FUN_00d50b20();
        }
      }
      if ((lVar7 != 0) && (FUN_01ad6060(uVar8,2), bVar1)) {
        FUN_00d50b20();
      }
      param_1 = FUN_00d50b20();
    }
    if (lVar3 != 0) {
      param_1 = FUN_00d50b20();
    }
  }
  uVar8 = FUN_01ad0160(param_1,param_2 & 0xff);
  return uVar8;
}



// ============================================================
// 01b40290
// ============================================================
// Function: FUN_01b40290
// Address: 01b40290
// Size: 1057 bytes
// Class: MUScaleCreationData
// === MUScaleCreationData properties ===
//                   _cycleSize
//                   _degrees
//                   _degreesDistance
//                   _degreesAbove
//                   _degreesBelow
//                   _scaleName
//                   _isCyclic
//                   _isNonCyclic


void FUN_01b40290(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  void*puVar4;
  void *pvVar5;
  int64_t this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  void*local_88;
  char local_80;
  void*local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  FUN_01ab3520();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02513bd8;
  puVar4[10] = 0;
  *(void*)(puVar4 + 0xb) = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(void*)(puVar4 + 9) = 0;
  FUN_00d500e0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01b41de0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01b41ed0(g_0239394c);
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01b41f40();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01b41fa0(g_023908e0);
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01b42010();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01b42070();
  pvVar5 = _pthread_getspecific(param_1);
  lVar1 = g_027e46c0;
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
    lVar1 = g_027e46c0;
  }
  g_027e46c0 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027e46c8;
  if (g_027e46c8 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar3;
  local_a0 = '\x01';
  local_98 = 0;
  local_90 = '\0';
  FUN_00d31230(&local_98,&local_a8);
  local_38 = local_68;
  local_30 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_30 = '\x01';
  FUN_01b420f0();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_80 = '\0';
  local_88 = puVar4;
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x3a0))();
  if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_70 = '\0';
  local_78 = puVar4;
  FUN_01d2a770();
  if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0xa0);
  if (lVar1 != 0) {
    plVar2 = *(int64_t **)(this_ptr + 0xb0);
    if (plVar2 != (int64_t *)0x0) {
      local_50 = 0;
      FUN_00d50b00();
      local_50 = '\x01';
      local_58 = lVar1;
      (**(code **)(*plVar2 + 0x8a0))();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    local_40 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0xa0);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar1;
    FUN_01ab3680();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01b41070
// ============================================================
// Function: FUN_01b41070
// Address: 01b41070
// Size: 898 bytes
// Class: MUScaleCreationData
// === MUScaleCreationData properties ===
//                   _cycleSize
//                   _degrees
//                   _degreesDistance
//                   _degreesAbove
//                   _degreesBelow
//                   _scaleName
//                   _isCyclic
//                   _isNonCyclic


void FUN_01b41070(void*param_1)

{
  int64_t *plVar1;
  code *pcVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  void* pVar7;
  int64_t this_ptr;
  bool bVar8;
  int64_t local_c0;
  char local_b8;
  int64_t local_40;
  char local_38;
  
  lVar3 = g_027c7928;
  pVar7 = (void*)param_1;
  plVar1 = (int64_t *)*param_1;
  if (g_027c7928 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_01d2ac30();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01b420c0();
    if (local_40 == 0) {
      bVar8 = false;
    }
    else {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01b420c0();
      iVar5 = FUN_00d8c7a0();
      bVar8 = iVar5 != 0;
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pcVar2 = *(code **)(**(int64_t **)(this_ptr + 0x80) + 0x998);
    if (bVar8) {
      (*pcVar2)();
    }
    else {
      (*pcVar2)();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = g_027e4848;
  plVar1 = (int64_t *)*param_1;
  if (g_027e4848 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (lVar3 = *(int64_t *)(this_ptr + 0xa0), lVar3 != 0)) {
    plVar1 = *(int64_t **)(this_ptr + 0xb0);
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0x8a0))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    lVar3 = *(int64_t *)(this_ptr + 0xa0);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_01ab3680();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = g_027e4850;
  plVar1 = (int64_t *)*param_1;
  if (g_027e4850 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (lVar3 = *(int64_t *)(this_ptr + 0xa8), lVar3 != 0)) {
    plVar1 = *(int64_t **)(this_ptr + 0xb0);
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0x8a0))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    lVar3 = *(int64_t *)(this_ptr + 0xa8);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_01ab3680();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00843ae0
// ============================================================
// Function: FUN_00843ae0
// Address: 00843ae0
// Size: 1614 bytes
// Class: MUScaleCreationData
// String references:
//   "MUScaleCreationData"
// === MUScaleCreationData properties ===
//                   _cycleSize
//                   _degrees
//                   _degreesDistance
//                   _degreesAbove
//                   _degreesBelow
//                   _scaleName
//                   _isCyclic
//                   _isNonCyclic


void FUN_00843ae0(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_02513bd8;
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_02737eeb == '\0') {
    FUN_00844190();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_02737eeb == '\0') {
    FUN_00844300();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 8) = 0;
  // [STATIC_INIT: property registration]
  if (g_02737eeb == '\0') {
    FUN_00844470();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  // [STATIC_INIT: property registration]
  if (g_02737eeb == '\0') {
    FUN_008445e0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_02737eeb == '\0') {
    FUN_00844750();
    FUN_00e87980();
  }
  FUN_008448c0();
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_02737eeb == '\0') {
    FUN_00844b40();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x59) = 0;
  // [STATIC_INIT: property registration]
  if (g_02737eeb == '\0') {
    FUN_00844cb0();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 01b41b10
// ============================================================
// Function: FUN_01b41b10
// Address: 01b41b10
// Size: 685 bytes
// Class: MUScaleCreationData
// String references:
//   "MUScaleCreationData"
//   "setIsCyclic"
//   "setIsNonCyclic"
// === MUScaleCreationData properties ===
//                   _cycleSize
//                   _degrees
//                   _degreesDistance
//                   _degreesAbove
//                   _degreesBelow
//                   _scaleName
//                   _isCyclic
//                   _isNonCyclic


void FUN_01b41b10(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028b43a0 = "setIsCyclic";
      g_028b43a8 = &g_02737e30;
      g_028b43b0 = 0;
      g_028b43b8 = &g_027e46d0;
      g_028b43c0 = FUN_01b42170;
      g_028b43c8 = FUN_01b41de0;
      g_028b43d0 = 0;
      ram_00000000028b43d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b43e8 = "setIsNonCyclic";
      g_028b43f0 = &g_02737e30;
      g_028b43f8 = 0;
      g_028b4400 = &g_027e46d0;
      g_028b4408 = FUN_01b42170;
      g_028b4410 = FUN_01b41e60;
      g_028b4418 = 0;
      ram_00000000028b4420 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

