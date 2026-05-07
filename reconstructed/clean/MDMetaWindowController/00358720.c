// Function: FUN_00358720
// Address: 00358720
// Size: 521 bytes
// Class: MDMetaWindowController

uint64_t FUN_00358720(void* param_1,int param_2)

{
  void *pvVar1;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_38;
  char local_30;
  
  if (param_2 != 0) {
    FUN_01caeb00();
    (**(code **)(*local_58 + 0x960))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_003ba620();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      FUN_003ba620();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5f80();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01e53c20();
    FUN_01e42030();
    FUN_01bbfb40();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d8c820();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  return 1;
}

