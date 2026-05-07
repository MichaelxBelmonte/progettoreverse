// Function: FUN_0062a580
// Address: 0062a580
// Size: 941 bytes
// Class: MDDocumentConversionSheet

void FUN_0062a580(void)

{
  char cVar1;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *local_38;
  char local_30;
  
  if (*arg1 != 0) {
    FUN_006e4100();
  }
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_38 + 0x450))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') goto LAB_0062a718;
  FUN_00631670();
  if (local_30 == '\0') {
    if (local_38 == (int64_t *)0x0) goto LAB_0062a718;
    FUN_00d50b00();
    if (*arg1 == 0) goto LAB_0062a68e;
LAB_0062a5fb:
    if (local_38 == (int64_t *)0x0) goto LAB_0062a718;
    (**(code **)(*local_38 + 0x5d8))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 != (int64_t *)0x0) {
      (**(code **)(*local_38 + 0x5d8))();
      (**(code **)(*local_38 + 0x688))();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (*arg1 != 0) goto LAB_0062a5fb;
LAB_0062a68e:
    if (local_38 == (int64_t *)0x0) goto LAB_0062a718;
    FUN_006f4810();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 != (int64_t *)0x0) {
      FUN_006f4810();
      (**(code **)(*local_38 + 0x928))();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
LAB_0062a718:
  if ((*(int64_t *)(this_ptr + 0xc0) != 0) && (*arg1 != 0)) {
    FUN_006e22c0();
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_0009b0b0();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_006e2ae0();
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_0009f2a0();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((*(int64_t *)(this_ptr + 200) != 0) && (*arg1 != 0)) {
    FUN_006e24f0();
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_0009b0b0();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_006e2de0();
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_0009f2a0();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}

