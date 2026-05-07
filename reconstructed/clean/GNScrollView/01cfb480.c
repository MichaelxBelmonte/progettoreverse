// Function: FUN_01cfb480
// Address: 01cfb480
// Size: 760 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01cfb480(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar6;
  bool bVar7;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01cff350();
  plVar6 = local_40;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01cb4790();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01cfb4f9;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_01cfb4f9:
    local_70 = *arg1;
    local_68 = '\0';
    (**(code **)(*plVar3 + 0x3b0))(param_1,&local_70);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_01cff270();
      if ((plVar6 != plVar3) &&
         (FUN_00d50b00(), bVar7 = plVar6 != (int64_t *)0x0, plVar6 = plVar3, bVar7)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_01cff350();
  plVar3 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027cd570;
  if (plVar3 == plVar6) {
    if (g_027cd570 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar1;
    local_48 = '\x01';
    cVar4 = FUN_00d90870();
    if (cVar4 == '\0') {
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      iVar5 = FUN_00d8c7a0();
      if (iVar5 == 7) {
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        iVar5 = FUN_00d8c7a0();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (iVar5 != 9) goto LAB_01cfb742;
      }
      local_60 = *arg1;
      local_58 = '\0';
      FUN_01cfd750();
      if (local_40 == plVar6) {
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar7 = plVar6 != (int64_t *)0x0;
        plVar6 = local_40;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      else {
        bVar7 = plVar6 != (int64_t *)0x0;
        plVar6 = local_40;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (int64_t *)0x0) {
        lVar1 = *arg1;
        lVar2 = plVar6[5];
        if (lVar2 != lVar1) {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          plVar6[5] = lVar1;
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
        }
        goto LAB_01cfb5d7;
      }
      plVar6 = (int64_t *)0x0;
    }
LAB_01cfb742:
    FUN_01cfe8d0();
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
LAB_01cfb5d7:
    *this_ptr = plVar6;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}

