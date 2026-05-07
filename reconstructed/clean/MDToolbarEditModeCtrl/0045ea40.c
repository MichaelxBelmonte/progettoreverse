// Function: FUN_0045ea40
// Address: 0045ea40
// Size: 1184 bytes
// Class: MDToolbarEditModeCtrl
// === MDToolbarEditModeCtrl properties ===
//                   _editButton
//                   _naButton
//                   _audioSourceObserver


void FUN_0045ea40(void* param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint64_t uVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t this_ptr;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  uint64_t local_48;
  int64_t local_40;
  char local_38;
  
  FUN_0045f200();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0045ea95;
    }
LAB_0045eacd:
    bVar3 = true;
    local_48 = 0;
    bVar2 = true;
    bVar1 = true;
    lVar6 = *(int64_t *)(this_ptr + 0x98);
joined_r0x0045ebe4:
    if (lVar6 != 0) {
      *(void*)(this_ptr + 0x98) = 0;
      FUN_00d50b20();
      bVar1 = bVar2;
    }
    if (bVar1) goto LAB_0045eeb5;
  }
  else {
    if (local_40 == 0) goto LAB_0045eacd;
LAB_0045ea95:
    FUN_0021a630();
    uVar4 = (**(code **)(*local_58 + 0xa00))();
    lVar6 = local_40;
    if (local_40 == 0) {
      lVar6 = 0;
      local_48 = 0;
    }
    else if (local_38 == '\0') {
      uVar4 = FUN_00d50b00();
      local_48 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      local_48 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar6 == 0) {
      bVar3 = true;
      bVar2 = false;
      bVar1 = false;
      lVar6 = *(int64_t *)(this_ptr + 0x98);
      goto joined_r0x0045ebe4;
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar6 = FUN_00e8b990();
    if (lVar6 == 0) {
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      lVar6 = *(int64_t *)(this_ptr + 0x98);
      goto joined_r0x0045ebe4;
    }
    if (*(int64_t *)(this_ptr + 0x98) == 0) {
LAB_0045ec41:
      FUN_00d50b00();
      local_b8 = g_027060a0;
      if (g_027060a0 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_78 = FUN_00e8b990();
      local_70 = 0;
      if (local_78 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      FUN_00115af0();
      FUN_00e86210();
      local_a8 = g_027060a8;
      if (g_027060a8 != 0) {
        FUN_00d50b00();
      }
      local_a0 = '\x01';
      FUN_00c841b0();
      local_68 = local_58;
      local_60 = 0;
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_60 = '\x01';
      local_90 = '\0';
      local_98 = 0;
      FUN_000bfbc0(&local_78,&local_b8,0xa0,&local_68);
      lVar6 = *(int64_t *)(this_ptr + 0x98);
      lVar7 = lVar6;
      if (lVar6 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar7 = 0;
            goto LAB_0045ed9c;
          }
          FUN_00d50b00();
          lVar6 = *(int64_t *)(this_ptr + 0x98);
          *(int64_t *)(this_ptr + 0x98) = local_40;
          lVar7 = local_40;
        }
        else {
          local_38 = '\0';
          lVar7 = local_40;
LAB_0045ed9c:
          *(int64_t *)(this_ptr + 0x98) = lVar7;
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
          lVar7 = local_40;
        }
      }
      if ((local_38 != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      bVar3 = false;
    }
    else {
      FUN_000bfee0();
      lVar6 = local_40;
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar7 = FUN_00e8b990();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 != lVar7) goto LAB_0045ec41;
      bVar3 = false;
    }
  }
  FUN_00d50b20();
LAB_0045eeb5:
  if (((char)local_48 != '\0') && (!bVar3)) {
    FUN_00d50b20();
  }
  return;
}

