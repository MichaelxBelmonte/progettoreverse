// Function: FUN_00782ec0
// Address: 00782ec0
// Size: 3385 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00782ec0(uint64_t param_1,int64_t *param_2)

{
  code *pcVar1;
  void*puVar2;
  int64_t lVar3;
  void *pvVar4;
  uint64_t uVar5;
  void*puVar6;
  void*puVar7;
  char *pcVar8;
  void* pVar9;
  int64_t lVar10;
  void**ppuVar11;
  int iVar12;
  int64_t *arg1;
  int64_t *this_ptr;
  void*unaff_R12;
  uint32_t uVar13;
  int64_t local_188;
  uint8_t local_180;
  int64_t *local_178;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  void*local_118;
  char local_110;
  void*local_108;
  char local_100;
  void*local_f8;
  char local_f0;
  char local_d8;
  undefined7 uStack_d7;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  void*local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  void*local_98;
  void*local_90;
  int64_t local_88;
  char local_80 [8];
  int64_t local_78;
  uint64_t local_70;
  int local_68;
  uint64_t local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  void*local_48;
  void*local_40;
  char local_38;
  
  local_178 = param_2;
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  pcVar1 = g_02572370;
  local_98 = puVar2;
  (*g_02572370)();
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*pcVar1)();
  local_90 = puVar2;
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*pcVar1)();
  if (*arg1 == 0) {
    local_60 = 0;
    local_48 = (void*)0x0;
    lVar10 = *local_178;
    lVar3 = local_78;
  }
  else {
    local_80[0] = '\0';
    local_88 = 0;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_60 = 0;
    local_48 = (void*)0x0;
    local_78 = *arg1;
    local_70._4_4_ = 0;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar12 = -local_70._4_4_;
        }
        else {
          iVar12 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar12);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar12 = 0;
        }
        local_70 = CONCAT44(iVar12,(int)local_70);
      }
      lVar3 = (int64_t)(int)local_70;
      iVar12 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar12);
      if (*(int *)(local_78 + 0xc) <= iVar12) break;
      puVar6 = *(void**)(local_78 + 0x10);
      local_88 = puVar6[lVar3 + 1];
      FUN_00782800();
      FUN_004f9cf0();
      puVar7 = (void*)CONCAT71(uStack_57,local_58);
      if (local_50 == '\0') {
        if (puVar7 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_38 = '\0';
      local_40 = puVar7;
      FUN_00d23480();
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar7 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((void*)puVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e60a0();
      local_c0 = 0;
      local_c8 = CONCAT71(uStack_57,local_58);
      if (local_50 == '\0') {
        if (local_c8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_c0 = '\x01';
      uVar5 = FUN_0141af60();
      puVar7 = local_40;
      if (local_40 == local_48) {
        if (((char)local_60 != '\0') || (local_40 == (void*)0x0)) {
          unaff_R12 = (void*)(local_60 & 0xffffffff);
          goto joined_r0x0078321d;
        }
        puVar7 = local_48;
        if (local_38 == '\0') {
          FUN_00d50b00();
          puVar7 = local_48;
          goto joined_r0x00783539;
        }
LAB_007831b5:
        local_38 = '\0';
        local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        local_48 = puVar7;
      }
      else {
        if (local_38 != '\0') {
          if (((char)local_60 != '\0') && (local_48 != (void*)0x0)) {
            uVar5 = FUN_00d50b20();
          }
          goto LAB_007831b5;
        }
        if (local_40 != (void*)0x0) {
          FUN_00d50b00();
        }
        if (((char)local_60 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
joined_r0x00783539:
        unaff_R12 = (void*)CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
        local_48 = puVar7;
joined_r0x0078321d:
        if ((local_38 == '\0') || (local_40 == (void*)0x0)) {
          local_60 = (uint64_t)unaff_R12 & 0xffffffff;
        }
        else {
          FUN_00d50b20();
          local_60 = (uint64_t)unaff_R12 & 0xffffffff;
        }
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((void*)puVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar12 = FUN_012e6040();
      if (iVar12 != 0) {
        pvVar4 = _pthread_getspecific((void*)puVar6);
        unaff_R12 = local_48;
        if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), unaff_R12 = local_48, lVar3 != 0)) {
          puVar6 = local_48;
          unaff_R12 = (void*)local_48[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
        pVar9 = (void*)puVar6;
        (**(code **)(*this_ptr + 0x628))();
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a1110();
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313ad0();
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        local_a0 = 0;
        local_a8 = CONCAT71(uStack_57,local_58);
        if (local_50 == '\0') {
          if (local_a8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_a0 = '\x01';
        FUN_016cbba0();
        local_b8 = local_40;
        local_b0 = 0;
        if (local_38 == '\0') {
          if (local_40 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_b0 = '\x01';
        FUN_0141bb40();
        if ((local_b0 != '\0') && (local_b8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (CONCAT71(uStack_d7,local_d8) != 0)) {
          FUN_00d50b20();
        }
        if ((local_150 != '\0') && (local_158 != 0)) {
          FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_000be170();
    lVar10 = *local_178;
    lVar3 = local_78;
  }
  local_78 = lVar10;
  if (local_78 != 0) {
    local_80[0] = '\0';
    local_88 = 0;
    local_70 = 0xffffffff;
    local_68 = 0;
    while( true ) {
      lVar3 = (int64_t)(int)local_70;
      iVar12 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar12);
      if (*(int *)(local_78 + 0xc) <= iVar12) break;
      lVar10 = *(int64_t *)(local_78 + 0x10);
      local_88 = *(int64_t *)(lVar10 + 8 + lVar3 * 8);
      FUN_004f9cf0();
      pVar9 = (void*)lVar10;
      lVar3 = CONCAT71(uStack_57,local_58);
      if (local_50 == '\0') {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_38 = '\0';
      local_40 = (void*)lVar3;
      FUN_00d23480();
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_0250d198;
      puVar6[2] = 0;
      *(void*)(puVar6 + 3) = 0;
      *(void*)((int64_t)puVar6 + 0x1c) = 0;
      FUN_00d500e0();
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6000();
      lVar3 = puVar6[2];
      puVar7 = (void*)lVar3;
      if ((void*)lVar3 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (void*)0x0) {
            puVar7 = (void*)0x0;
            goto LAB_00783763;
          }
          FUN_00d50b00();
          lVar3 = puVar6[2];
          puVar6[2] = local_40;
          puVar7 = local_40;
        }
        else {
          local_38 = '\0';
          puVar7 = local_40;
LAB_00783763:
          puVar6[2] = puVar7;
        }
        pVar9 = (void*)lVar3;
        if (lVar3 != 0) {
          FUN_00d50b20();
          puVar7 = local_40;
        }
      }
      if ((local_38 != '\0') && (puVar7 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7d10();
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011f2610();
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar13 = FUN_012a46e0();
      *(void*)(puVar6 + 3) = uVar13;
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar12 = FUN_012e6040();
      *(bool *)((int64_t)puVar6 + 0x1c) = iVar12 == 2;
      local_38 = '\0';
      local_40 = puVar6;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar12 = -local_70._4_4_;
        }
        else {
          local_70 = CONCAT44(local_70._4_4_,(int)local_70 - local_70._4_4_);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar12 = 0;
        }
        local_70 = CONCAT44(iVar12,(int)local_70);
      }
    }
    FUN_000be170();
    lVar3 = local_78;
  }
  local_78 = lVar3;
  local_118 = local_90;
  local_110 = '\0';
  local_100 = '\0';
  local_f8 = local_48;
  local_f0 = '\0';
  ppuVar11 = &local_108;
  local_108 = puVar2;
  FUN_0164bd30(ppuVar11,&local_118,&local_f8);
  lVar3 = local_88;
  pVar9 = (void*)ppuVar11;
  if (local_80[0] == '\0') {
    if (((local_88 != 0) && (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80[0] = '\0';
  }
  if ((local_f0 != '\0') && (local_f8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    (**(code **)(*this_ptr + 0x498))();
    FUN_00cb1f10();
    FUN_00db3760();
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    lVar3 = local_88;
    local_d8 = local_80[0];
    pcVar8 = &local_d8;
    if (local_80[0] != '\0') {
      pcVar8 = local_80;
    }
    *pcVar8 = '\0';
    if ((local_80[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    uVar13 = FUN_00d23310();
    lVar10 = local_88;
    pcVar8 = local_80;
    if (local_80[0] == '\0') {
      pcVar8 = &local_58;
    }
    local_58 = local_80[0];
    *pcVar8 = '\0';
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if ((local_58 == '\0') && (lVar10 != 0)) {
      uVar13 = FUN_00d50b00();
    }
    local_188 = lVar10;
    local_180 = 1;
    FUN_007649a0(uVar13,&local_188);
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_90 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_98 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

