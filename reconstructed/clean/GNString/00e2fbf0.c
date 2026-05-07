// Function: FUN_00e2fbf0
// Address: 00e2fbf0
// Size: 843 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e2fbf0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  void*puVar4;
  int64_t *this_ptr;
  int64_t lVar5;
  int iVar6;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  lVar1 = g_028a8b98;
  if (*this_ptr == 0) {
    if (g_028a8b98 != 0) {
      FUN_00d50b00();
    }
    FUN_00e2f480();
    if (g_028a8b98 != local_68) {
      lVar5 = g_028a8b98;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
          lVar5 = g_028a8b98;
        }
      }
      else {
        local_60 = '\0';
      }
      g_028a8b98 = local_68;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_68 != 0) && (g_028a8ba0 == '\0')) {
      g_028a8ba0 = '\x01';
      FUN_00e8cb90();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    lVar5 = g_028a8b98;
    if (g_028a8b98 != 0) {
      if (0 < *(int *)(g_028a8b98 + 0xc)) {
        iVar6 = 0;
        do {
          cVar3 = FUN_00d23d70();
          lVar2 = g_027862c8;
          if (cVar3 == '\0') {
            if (g_027862c8 != 0) {
              FUN_00d50b00();
            }
            FUN_00e2f880();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar5 + 0xc));
      }
      FUN_00e30ff0();
    }
    if (lVar1 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02589080;
  puVar4[2] = 0;
  FUN_00d500e0();
  FUN_00db9a70();
  FUN_00dbbbf0();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_00e2fcbb;
    }
    if (puVar4[2] == 0) goto LAB_00e2fe70;
    puVar4[2] = 0;
LAB_00e2fe5b:
    FUN_00d50b20();
  }
  else {
    local_60 = '\0';
LAB_00e2fcbb:
    lVar1 = puVar4[2];
    if (lVar1 != local_68) {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      puVar4[2] = local_68;
      if (lVar1 != 0) goto LAB_00e2fe5b;
    }
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
LAB_00e2fe70:
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  cVar3 = FUN_00d235a0();
  lVar1 = g_027862c8;
  if (cVar3 != '\0') {
    if (g_027862c8 != 0) {
      FUN_00d50b00();
    }
    FUN_00e2f880();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}

