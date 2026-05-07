// Function: FUN_0048f8a0
// Address: 0048f8a0
// Size: 1143 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0048f8a0(void* param_1)

{
  int64_t lVar1;
  int iVar2;
  void *pvVar3;
  int64_t this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x118);
  if (lVar1 == 0) {
    if (*(int64_t *)(this_ptr + 0x290) != 0) {
      local_38 = '\0';
      local_40 = 0;
LAB_0048f933:
      local_50 = 0;
      goto LAB_0048f994;
    }
LAB_0048f9d1:
    if (*(int64_t *)(this_ptr + 0x2a0) != 0) {
      if (lVar1 != 0) goto LAB_0048f9f0;
      goto LAB_0048fcea;
    }
  }
  else {
    FUN_00d50b00();
    if (*(int64_t *)(this_ptr + 0x290) != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0134a540();
      if (local_38 == '\0') {
        if (local_40 == 0) goto LAB_0048f933;
        FUN_00d50b00();
        local_50 = local_40;
      }
      else {
        local_50 = local_40;
        local_38 = '\0';
      }
LAB_0048f994:
      FUN_01d2a770();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d243a0();
      goto LAB_0048f9d1;
    }
    if (*(int64_t *)(this_ptr + 0x2a0) == 0) goto LAB_0048fd00;
LAB_0048f9f0:
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01326de0();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134a540();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01538fa0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_01326de0();
    if (iVar2 == 2) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0134a540();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar2 = FUN_01538fa0();
      if (iVar2 != 3) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0134a540();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar2 = FUN_01539080();
        if (iVar2 != 0) {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0134a540();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01539090();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_0048fcea:
    (**(code **)(**(int64_t **)(this_ptr + 0x2a0) + 0x998))();
  }
  if (lVar1 == 0) {
    return;
  }
LAB_0048fd00:
  FUN_00d50b20();
  return;
}

