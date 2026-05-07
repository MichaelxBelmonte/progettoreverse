// Function: FUN_00b4f760
// Address: 00b4f760
// Size: 628 bytes
// Class: GNPlugInWrapperDelegate
// String references:
//   "GNPlugInWrapperDelegate"

uint64_t FUN_00b4f760(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int64_t this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  
  FUN_00da7190();
  lVar1 = *(int64_t *)(this_ptr + 0x28);
  if (lVar1 != 0) {
    FUN_01d3a910();
    local_70 = '\0';
    local_78 = 0;
    (*PTR__objc_msgSend_024a9998)(param_1,&local_78);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    (*PTR__objc_msgSend_024a9998)();
    FUN_01f27fe0();
    plVar2 = local_48;
    if ((g_026cbca0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_026cbc88 = "GNPlugInWrapperDelegate";
      g_026cbc98 = 0;
      g_026cbc90 = 0;
      ___cxa_guard_release();
    }
    if (plVar2 == (int64_t *)0x0) {
      lVar4 = 0;
      local_58 = *(int64_t *)(this_ptr + 0x28);
    }
    else {
      (**(code **)(*plVar2 + 0x360))();
      lVar4 = FUN_00e86120(param_1,1);
      local_58 = *(int64_t *)(this_ptr + 0x28);
    }
    if (local_58 != 0) {
      local_50 = 0;
      FUN_00d50b00();
    }
    local_50 = '\x01';
    (**(code **)(*(int64_t *)((int64_t)plVar2 + lVar4) + 0x30))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x4d0))();
    (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x990))();
    FUN_00d50130();
    unaff_RBX = g_028a5118;
    if (g_028a5118 != 0) {
      plVar2 = *(int64_t **)(this_ptr + 0x28);
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_40 = '\0';
      local_48 = plVar2;
      FUN_00ca13a0();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    local_60 = '\0';
    local_68 = 0;
    FUN_01d3a930();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x28) != 0) {
      *(void*)(this_ptr + 0x28) = 0;
      FUN_00d50b20();
    }
  }
  FUN_00da71b0();
  return CONCAT71((int7)((uint64_t)unaff_RBX >> 8),lVar1 != 0) & 0xffffffff;
}

