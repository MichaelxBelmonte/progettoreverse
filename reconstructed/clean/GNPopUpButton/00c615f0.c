// Function: FUN_00c615f0
// Address: 00c615f0
// Size: 588 bytes
// Class: GNPopUpButton

void FUN_00c615f0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t this_ptr;
  int64_t lVar5;
  int64_t local_98;
  char local_90;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00b37300();
  FUN_01d265f0();
  if (local_90 == '\0') {
    if (local_98 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_98 == 0) {
    return;
  }
  if (0 < *(int *)(local_98 + 0xc)) {
    lVar5 = 0;
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(local_98 + 0x10) + lVar5 * 8);
      cVar4 = (**(code **)(*plVar1 + 0x488))();
      lVar2 = g_027e7c20;
      if (cVar4 != '\0') {
        if (g_027e7c20 != 0) {
          FUN_00d50b00();
        }
        local_70 = lVar2;
        local_68 = '\x01';
        FUN_01ccab60(param_1,&local_70);
        plVar3 = local_50;
        if (local_48 == '\0') {
          if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
             (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_48 = '\0';
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        lVar2 = g_02725a40;
        if (plVar3 != (int64_t *)0x0) {
          if (g_02725a40 != 0) {
            FUN_00d50b00();
          }
          local_60 = lVar2;
          local_58 = '\x01';
          cVar4 = (**(code **)(*plVar3 + 0x50))();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            local_38 = 0;
            lVar2 = *(int64_t *)(this_ptr + 0xa0);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            local_38 = '\x01';
            local_40 = lVar2;
            (**(code **)(*plVar1 + 0x498))(param_1,1);
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < *(int *)(local_98 + 0xc));
  }
  FUN_01d300d0();
  FUN_00d50b20();
  return;
}

