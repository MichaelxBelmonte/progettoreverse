// Function: FUN_00b4de00
// Address: 00b4de00
// Size: 545 bytes
// Class: GNDate

uint32_t FUN_00b4de00(uint16_t param_1,short param_2)

{
  bool bVar1;
  uint32_t uVar2;
  uint32_t unaff_ESI;
  int64_t this_ptr;
  int64_t lVar3;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  short local_52;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00da7190();
  if (*(int64_t *)(this_ptr + 0x28) != 0) {
    if (param_2 == 0) {
      FUN_00d8ede0();
      local_68 = local_40;
      local_60 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_60 = '\x01';
      FUN_01d3c780(unaff_ESI,&local_68,param_1);
      lVar3 = local_50;
      if (local_50 == 0) {
        lVar3 = 0;
        bVar1 = false;
      }
      else if (local_48 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
        bVar1 = true;
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_52 = param_2;
      FUN_00d920f0();
      local_78 = local_40;
      local_70 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_70 = '\x01';
      FUN_01d3c780(unaff_ESI,&local_78,param_1);
      lVar3 = local_50;
      if (local_50 == 0) {
        lVar3 = 0;
        bVar1 = false;
      }
      else if (local_48 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
        bVar1 = true;
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if (lVar3 != 0) {
      uVar2 = FUN_01d89290();
      if (bVar1) {
        FUN_00d50b20();
      }
      goto LAB_00b4e009;
    }
  }
  uVar2 = 0;
LAB_00b4e009:
  FUN_00da71b0();
  return uVar2;
}

