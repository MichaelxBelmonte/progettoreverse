// Function: FUN_002c2710
// Address: 002c2710
// Size: 572 bytes
// Class: GNImage
// === GNImage properties ===
//                   _alternateImage
//                   _disabledImage
//                   _alternateTitle
//                   _isBordered


void FUN_002c2710(void* param_1)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  int64_t lVar4;
  uint uVar5;
  int64_t *plVar6;
  int64_t this_ptr;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x18) == 0) {
    plVar6 = *(int64_t **)(this_ptr + 0x10);
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      plVar6 = *(int64_t **)(this_ptr + 0x10);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar6 + 0x478))();
  }
  else {
    FUN_00b88600();
  }
  (**(code **)(*local_70 + 0x3f0))();
  cVar1 = (**(code **)(*local_a0 + 0x50))();
  uVar5 = 0;
  if (cVar1 != '\0') {
    if (*(int64_t *)(this_ptr + 0x18) == 0) {
      plVar6 = *(int64_t **)(this_ptr + 0x10);
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        plVar6 = *(int64_t **)(this_ptr + 0x10);
        lVar4 = FUN_00e8b990();
        if (lVar4 != 0) {
          plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar6 + 0x478))();
    }
    else {
      FUN_00b88600();
    }
    (**(code **)(*local_50 + 0x3f0))();
    FUN_01f27fe0();
    (**(code **)(*local_80 + 0x760))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    bVar2 = (**(code **)(*local_90 + 0x50))();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar5 = (uint)(bVar2 ^ 1);
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *(uint *)(this_ptr + 0x20) = uVar5;
  return;
}

