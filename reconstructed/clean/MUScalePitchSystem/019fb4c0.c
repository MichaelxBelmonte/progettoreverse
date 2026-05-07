// Function: FUN_019fb4c0
// Address: 019fb4c0
// Size: 1578 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void* FUN_019fb4c0(float param_1,float param_2)

{
  code *pcVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  void*puVar5;
  void* in_ECX;
  code *pcVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar7;
  code *pcVar8;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  float fVar12;
  uint8_t in_XMM5 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t local_120 [8];
  uint8_t local_118 [16];
  int64_t local_108;
  int64_t local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  void*local_e8;
  code *local_e0;
  uint8_t local_d8 [4];
  int iStack_d4;
  int64_t local_d0;
  char local_c8;
  uint32_t local_bc;
  int64_t local_b0;
  char local_a8;
  float local_9c;
  code *local_98;
  char local_90;
  code *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  float local_48;
  float local_44;
  code *local_40;
  uint64_t local_38;
  
  local_48 = param_2;
  local_44 = param_1;
  (**(code **)(**(int64_t **)(arg1 + 0x40) + 0xa18))();
  pcVar8 = local_88;
  if ((((local_80 == '\0') && (local_88 != 0x0)) && (FUN_00d50b00(), local_80 != '\0')) &&
     (local_88 != 0x0)) {
    FUN_00d50b20();
  }
  local_a8 = '\0';
  local_b0 = 0;
  local_40 = pcVar8;
  (**(code **)(**(int64_t **)(arg1 + 0x40) + 0xa20))();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510d50();
  pcVar1 = local_88;
  if (local_80 == '\0') {
    if (((local_88 != 0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
       (local_88 != 0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_bc = 0xffffffff;
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(**(int64_t **)(arg1 + 0x40) + 0x930))(local_44);
  local_f8 = FUN_016c25f0();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(**(int64_t **)(arg1 + 0x40) + 0x930))(local_48);
  local_f0 = FUN_016c25f0();
  local_e0 = g_02572370;
  puVar5 = (void*)0x0;
  local_e8 = &g_02572358;
  local_38 = 0;
  local_9c = local_44;
  pcVar6 = g_02572370;
  while( true ) {
    pvVar3 = _pthread_getspecific((void*)pcVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pcVar6 = local_120;
    uVar9 = local_f0;
    cVar2 = FUN_01252f30(local_f8,&local_b0,local_d8,&local_bc);
    fVar12 = (float)uVar9;
    if (cVar2 == '\0') break;
    if (local_b0 == 0) {
      FUN_00d46dc0((local_48 - local_44) + g_02390124);
      local_108 = local_b0;
      local_100 = local_58;
      FUN_00083ea0(2,&local_100);
      FUN_019f9540();
      local_88 = &g_0253d630;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      local_88 = &g_024c5048;
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_019fb9d0;
    }
    if (puVar5 == (void*)0x0) {
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = local_e8;
      (*local_e0)();
      uVar9 = FUN_00d227d0();
      local_38 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
      plVar7 = *(int64_t **)(arg1 + 0x40);
      if (iStack_d4 != 0) goto LAB_019fb752;
LAB_019fb7f8:
      uVar9 = FUN_01e3f820();
      auVar13._8_4_ = (int)extraout_XMM0_Qb;
      auVar13._0_8_ = uVar9;
      auVar13._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
      auVar14._4_12_ = auVar13._4_12_;
      auVar14._0_4_ = (float)uVar9 + fVar12 + g_02390d00;
    }
    else {
      plVar7 = *(int64_t **)(arg1 + 0x40);
      if (iStack_d4 == 0) goto LAB_019fb7f8;
LAB_019fb752:
      pvVar3 = _pthread_getspecific((void*)pcVar6);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        pcVar6 = local_40;
      }
      FUN_016c98e0();
      uVar9 = (**(code **)(*plVar7 + 0x938))();
      auVar10._0_4_ = (uint)(float)uVar9 & g_023945e0;
      auVar10._4_4_ = (uint)((uint64_t)uVar9 >> 0x20) & _UNK_023945e4;
      auVar10._8_4_ = (uint)extraout_XMM0_Qb_00 & _UNK_023945e8;
      auVar10._12_4_ = (uint)((uint64_t)extraout_XMM0_Qb_00 >> 0x20) & _UNK_023945ec;
      auVar11._4_12_ = SUB1612(auVar10 | g_023945f0,4);
      auVar11._0_4_ = SUB164(auVar10 | g_023945f0,0) + (float)uVar9;
      auVar14 = roundss(in_XMM5,auVar11,0xb);
    }
    pcVar8 = local_40;
    fVar12 = (auVar14._0_4_ - local_9c) + g_02390124;
    local_9c = local_9c + fVar12;
    in_XMM5._4_4_ = auVar14._4_4_;
    in_XMM5._0_4_ = ~-(uint)(local_48 < local_9c) & (uint)fVar12;
    in_XMM5._8_4_ = auVar14._8_4_;
    in_XMM5._12_4_ = auVar14._12_4_;
    in_XMM5 = ZEXT416((uint)(fVar12 - ((local_9c - local_48) + g_02390d00)) &
                      -(uint)(local_48 < local_9c)) | in_XMM5;
    local_118 = in_XMM5;
    if (in_XMM5._0_4_ < g_02390124) break;
    local_d0 = local_b0;
    local_c8 = '\0';
    FUN_00d21140();
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d46dc0(local_118._0_8_);
    local_98 = local_88;
    local_90 = 0;
    if (local_80 == '\0') {
      if (local_88 != 0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_90 = '\x01';
    FUN_00d21140();
    if ((local_90 != '\0') && (local_98 != 0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0x0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  if (((char)local_38 == '\0') && (puVar5 != (void*)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  local_38 = 0;
LAB_019fb9d0:
  if (pcVar1 != 0x0) {
    FUN_00d50b20();
  }
  if (((char)local_38 != '\0') && (puVar5 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (pcVar8 != 0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

