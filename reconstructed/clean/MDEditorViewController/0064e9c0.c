// Function: FUN_0064e9c0
// Address: 0064e9c0
// Size: 2081 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_0064e9c0(void* param_1,int64_t *param_2)

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  void *pvVar4;
  uint64_t uVar5;
  char *pcVar6;
  int64_t lVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_e8;
  char local_e0;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  int64_t *local_68;
  uint64_t local_60;
  int64_t local_58;
  char local_50;
  char local_48 [8];
  int64_t local_40;
  char local_38 [8];
  
  lVar1 = *(int64_t *)(arg1 + 0x80);
  local_68 = param_2;
  if (lVar1 == 0) {
    local_60 = 0;
  }
  else {
    FUN_00d50b00();
    FUN_0053a480();
    if (local_40 == 0) {
      bVar2 = false;
    }
    else {
      FUN_0053a480();
      bVar2 = 0 < *(int *)(local_58 + 0xc);
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar2) {
      FUN_0053a480();
      FUN_00d23310();
      lVar7 = local_40;
      param_1 = CONCAT31((int3)(param_1 >> 8),local_38[0]);
      pcVar6 = &local_78;
      if (local_38[0] != '\0') {
        pcVar6 = local_38;
      }
      local_78 = local_38[0];
      *pcVar6 = '\0';
      if ((local_38[0] != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 == '\0') && (lVar7 != 0)) {
        FUN_00d50b00();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 == 0) goto LAB_0064ebab;
      FUN_004f9670();
      lVar7 = local_40;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 == 0) {
        local_60 = 0;
        lVar7 = 0;
      }
      else {
        FUN_004f9670();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar5 = FUN_004fae50();
        lVar7 = local_40;
        if (local_40 == 0) {
          lVar7 = 0;
          local_60 = 0;
        }
        else if (local_38[0] == '\0') {
          uVar5 = FUN_00d50b00();
          local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = '\0';
          local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      if (lVar7 != 0) goto LAB_0064f19c;
    }
    else {
LAB_0064ebab:
      local_60 = 0;
    }
    FUN_0053a050();
    if (local_40 == 0) {
      bVar2 = false;
    }
    else {
      FUN_0053a050();
      bVar2 = 0 < *(int *)(local_58 + 0xc);
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar2) {
      FUN_0053a050();
      FUN_00d23310();
      lVar7 = local_40;
      param_1 = CONCAT31((int3)(param_1 >> 8),local_38[0]);
      pcVar6 = local_48;
      if (local_38[0] != '\0') {
        pcVar6 = local_38;
      }
      local_48[0] = local_38[0];
      *pcVar6 = '\0';
      if ((local_38[0] != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01653bd0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8f20();
      lVar3 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
        FUN_00d50b20();
      }
      if ((local_48[0] != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_004f9670();
        lVar7 = local_40;
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_004f9670();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = FUN_004fae50();
          lVar7 = local_40;
          if (local_40 == 0) {
            lVar7 = 0;
          }
          else if (local_38[0] == '\0') {
            uVar5 = FUN_00d50b00();
            local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            if ((local_38[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
            local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        if (lVar7 != 0) goto LAB_0064f19c;
      }
    }
  }
  if (*local_68 != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01653bd0();
    lVar7 = local_40;
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01653bd0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8f20();
      lVar7 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_004f9670();
        lVar7 = local_40;
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_004f9670();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = FUN_004fae50();
          lVar7 = local_40;
          if (local_40 == 0) {
            lVar7 = 0;
          }
          else if (local_38[0] == '\0') {
            uVar5 = FUN_00d50b00();
            local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            if ((local_38[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
            local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        goto LAB_0064f19c;
      }
    }
  }
  lVar7 = 0;
LAB_0064f19c:
  *(void*)(this_ptr + 1) = 0;
  if (((char)local_60 == '\0') && (lVar7 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = lVar7;
  *(void*)(this_ptr + 1) = 1;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

