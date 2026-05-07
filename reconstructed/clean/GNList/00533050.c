// Function: FUN_00533050
// Address: 00533050
// Size: 1603 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00533050(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void* pVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  char *pcVar8;
  int iVar9;
  int64_t this_ptr;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  int64_t local_70;
  char local_68 [8];
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  FUN_00517fa0();
  FUN_00b68420();
  if (local_70 == 0) {
    bVar2 = false;
    bVar1 = false;
  }
  else if (*(int64_t *)(this_ptr + 0x108) == 0) {
    bVar2 = false;
    bVar1 = false;
  }
  else {
    FUN_00d50b00();
    bVar2 = true;
    bVar1 = true;
    FUN_00d50b20();
  }
  if ((local_68[0] != '\0') && (bVar1 = bVar2, local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_01f27fe0();
    lVar6 = *(int64_t *)(this_ptr + 0x108);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    FUN_000c4290();
    lVar3 = local_70;
    if (local_68[0] == '\0') {
      if (((local_70 != 0) && (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68[0] = '\0';
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    lVar6 = local_70;
    pVar4 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_68[0]);
    pcVar8 = local_38;
    if (local_68[0] != '\0') {
      pcVar8 = local_68;
    }
    local_38[0] = local_68[0];
    *pcVar8 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_0051be00();
    pvVar5 = _pthread_getspecific(pVar4);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    local_78 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      local_68[0] = '\0';
      local_70 = 0;
      local_60 = lVar3;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar9 = -local_58._4_4_;
          }
          else {
            iVar9 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar9);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar9 = 0;
          }
          local_58 = CONCAT44(iVar9,(int)local_58);
        }
        lVar6 = (int64_t)(int)local_58;
        iVar9 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar9);
        if (*(int *)(local_60 + 0xc) <= iVar9) break;
        local_70 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + 8 + lVar6 * 8);
        FUN_0051be00();
        local_a8 = local_48;
        local_a0 = 0;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_a0 = '\x01';
        FUN_004a1c00();
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_0015ee90();
    }
    if (*(int *)(lVar3 + 0xc) != 0) {
      do {
        pVar4 = FUN_00532dd0();
        lVar7 = (int64_t)(int)pVar4;
        lVar6 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar7 * 8);
        if (lVar6 != 0) {
          FUN_00d50b00();
          pVar4 = (void*)lVar7;
        }
        FUN_00d23620();
        FUN_0051be00();
        lVar7 = local_70;
        local_90 = 0;
        if (local_68[0] == '\0') {
          if (local_70 != 0) {
            FUN_00d50b00();
          }
          lVar6 = *(int64_t *)(lVar6 + 0x110);
        }
        else {
          local_68[0] = '\0';
          lVar6 = *(int64_t *)(lVar6 + 0x110);
        }
        local_90 = '\x01';
        local_98 = lVar7;
        if (lVar6 != 0) {
          local_90 = '\x01';
          FUN_00d50b00();
        }
        pvVar5 = _pthread_getspecific(pVar4);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00156380();
        local_88 = local_48;
        local_80 = 0;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_80 = '\x01';
        local_b8 = local_78;
        local_b0 = '\0';
        FUN_004a17d0(0xffffffff,&local_b8);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68[0] != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      } while (*(int *)(lVar3 + 0xc) != 0);
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
    lVar6 = local_78;
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

