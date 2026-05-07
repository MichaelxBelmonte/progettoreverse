// Function: FUN_01e62e00
// Address: 01e62e00
// Size: 914 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e62e00(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar4 = g_027f3fc8;
  plVar1 = (int64_t *)*param_2;
  if (plVar1 == (int64_t *)0x0) goto LAB_01e63152;
  if (g_027f3fc8 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = g_027f3fe8;
  if (cVar3 == '\0') {
    plVar1 = (int64_t *)*param_2;
    if (g_027f3fe8 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_027f3ff0;
    if (cVar3 == '\0') {
      plVar1 = (int64_t *)*param_2;
      if (g_027f3ff0 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar4 = g_027f3fd0;
      if (cVar3 == '\0') {
        plVar1 = (int64_t *)*param_2;
        if (g_027f3fd0 != 0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*plVar1 + 0x50))();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        lVar4 = g_027f3fe0;
        if (cVar3 == '\0') {
          plVar1 = (int64_t *)*param_2;
          if (g_027f3fe0 != 0) {
            FUN_00d50b00();
          }
          cVar3 = (**(code **)(*plVar1 + 0x50))();
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if (cVar3 == '\0') goto LAB_01e63152;
          (**(code **)(*arg1 + 0x6a0))();
          lVar4 = local_40;
          if (local_40 == 0) goto LAB_01e63129;
          bVar2 = true;
          if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          (**(code **)(*arg1 + 0x698))();
          lVar4 = local_40;
          if (local_40 == 0) goto LAB_01e63129;
          bVar2 = true;
          if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        (**(code **)(*arg1 + 0x690))();
        lVar4 = local_40;
        if (local_40 == 0) goto LAB_01e63129;
        bVar2 = true;
        if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      (**(code **)(*arg1 + 0x688))();
      lVar4 = local_40;
      if (local_40 == 0) goto LAB_01e63129;
      bVar2 = true;
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    (**(code **)(*arg1 + 0x680))();
    lVar4 = local_40;
    if (local_40 == 0) {
LAB_01e63129:
      lVar4 = 0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if (lVar4 != 0) {
    *(void*)(this_ptr + 1) = 0;
    if (!bVar2) {
      FUN_00d50b00();
    }
    *this_ptr = lVar4;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
LAB_01e63152:
  local_50 = *param_2;
  local_48 = '\0';
  FUN_01cb9170(param_1,&local_50);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
}

