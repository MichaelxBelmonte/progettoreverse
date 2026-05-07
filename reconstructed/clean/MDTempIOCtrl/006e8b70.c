// Function: FUN_006e8b70
// Address: 006e8b70
// Size: 1175 bytes
// Class: MDTempIOCtrl
// === MDTempIOCtrl properties ===
//                   _inputSlot
//                   _outputSlot
//                   _inputLabel
//                   _inputLabelStudio
//                   _outputLabel
//                   _outputLabelStudio


void FUN_006e8b70(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte bVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  double dVar6;
  uint64_t uVar7;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar2 = g_026e1800;
  if (g_026e1800 != 0) {
    FUN_00d50b00();
  }
  dVar6 = (double)FUN_00e7d6f0();
  uVar5 = (uint64_t)(dVar6 * g_023907c0);
  dVar6 = dVar6 * g_023907c0 - g_023907c8;
  uVar7 = FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != 0)) {
    uVar7 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  bVar4 = (byte)(((int64_t)dVar6 & (int64_t)uVar5 >> 0x3f | uVar5) / 3);
  local_90 = lVar2;
  local_88 = '\0';
  FUN_000175c0(uVar7,&local_90);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    local_38 = '\0';
    local_40 = lVar3;
    bVar4 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((lVar3 != 0 & bVar4) == 0) {
    if (*(int64_t *)(this_ptr + 0x88) != 0) {
      FUN_01e40eb0();
      lVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x478))();
      }
    }
    if (*(int64_t *)(this_ptr + 0x98) != 0) {
      FUN_01e40eb0();
      lVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x478))();
      }
    }
    if (*(int64_t *)(this_ptr + 0x10) != 0) {
      if (*(int64_t *)(this_ptr + 0x80) != 0) {
        FUN_01e40eb0();
        lVar2 = local_40;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 == 0) {
          plVar1 = *(int64_t **)(this_ptr + 0x10);
          lVar2 = *(int64_t *)(this_ptr + 0x80);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_58 = '\x01';
          local_60 = lVar2;
          (**(code **)(*plVar1 + 0x450))();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((*(int64_t *)(this_ptr + 0x10) != 0) && (*(int64_t *)(this_ptr + 0x90) != 0)) {
        FUN_01e40eb0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
          plVar1 = *(int64_t **)(this_ptr + 0x10);
          lVar2 = *(int64_t *)(this_ptr + 0x90);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_48 = '\x01';
          local_50 = lVar2;
          (**(code **)(*plVar1 + 0x450))();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  else {
    if (*(int64_t *)(this_ptr + 0x80) != 0) {
      FUN_01e40eb0();
      lVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x478))();
      }
    }
    if (*(int64_t *)(this_ptr + 0x90) != 0) {
      FUN_01e40eb0();
      lVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x478))();
      }
    }
    if (*(int64_t *)(this_ptr + 0x10) != 0) {
      if (*(int64_t *)(this_ptr + 0x88) != 0) {
        FUN_01e40eb0();
        lVar2 = local_40;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 == 0) {
          plVar1 = *(int64_t **)(this_ptr + 0x10);
          lVar2 = *(int64_t *)(this_ptr + 0x88);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_78 = '\x01';
          local_80 = lVar2;
          (**(code **)(*plVar1 + 0x450))();
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((*(int64_t *)(this_ptr + 0x10) != 0) && (*(int64_t *)(this_ptr + 0x98) != 0)) {
        FUN_01e40eb0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
          plVar1 = *(int64_t **)(this_ptr + 0x10);
          lVar2 = *(int64_t *)(this_ptr + 0x98);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_68 = '\x01';
          local_70 = lVar2;
          (**(code **)(*plVar1 + 0x450))();
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  return;
}

