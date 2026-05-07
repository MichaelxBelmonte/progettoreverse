// Function: FUN_01b7a810
// Address: 01b7a810
// Size: 1038 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01b7a810(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  void* pVar6;
  void*puVar7;
  uint64_t uVar8;
  char *pcVar9;
  int64_t this_ptr;
  int64_t local_98;
  uint8_t local_90;
  uint64_t local_88;
  uint8_t local_80;
  uint64_t local_78;
  uint8_t local_70 [8];
  int64_t local_68;
  char local_60 [8];
  uint64_t local_58;
  uint32_t local_4c;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  local_4c = 0xffffffff;
  if (*(int64_t *)(this_ptr + 0x148) == 0) {
    return;
  }
  uVar8 = *(uint64_t *)(this_ptr + 0x150);
  FUN_01e057f0();
  local_40 = '\0';
  local_48 = 0;
  local_78 = uVar8;
  if (uVar8 >> 0x20 == 0) {
    lVar1 = *(int64_t *)(this_ptr + 0x158);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar7 = &local_58;
    FUN_01252670(puVar7,0,local_70,&local_4c);
    lVar2 = local_68;
    param_1 = (void*)CONCAT71((int7)((uint64_t)puVar7 >> 8),local_60[0]);
    pcVar9 = local_38;
    if (local_60[0] != '\0') {
      pcVar9 = local_60;
    }
    local_38[0] = local_60[0];
    *pcVar9 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    cVar4 = local_40;
    lVar3 = local_48;
    if (local_48 == lVar2) {
      if ((local_40 == '\0') && (lVar2 != 0)) {
        if (local_38[0] == '\0') {
          FUN_00d50b00();
        }
        goto LAB_01b7a963;
      }
      if ((local_38[0] != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38[0] == '\0') {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_48 = lVar2;
        if ((cVar4 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = lVar2;
        if ((local_40 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_01b7a963:
      local_40 = '\x01';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_48 == 0) goto LAB_01b7a97f;
  }
  else {
LAB_01b7a97f:
    lVar1 = *(int64_t *)(this_ptr + 0x158);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = local_78;
    FUN_012521f0(local_78,0,&local_58,local_70);
    param_1 = (void*)CONCAT71((int7)(uVar8 >> 8),local_60[0]);
    pcVar9 = local_38;
    if (local_60[0] != '\0') {
      pcVar9 = local_60;
    }
    local_38[0] = local_60[0];
    *pcVar9 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    cVar4 = local_40;
    lVar2 = local_48;
    if (local_48 == local_68) {
      if ((local_40 == '\0') && (local_68 != 0)) {
        if (local_38[0] == '\0') {
          FUN_00d50b00();
        }
        goto LAB_01b7aa86;
      }
      if ((local_38[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38[0] == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
        local_48 = local_68;
        if ((cVar4 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = local_68;
        if ((local_40 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_01b7aa86:
      local_40 = '\x01';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_48 == 0) goto LAB_01b7abfb;
  }
  lVar1 = *(int64_t *)(this_ptr + 0x158);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar7 = &local_58;
  cVar4 = FUN_01253c10(puVar7,&local_48,local_70,&local_4c);
  pVar6 = (void*)puVar7;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    if (local_48 == 0) {
      lVar1 = *(int64_t *)(this_ptr + 0x158);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01253c10(&local_58,&local_48,local_70,&local_4c);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    local_98 = local_48;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    FUN_01b755e0(local_58,&local_98,&local_88);
  }
LAB_01b7abfb:
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}

