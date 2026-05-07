// Function: FUN_01bbc610
// Address: 01bbc610
// Size: 1448 bytes
// Class: MUTextFieldDragAndEditHandler
// === MUTextFieldDragAndEditHandler properties ===
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


int64_t * FUN_01bbc610(uint64_t param_1,double param_2)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  char *pcVar4;
  void* in_ECX;
  void* pVar5;
  char *pcVar6;
  int64_t *in_RDX;
  int iVar7;
  int64_t *this_ptr;
  int64_t lVar8;
  char cVar9;
  uint uVar10;
  uint32_t uVar11;
  float fVar12;
  uint uVar13;
  uint32_t uVar14;
  float extraout_XMM0_Db;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  double dVar15;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a0;
  char local_98;
  int64_t *local_80;
  char local_78 [8];
  int64_t local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  uint64_t local_48;
  uint uStack_40;
  uint uStack_3c;
  char local_38 [8];
  
  fVar12 = (float)((uint64_t)param_1 >> 0x20);
  lVar8 = *in_RDX;
  cVar9 = (char)in_RDX[1];
  if ((cVar9 == '\0') || (lVar8 == 0)) {
    if (lVar8 == 0) goto LAB_01bbc6b7;
LAB_01bbc663:
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar15 = (double)FUN_0125a280();
    uVar10 = (uint)(float)(dVar15 - param_2) & g_02390140;
    uVar13 = (uint)((uint64_t)(dVar15 - param_2) >> 0x20) & _UNK_02390144;
    uStack_40 = extraout_XMM0_Dc & _UNK_02390148;
    uStack_3c = extraout_XMM0_Dd & _UNK_0239014c;
  }
  else {
    FUN_00d50b00();
    if (*in_RDX != 0) goto LAB_01bbc663;
LAB_01bbc6b7:
    uVar10 = 0;
    uVar13 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
  }
  local_48 = (double)CONCAT44(uVar13,uVar10);
  FUN_01a58dc0();
  dVar15 = g_02390108;
  (**(code **)(*local_80 + 0x9b8))(SUB84(param_2,0));
  lVar3 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    local_48 = (double)(float)local_48;
    local_68 = '\0';
    local_70 = 0;
    local_60 = lVar3;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar7 = -local_58._4_4_;
        }
        else {
          iVar7 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar7);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar7 = 0;
        }
        local_58 = CONCAT44(iVar7,(int)local_58);
      }
      lVar3 = (int64_t)(int)local_58;
      iVar7 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar7);
      if (*(int *)(local_60 + 0xc) <= iVar7) break;
      local_70 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + 8 + lVar3 * 8);
      uVar11 = FUN_01a58dc0();
      local_a0 = local_70;
      local_98 = '\0';
      (**(code **)(*local_b8 + 0xab0))(uVar11,&local_a0);
      local_38[0] = local_78[0];
      pcVar6 = local_38;
      pcVar4 = local_78;
      if (local_78[0] == '\0') {
        pcVar4 = pcVar6;
      }
      *pcVar4 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar5 = (void*)pcVar6;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_80 == (int64_t *)0x0) {
        uVar11 = SUB84(local_48,0);
        uVar14 = (uint32_t)((uint64_t)local_48 >> 0x20);
      }
      else {
        (**(code **)(*local_80 + 0x4d8))();
        if ((extraout_XMM0_Db < fVar12) &&
           (fVar12 < extraout_XMM0_Db + (float)((uint64_t)dVar15 >> 0x20))) {
          pvVar2 = _pthread_getspecific(pVar5);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar15 = (double)FUN_0125a280();
          lVar3 = local_70;
          dVar15 = (double)(float)((uint)(float)(dVar15 - param_2) & g_02390140);
          if ((lVar8 == 0) || (dVar15 < local_48)) {
            local_48 = dVar15;
            if (local_70 == lVar8) {
              if ((cVar9 == '\0') && (local_70 != 0)) {
                lVar3 = lVar8;
                if (local_68 != '\0') goto LAB_01bbc9a0;
                cVar9 = '\x01';
                FUN_00d50b00();
              }
            }
            else {
              if (local_68 == '\0') {
                if (local_70 != 0) {
                  FUN_00d50b00();
                }
                if ((cVar9 != '\0') && (lVar8 != 0)) {
                  FUN_00d50b20();
                  lVar8 = lVar3;
                  cVar9 = '\x01';
                  goto LAB_01bbc956;
                }
              }
              else {
                if ((cVar9 != '\0') && (lVar8 != 0)) {
                  FUN_00d50b20();
                }
LAB_01bbc9a0:
                local_68 = '\0';
              }
              lVar8 = lVar3;
              cVar9 = '\x01';
            }
          }
        }
LAB_01bbc956:
        if (local_38[0] == '\0') {
          uVar11 = SUB84(local_48,0);
          uVar14 = (uint32_t)((uint64_t)local_48 >> 0x20);
        }
        else {
          FUN_00d50b20();
          uVar11 = SUB84(local_48,0);
          uVar14 = (uint32_t)((uint64_t)local_48 >> 0x20);
        }
      }
      local_48 = (double)CONCAT44(uVar14,uVar11);
    }
    lVar3 = local_60;
    FUN_001159b0();
    in_ECX = (void*)lVar3;
    FUN_00d50b20();
  }
  if (lVar8 == 0) {
    *(void*)(this_ptr + 1) = 0;
    goto LAB_01bbcbc6;
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01268dd0();
  lVar3 = local_70;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01bbcab3;
    }
  }
  else if (local_70 != 0) {
LAB_01bbcab3:
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_01263cf0();
    if (cVar1 == '\0') {
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_48 = (double)FUN_0125a280();
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_0125a280();
      if ((float)((uint)(float)(dVar15 - param_2) & g_02390140) <
          (float)((uint)(float)(local_48 - param_2) & g_02390140)) {
        *this_ptr = lVar3;
        *(void*)(this_ptr + 1) = 1;
        if (cVar9 == '\0') {
          return this_ptr;
        }
        FUN_00d50b20();
        return this_ptr;
      }
    }
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  if (cVar9 == '\0') {
    FUN_00d50b00();
  }
LAB_01bbcbc6:
  *this_ptr = lVar8;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

