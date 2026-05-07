// Function: FUN_01b7ad50
// Address: 01b7ad50
// Size: 581 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01b7ad50(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  void* pVar4;
  uint64_t uVar5;
  void*puVar6;
  char *pcVar7;
  int64_t this_ptr;
  int64_t local_90;
  uint8_t local_88;
  uint64_t local_80;
  uint8_t local_78;
  int64_t local_70;
  char local_68 [16];
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  uint32_t local_3c;
  char local_38 [8];
  
  local_3c = 0xffffffff;
  if (*(int64_t *)(this_ptr + 0x148) == 0) {
    return;
  }
  uVar5 = *(void*)(this_ptr + 0x150);
  FUN_01e057f0();
  lVar1 = *(int64_t *)(this_ptr + 0x158);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012521f0(uVar5,0,&local_58,local_68 + 8);
  pVar4 = (void*)CONCAT71((int7)((uint64_t)uVar5 >> 8),local_68[0]);
  pcVar7 = local_38;
  if (local_68[0] != '\0') {
    pcVar7 = local_68;
  }
  local_38[0] = local_68[0];
  *pcVar7 = '\0';
  if ((local_68[0] != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_48 = 0;
  if ((local_38[0] == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  local_50 = local_70;
  local_48 = '\x01';
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    lVar1 = *(int64_t *)(this_ptr + 0x158);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar6 = &local_58;
    cVar2 = FUN_012535e0(puVar6,&local_50,local_68 + 8,&local_3c);
    pVar4 = (void*)puVar6;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      if (local_50 == 0) {
        lVar1 = *(int64_t *)(this_ptr + 0x158);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_012535e0(&local_58,&local_50,local_68 + 8,&local_3c);
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') goto LAB_01b7af72;
      }
      local_90 = local_50;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      FUN_01b755e0(local_58,&local_90,&local_80);
    }
  }
LAB_01b7af72:
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
}

