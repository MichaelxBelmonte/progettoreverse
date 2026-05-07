// Function: FUN_01b8fc70
// Address: 01b8fc70
// Size: 1336 bytes
// Class: MUScaleModeSequence
// String references:
//   "MUScaleModeSequence"
// === MUScaleModeSequence properties ===
//   bool            _isCyclic
//   GNInt           _fundamentalIndex
//   bool            _modeOffsetIsLocked
//   GNInt           _modeFundamentalOffset
//   GNInt           _modeFundamentalFifthsDirection
//   MUDescriptionGrade _descriptionGrade
//                   _scaleMode
//                   _endTime
//                   _startQuarter
//                   _endQuarter
//                   _doUpdate


void FUN_01b8fc70(uint32_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  uint8_t uVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  int64_t lVar9;
  void* pVar10;
  int64_t *in_RCX;
  uint64_t uVar11;
  char *pcVar12;
  int64_t lVar13;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((int64_t *)this_ptr[0x3f] == (int64_t *)0x0) goto LAB_01b8fe49;
  plVar1 = (int64_t *)*arg1;
  if (plVar1 == (int64_t *)this_ptr[0x3f]) {
    pvVar8 = _pthread_getspecific((void*)in_RCX);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    lVar2 = local_58;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_48 = lVar2;
    local_40[0] = '\0';
    param_1 = FUN_01b6d800();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      param_1 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      param_1 = FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      param_1 = FUN_00d50b20();
    }
    goto LAB_01b8fe49;
  }
  if ((g_027be908 == '\0') &&
     (iVar7 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_00, iVar7 != 0)) {
    g_027be858 = FUN_010ec850();
    g_027be840 = "MUScaleModeSequence";
    g_027be848 = 0x70;
    g_027be850 = FUN_0124b550;
    g_027be860 = 0;
    ram_00000000027be868 = 0;
    g_027be870 = 0;
    ram_00000000027be878 = 0;
    g_027be880 = 0;
    ram_00000000027be888 = 0;
    g_027be890 = 0;
    ram_00000000027be898 = 0;
    g_027be8a0 = 0;
    ram_00000000027be8a8 = 0;
    g_027be8b0 = 0;
    ram_00000000027be8b8 = 0;
    g_027be8c0 = 0;
    ram_00000000027be8c8 = 0;
    g_027be8d0 = 0;
    ram_00000000027be8d8 = 0;
    g_027be8e0 = 0;
    ram_00000000027be8e8 = 0;
    g_027be8f0 = 0;
    ram_00000000027be8f8 = 0;
    g_027be900 = 0;
    param_1 = ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01b8fcdc:
    in_RCX = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    in_RCX = arg1;
    param_1 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_01b8fcdc;
  }
  if (*in_RCX != 0) {
    pvVar8 = _pthread_getspecific((void*)in_RCX);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    lVar2 = local_58;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_48 = lVar2;
    local_40[0] = '\0';
    param_1 = FUN_01b6d800();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      param_1 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      param_1 = FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      param_1 = FUN_00d50b20();
    }
  }
LAB_01b8fe49:
  pVar10 = (void*)in_RCX;
  local_68 = *param_2;
  local_60 = '\0';
  FUN_01b68d40(param_1,&local_68);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  cVar4 = (**(code **)(*this_ptr + 0xa78))();
  *(void*)(this_ptr + 0x40) = 1;
  if (this_ptr[0x3f] != 0) {
    FUN_00d50b00();
    lVar2 = this_ptr[0x3f];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar8 = _pthread_getspecific(pVar10);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    lVar13 = local_48;
    pvVar8 = _pthread_getspecific(pVar10);
    lVar3 = local_48;
    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar13 = lVar3, lVar9 != 0)) {
      lVar13 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    iVar7 = *(int *)(*(int64_t *)(lVar13 + 0x48) + 0x18);
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (iVar7 + 7U < 0xf) {
      lVar2 = this_ptr[0x3f];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510d50();
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar11 = 0;
      FUN_01252670(0,0,0,0);
      lVar13 = local_48;
      pVar10 = (void*)CONCAT71((int7)((uint64_t)uVar11 >> 8),local_40[0]);
      pcVar12 = local_38;
      if (local_40[0] != '\0') {
        pcVar12 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar12 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_0173f250();
      *(void*)(this_ptr + 0x40) = uVar5;
      if ((local_38[0] != '\0') && (lVar13 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  cVar6 = (**(code **)(*this_ptr + 0xa78))();
  if (cVar4 != cVar6) {
    (**(code **)(*this_ptr + 0x620))();
  }
  return;
}

